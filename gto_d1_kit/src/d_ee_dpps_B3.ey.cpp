/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2110_2_hr(const double ae,
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
                            const double* const g,
                            const double* const etx,
                            const double* const ety,
                            const double* const etz,
                            double* const hrx,
                            double* const hry,
                            double* const hrz)
{
    const double xAB = xA - xB;
    const double yAB = yA - yB;
    const double zAB = zA - zB;
    const double C425 = g[0];
    const double C436 = g[1];
    const double C447 = g[2];
    const double C512 = g[3];
    const double C523 = g[4];
    const double C534 = g[5];
    const double C599 = g[6];
    const double C610 = g[7];
    const double C621 = g[8];
    const double C686 = g[9];
    const double C696 = g[10];
    const double C706 = g[11];
    const double C767 = g[12];
    const double C777 = g[13];
    const double C787 = g[14];
    const double C845 = g[15];
    const double C855 = g[16];
    const double C865 = g[17];
    const double C428 = etx[0];
    const double C429 = etx[1];
    const double C439 = etx[2];
    const double C440 = etx[3];
    const double C450 = etx[4];
    const double C451 = etx[5];
    const double C460 = etx[6];
    const double C469 = etx[7];
    const double C478 = etx[8];
    const double C487 = etx[9];
    const double C496 = etx[10];
    const double C505 = etx[11];
    const double C515 = etx[12];
    const double C516 = etx[13];
    const double C526 = etx[14];
    const double C527 = etx[15];
    const double C537 = etx[16];
    const double C538 = etx[17];
    const double C547 = etx[18];
    const double C556 = etx[19];
    const double C565 = etx[20];
    const double C574 = etx[21];
    const double C583 = etx[22];
    const double C592 = etx[23];
    const double C602 = etx[24];
    const double C603 = etx[25];
    const double C613 = etx[26];
    const double C614 = etx[27];
    const double C624 = etx[28];
    const double C625 = etx[29];
    const double C634 = etx[30];
    const double C643 = etx[31];
    const double C652 = etx[32];
    const double C661 = etx[33];
    const double C670 = etx[34];
    const double C679 = etx[35];
    const double C689 = etx[36];
    const double C699 = etx[37];
    const double C709 = etx[38];
    const double C742 = etx[39];
    const double C751 = etx[40];
    const double C760 = etx[41];
    const double C770 = etx[42];
    const double C780 = etx[43];
    const double C790 = etx[44];
    const double C848 = etx[45];
    const double C858 = etx[46];
    const double C868 = etx[47];
    const double C925 = ety[0];
    const double C926 = ety[1];
    const double C935 = ety[2];
    const double C936 = ety[3];
    const double C945 = ety[4];
    const double C946 = ety[5];
    const double C955 = ety[6];
    const double C964 = ety[7];
    const double C973 = ety[8];
    const double C982 = ety[9];
    const double C991 = ety[10];
    const double C1000 = ety[11];
    const double C1009 = ety[12];
    const double C1010 = ety[13];
    const double C1019 = ety[14];
    const double C1020 = ety[15];
    const double C1029 = ety[16];
    const double C1030 = ety[17];
    const double C1039 = ety[18];
    const double C1048 = ety[19];
    const double C1057 = ety[20];
    const double C1066 = ety[21];
    const double C1075 = ety[22];
    const double C1084 = ety[23];
    const double C1093 = ety[24];
    const double C1094 = ety[25];
    const double C1103 = ety[26];
    const double C1104 = ety[27];
    const double C1113 = ety[28];
    const double C1114 = ety[29];
    const double C1123 = ety[30];
    const double C1132 = ety[31];
    const double C1141 = ety[32];
    const double C1150 = ety[33];
    const double C1159 = ety[34];
    const double C1168 = ety[35];
    const double C1177 = ety[36];
    const double C1186 = ety[37];
    const double C1195 = ety[38];
    const double C1228 = ety[39];
    const double C1237 = ety[40];
    const double C1246 = ety[41];
    const double C1255 = ety[42];
    const double C1264 = ety[43];
    const double C1273 = ety[44];
    const double C1330 = ety[45];
    const double C1339 = ety[46];
    const double C1348 = ety[47];
    const double C1405 = etz[0];
    const double C1406 = etz[1];
    const double C1415 = etz[2];
    const double C1416 = etz[3];
    const double C1425 = etz[4];
    const double C1426 = etz[5];
    const double C1435 = etz[6];
    const double C1444 = etz[7];
    const double C1453 = etz[8];
    const double C1462 = etz[9];
    const double C1471 = etz[10];
    const double C1480 = etz[11];
    const double C1489 = etz[12];
    const double C1490 = etz[13];
    const double C1499 = etz[14];
    const double C1500 = etz[15];
    const double C1509 = etz[16];
    const double C1510 = etz[17];
    const double C1519 = etz[18];
    const double C1528 = etz[19];
    const double C1537 = etz[20];
    const double C1546 = etz[21];
    const double C1555 = etz[22];
    const double C1564 = etz[23];
    const double C1573 = etz[24];
    const double C1574 = etz[25];
    const double C1583 = etz[26];
    const double C1584 = etz[27];
    const double C1593 = etz[28];
    const double C1594 = etz[29];
    const double C1603 = etz[30];
    const double C1612 = etz[31];
    const double C1621 = etz[32];
    const double C1630 = etz[33];
    const double C1639 = etz[34];
    const double C1648 = etz[35];
    const double C1657 = etz[36];
    const double C1666 = etz[37];
    const double C1675 = etz[38];
    const double C1708 = etz[39];
    const double C1717 = etz[40];
    const double C1726 = etz[41];
    const double C1735 = etz[42];
    const double C1744 = etz[43];
    const double C1753 = etz[44];
    const double C1810 = etz[45];
    const double C1819 = etz[46];
    const double C1828 = etz[47];
    const double C40 = C428 - C425 + xAB * C429;
    const double C49 = C439 - C436 + xAB * C440;
    const double C56 = C450 - C447 + xAB * C451;
    const double C63 = C460 + yAB * C429;
    const double C70 = C469 + yAB * C440;
    const double C77 = C478 + yAB * C451;
    const double C84 = C487 + zAB * C429;
    const double C91 = C496 + zAB * C440;
    const double C98 = C505 + zAB * C451;
    const double C105 = C515 - C512 + xAB * C516;
    const double C112 = C526 - C523 + xAB * C527;
    const double C119 = C537 - C534 + xAB * C538;
    const double C126 = C547 + yAB * C516;
    const double C133 = C556 + yAB * C527;
    const double C140 = C565 + yAB * C538;
    const double C147 = C574 + zAB * C516;
    const double C154 = C583 + zAB * C527;
    const double C161 = C592 + zAB * C538;
    const double C168 = C602 - C599 + xAB * C603;
    const double C175 = C613 - C610 + xAB * C614;
    const double C182 = C624 - C621 + xAB * C625;
    const double C189 = C634 + yAB * C603;
    const double C196 = C643 + yAB * C614;
    const double C203 = C652 + yAB * C625;
    const double C210 = C661 + zAB * C603;
    const double C217 = C670 + zAB * C614;
    const double C224 = C679 + zAB * C625;
    const double C231 = C460 - C686 + xAB * C689;
    const double C238 = C469 - C696 + xAB * C699;
    const double C245 = C478 - C706 + xAB * C709;
    const double C252 = C515 + yAB * C689;
    const double C259 = C526 + yAB * C699;
    const double C266 = C537 + yAB * C709;
    const double C273 = C742 + zAB * C689;
    const double C280 = C751 + zAB * C699;
    const double C287 = C760 + zAB * C709;
    const double C294 = C487 - C767 + xAB * C770;
    const double C301 = C496 - C777 + xAB * C780;
    const double C308 = C505 - C787 + xAB * C790;
    const double C315 = C742 + yAB * C770;
    const double C322 = C751 + yAB * C780;
    const double C329 = C760 + yAB * C790;
    const double C336 = C602 + zAB * C770;
    const double C343 = C613 + zAB * C780;
    const double C350 = C624 + zAB * C790;
    const double C357 = C742 - C845 + xAB * C848;
    const double C364 = C751 - C855 + xAB * C858;
    const double C371 = C760 - C865 + xAB * C868;
    const double C378 = C574 + yAB * C848;
    const double C385 = C583 + yAB * C858;
    const double C392 = C592 + yAB * C868;
    const double C399 = C634 + zAB * C848;
    const double C406 = C643 + zAB * C858;
    const double C413 = C652 + zAB * C868;
    const double C44 = C925 + xAB * C926;
    const double C51 = C935 + xAB * C936;
    const double C58 = C945 + xAB * C946;
    const double C65 = C955 - C425 + yAB * C926;
    const double C72 = C964 - C436 + yAB * C936;
    const double C79 = C973 - C447 + yAB * C946;
    const double C86 = C982 + zAB * C926;
    const double C93 = C991 + zAB * C936;
    const double C100 = C1000 + zAB * C946;
    const double C107 = C1009 + xAB * C1010;
    const double C114 = C1019 + xAB * C1020;
    const double C121 = C1029 + xAB * C1030;
    const double C128 = C1039 - C512 + yAB * C1010;
    const double C135 = C1048 - C523 + yAB * C1020;
    const double C142 = C1057 - C534 + yAB * C1030;
    const double C149 = C1066 + zAB * C1010;
    const double C156 = C1075 + zAB * C1020;
    const double C163 = C1084 + zAB * C1030;
    const double C170 = C1093 + xAB * C1094;
    const double C177 = C1103 + xAB * C1104;
    const double C184 = C1113 + xAB * C1114;
    const double C191 = C1123 - C599 + yAB * C1094;
    const double C198 = C1132 - C610 + yAB * C1104;
    const double C205 = C1141 - C621 + yAB * C1114;
    const double C212 = C1150 + zAB * C1094;
    const double C219 = C1159 + zAB * C1104;
    const double C226 = C1168 + zAB * C1114;
    const double C233 = C955 + xAB * C1177;
    const double C240 = C964 + xAB * C1186;
    const double C247 = C973 + xAB * C1195;
    const double C254 = C1009 - C686 + yAB * C1177;
    const double C261 = C1019 - C696 + yAB * C1186;
    const double C268 = C1029 - C706 + yAB * C1195;
    const double C275 = C1228 + zAB * C1177;
    const double C282 = C1237 + zAB * C1186;
    const double C289 = C1246 + zAB * C1195;
    const double C296 = C982 + xAB * C1255;
    const double C303 = C991 + xAB * C1264;
    const double C310 = C1000 + xAB * C1273;
    const double C317 = C1228 - C767 + yAB * C1255;
    const double C324 = C1237 - C777 + yAB * C1264;
    const double C331 = C1246 - C787 + yAB * C1273;
    const double C338 = C1093 + zAB * C1255;
    const double C345 = C1103 + zAB * C1264;
    const double C352 = C1113 + zAB * C1273;
    const double C359 = C1228 + xAB * C1330;
    const double C366 = C1237 + xAB * C1339;
    const double C373 = C1246 + xAB * C1348;
    const double C380 = C1066 - C845 + yAB * C1330;
    const double C387 = C1075 - C855 + yAB * C1339;
    const double C394 = C1084 - C865 + yAB * C1348;
    const double C401 = C1123 + zAB * C1330;
    const double C408 = C1132 + zAB * C1339;
    const double C415 = C1141 + zAB * C1348;
    const double C46 = C1405 + xAB * C1406;
    const double C53 = C1415 + xAB * C1416;
    const double C60 = C1425 + xAB * C1426;
    const double C67 = C1435 + yAB * C1406;
    const double C74 = C1444 + yAB * C1416;
    const double C81 = C1453 + yAB * C1426;
    const double C88 = C1462 - C425 + zAB * C1406;
    const double C95 = C1471 - C436 + zAB * C1416;
    const double C102 = C1480 - C447 + zAB * C1426;
    const double C109 = C1489 + xAB * C1490;
    const double C116 = C1499 + xAB * C1500;
    const double C123 = C1509 + xAB * C1510;
    const double C130 = C1519 + yAB * C1490;
    const double C137 = C1528 + yAB * C1500;
    const double C144 = C1537 + yAB * C1510;
    const double C151 = C1546 - C512 + zAB * C1490;
    const double C158 = C1555 - C523 + zAB * C1500;
    const double C165 = C1564 - C534 + zAB * C1510;
    const double C172 = C1573 + xAB * C1574;
    const double C179 = C1583 + xAB * C1584;
    const double C186 = C1593 + xAB * C1594;
    const double C193 = C1603 + yAB * C1574;
    const double C200 = C1612 + yAB * C1584;
    const double C207 = C1621 + yAB * C1594;
    const double C214 = C1630 - C599 + zAB * C1574;
    const double C221 = C1639 - C610 + zAB * C1584;
    const double C228 = C1648 - C621 + zAB * C1594;
    const double C235 = C1435 + xAB * C1657;
    const double C242 = C1444 + xAB * C1666;
    const double C249 = C1453 + xAB * C1675;
    const double C256 = C1489 + yAB * C1657;
    const double C263 = C1499 + yAB * C1666;
    const double C270 = C1509 + yAB * C1675;
    const double C277 = C1708 - C686 + zAB * C1657;
    const double C284 = C1717 - C696 + zAB * C1666;
    const double C291 = C1726 - C706 + zAB * C1675;
    const double C298 = C1462 + xAB * C1735;
    const double C305 = C1471 + xAB * C1744;
    const double C312 = C1480 + xAB * C1753;
    const double C319 = C1708 + yAB * C1735;
    const double C326 = C1717 + yAB * C1744;
    const double C333 = C1726 + yAB * C1753;
    const double C340 = C1573 - C767 + zAB * C1735;
    const double C347 = C1583 - C777 + zAB * C1744;
    const double C354 = C1593 - C787 + zAB * C1753;
    const double C361 = C1708 + xAB * C1810;
    const double C368 = C1717 + xAB * C1819;
    const double C375 = C1726 + xAB * C1828;
    const double C382 = C1546 + yAB * C1810;
    const double C389 = C1555 + yAB * C1819;
    const double C396 = C1564 + yAB * C1828;
    const double C403 = C1603 - C845 + zAB * C1810;
    const double C410 = C1612 - C855 + zAB * C1819;
    const double C417 = C1621 - C865 + zAB * C1828;
    hrx[0] = C40;
    hrx[1] = C49;
    hrx[2] = C56;
    hrx[3] = C63;
    hrx[4] = C70;
    hrx[5] = C77;
    hrx[6] = C84;
    hrx[7] = C91;
    hrx[8] = C98;
    hrx[9] = C105;
    hrx[10] = C112;
    hrx[11] = C119;
    hrx[12] = C126;
    hrx[13] = C133;
    hrx[14] = C140;
    hrx[15] = C147;
    hrx[16] = C154;
    hrx[17] = C161;
    hrx[18] = C168;
    hrx[19] = C175;
    hrx[20] = C182;
    hrx[21] = C189;
    hrx[22] = C196;
    hrx[23] = C203;
    hrx[24] = C210;
    hrx[25] = C217;
    hrx[26] = C224;
    hrx[27] = C231;
    hrx[28] = C238;
    hrx[29] = C245;
    hrx[30] = C252;
    hrx[31] = C259;
    hrx[32] = C266;
    hrx[33] = C273;
    hrx[34] = C280;
    hrx[35] = C287;
    hrx[36] = C294;
    hrx[37] = C301;
    hrx[38] = C308;
    hrx[39] = C315;
    hrx[40] = C322;
    hrx[41] = C329;
    hrx[42] = C336;
    hrx[43] = C343;
    hrx[44] = C350;
    hrx[45] = C357;
    hrx[46] = C364;
    hrx[47] = C371;
    hrx[48] = C378;
    hrx[49] = C385;
    hrx[50] = C392;
    hrx[51] = C399;
    hrx[52] = C406;
    hrx[53] = C413;
    hry[0] = C44;
    hry[1] = C51;
    hry[2] = C58;
    hry[3] = C65;
    hry[4] = C72;
    hry[5] = C79;
    hry[6] = C86;
    hry[7] = C93;
    hry[8] = C100;
    hry[9] = C107;
    hry[10] = C114;
    hry[11] = C121;
    hry[12] = C128;
    hry[13] = C135;
    hry[14] = C142;
    hry[15] = C149;
    hry[16] = C156;
    hry[17] = C163;
    hry[18] = C170;
    hry[19] = C177;
    hry[20] = C184;
    hry[21] = C191;
    hry[22] = C198;
    hry[23] = C205;
    hry[24] = C212;
    hry[25] = C219;
    hry[26] = C226;
    hry[27] = C233;
    hry[28] = C240;
    hry[29] = C247;
    hry[30] = C254;
    hry[31] = C261;
    hry[32] = C268;
    hry[33] = C275;
    hry[34] = C282;
    hry[35] = C289;
    hry[36] = C296;
    hry[37] = C303;
    hry[38] = C310;
    hry[39] = C317;
    hry[40] = C324;
    hry[41] = C331;
    hry[42] = C338;
    hry[43] = C345;
    hry[44] = C352;
    hry[45] = C359;
    hry[46] = C366;
    hry[47] = C373;
    hry[48] = C380;
    hry[49] = C387;
    hry[50] = C394;
    hry[51] = C401;
    hry[52] = C408;
    hry[53] = C415;
    hrz[0] = C46;
    hrz[1] = C53;
    hrz[2] = C60;
    hrz[3] = C67;
    hrz[4] = C74;
    hrz[5] = C81;
    hrz[6] = C88;
    hrz[7] = C95;
    hrz[8] = C102;
    hrz[9] = C109;
    hrz[10] = C116;
    hrz[11] = C123;
    hrz[12] = C130;
    hrz[13] = C137;
    hrz[14] = C144;
    hrz[15] = C151;
    hrz[16] = C158;
    hrz[17] = C165;
    hrz[18] = C172;
    hrz[19] = C179;
    hrz[20] = C186;
    hrz[21] = C193;
    hrz[22] = C200;
    hrz[23] = C207;
    hrz[24] = C214;
    hrz[25] = C221;
    hrz[26] = C228;
    hrz[27] = C235;
    hrz[28] = C242;
    hrz[29] = C249;
    hrz[30] = C256;
    hrz[31] = C263;
    hrz[32] = C270;
    hrz[33] = C277;
    hrz[34] = C284;
    hrz[35] = C291;
    hrz[36] = C298;
    hrz[37] = C305;
    hrz[38] = C312;
    hrz[39] = C319;
    hrz[40] = C326;
    hrz[41] = C333;
    hrz[42] = C340;
    hrz[43] = C347;
    hrz[44] = C354;
    hrz[45] = C361;
    hrz[46] = C368;
    hrz[47] = C375;
    hrz[48] = C382;
    hrz[49] = C389;
    hrz[50] = C396;
    hrz[51] = C403;
    hrz[52] = C410;
    hrz[53] = C417;
}
