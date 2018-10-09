/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/misc.hpp"
#include "symmetry_kit/symmetry_group.hpp"

namespace {
    std::vector<arma::mat> _generators()
    {
        std::vector<arma::mat> g;
        g.push_back(niedoida::symmetry::make_sn_rep(4));
        g.push_back(niedoida::symmetry::make_axis_rep(
            -4, -1 * std::sqrt(2.0) / 2, std::sqrt(2.0) / 2, 0));
        g.push_back(niedoida::symmetry::make_axis_rep(
            -4, std::sqrt(2.0) / 2, -1 * std::sqrt(2.0) / 2, 0));
        return g;
    }
}

namespace niedoida {
    namespace symmetry {
        TdSymmetryGroup::TdSymmetryGroup() : TSymmetryGroup(_generators()) {}

        std::string TdSymmetryGroup::name() const { return std::string("Td"); }
    }
}
