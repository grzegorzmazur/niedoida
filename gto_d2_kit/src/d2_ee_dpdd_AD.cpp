/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_dpdd_AD.hpp"
#include "gto_d2_kit/d2_ee_dpdd_AC.hpp"

void second_derivative_ee_2122_14(const double ae,
                                  const double xA,
                                  const double yA,
                                  const double zA,
                                  const double be,
                                  const double xB,
                                  const double yB,
                                  const double zB,
                                  const double ce,
                                  const double xC,
                                  const double yC,
                                  const double zC,
                                  const double de,
                                  const double xD,
                                  const double yD,
                                  const double zD,
                                  const double* const bs,
                                  double* const d2eexx,
                                  double* const d2eexy,
                                  double* const d2eexz,
                                  double* const d2eeyx,
                                  double* const d2eeyy,
                                  double* const d2eeyz,
                                  double* const d2eezx,
                                  double* const d2eezy,
                                  double* const d2eezz)
{
    double txx[375] = {};
    double txy[375] = {};
    double txz[375] = {};
    double tyx[375] = {};
    double tyy[375] = {};
    double tyz[375] = {};
    double tzx[375] = {};
    double tzy[375] = {};
    double tzz[375] = {};
    second_derivative_ee_2122_13(ae,
                                 xA,
                                 yA,
                                 zA,
                                 be,
                                 xB,
                                 yB,
                                 zB,
                                 de,
                                 xD,
                                 yD,
                                 zD,
                                 ce,
                                 xC,
                                 yC,
                                 zC,
                                 bs,
                                 txx,
                                 txy,
                                 txz,
                                 tyx,
                                 tyy,
                                 tyz,
                                 tzx,
                                 tzy,
                                 tzz);
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            for (int l = 0; l < 5; l++) {
                for (int k = 0; k < 5; k++) {
                    int destinyInd = (((i)*3 + j) * 5 + k) * 5 + l;
                    int sourceInd = (((i)*3 + j) * 5 + l) * 5 + k;
                    d2eexx[destinyInd] += txx[sourceInd];
                    d2eexy[destinyInd] += txy[sourceInd];
                    d2eexz[destinyInd] += txz[sourceInd];
                    d2eeyx[destinyInd] += tyx[sourceInd];
                    d2eeyy[destinyInd] += tyy[sourceInd];
                    d2eeyz[destinyInd] += tyz[sourceInd];
                    d2eezx[destinyInd] += tzx[sourceInd];
                    d2eezy[destinyInd] += tzy[sourceInd];
                    d2eezz[destinyInd] += tzz[sourceInd];
                }
            }
        }
    }
}
