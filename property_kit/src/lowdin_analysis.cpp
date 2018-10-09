/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "property_kit/lowdin_analysis.hpp"

#include "core_kit/core_utils.hpp"

#include <cassert>

namespace niedoida {
    namespace property {
        LowdinAnalysis::LowdinAnalysis(const core::BasisSet& basis_set,
                                       const arma::mat& ort_P_alpha,
                                       const arma::mat& ort_P_beta)
        {
            assert(ort_P_alpha.n_rows == ort_P_beta.n_rows);

            const std::vector<std::size_t> m_no_contractions_in_atom =
                no_contractions_in_atom(basis_set);

            const std::vector<std::size_t> m_first_contraction_in_atom =
                first_contraction_in_atom(basis_set);

            const std::size_t no_atoms = m_no_contractions_in_atom.size();

            m_atomic_populations[core::SPIN_ALPHA] =
                m_atomic_populations[core::SPIN_BETA] =
                    arma::zeros<arma::vec>(no_atoms);
            m_orbital_populations[core::SPIN_ALPHA] =
                m_orbital_populations[core::SPIN_BETA] =
                    arma::zeros<arma::vec>(basis_set.real_size());

            for (std::size_t a = 0; a < no_atoms; ++a) {
                for (std::size_t i = m_first_contraction_in_atom[a];
                     i < m_first_contraction_in_atom[a] +
                             m_no_contractions_in_atom[a];
                     ++i) {
                    m_orbital_populations[core::SPIN_ALPHA](i) +=
                        ort_P_alpha(i, i);
                    m_orbital_populations[core::SPIN_BETA](i) +=
                        ort_P_beta(i, i);
                    m_atomic_populations[core::SPIN_ALPHA](a) +=
                        ort_P_alpha(i, i);
                    m_atomic_populations[core::SPIN_BETA](a) +=
                        ort_P_beta(i, i);
                }
            }
        }
    }
}
