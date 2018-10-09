/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2221_3_et(const double ae,
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
                            const double* const vrx,
                            const double* const vry,
                            const double* const vrz,
                            double* const etx,
                            double* const ety,
                            double* const etz)
{
    const double xAB = xA - xB;
    const double yAB = yA - yB;
    const double zAB = zA - zB;
    const double xCD = xC - xD;
    const double yCD = yC - yD;
    const double zCD = zC - zD;
    const double p = ae + be;
    const double q = ce + de;
    const double C52189 = g[216];
    const double C52206 = g[217];
    const double C52222 = g[218];
    const double C52239 = g[219];
    const double C52256 = g[220];
    const double C52273 = g[221];
    const double C52376 = g[222];
    const double C52392 = g[223];
    const double C52407 = g[224];
    const double C52557 = g[225];
    const double C52573 = g[226];
    const double C52588 = g[227];
    const double C52738 = g[228];
    const double C52754 = g[229];
    const double C52769 = g[230];
    const double C52785 = g[231];
    const double C52801 = g[232];
    const double C52816 = g[233];
    const double C52832 = g[234];
    const double C52848 = g[235];
    const double C52863 = g[236];
    const double C52924 = g[237];
    const double C52941 = g[238];
    const double C52957 = g[239];
    const double C52975 = g[240];
    const double C53051 = g[241];
    const double C53067 = g[242];
    const double C53170 = g[243];
    const double C53186 = g[244];
    const double C53290 = g[245];
    const double C53307 = g[246];
    const double C53323 = g[247];
    const double C53339 = g[248];
    const double C53354 = g[249];
    const double C53371 = g[250];
    const double C53416 = g[251];
    const double C53433 = g[252];
    const double C53449 = g[253];
    const double C53467 = g[254];
    const double C53543 = g[255];
    const double C53559 = g[256];
    const double C53664 = g[257];
    const double C53680 = g[258];
    const double C53783 = g[259];
    const double C53800 = g[260];
    const double C53817 = g[261];
    const double C53833 = g[262];
    const double C53848 = g[263];
    const double C53865 = g[264];
    const double C53910 = g[265];
    const double C53925 = g[266];
    const double C53971 = g[267];
    const double C54029 = g[268];
    const double C54088 = g[269];
    const double C54103 = g[270];
    const double C54119 = g[271];
    const double C54148 = g[272];
    const double C54163 = g[273];
    const double C54208 = g[274];
    const double C54266 = g[275];
    const double C54323 = g[276];
    const double C54339 = g[277];
    const double C54355 = g[278];
    const double C54384 = g[279];
    const double C54400 = g[280];
    const double C54446 = g[281];
    const double C54504 = g[282];
    const double C54561 = g[283];
    const double C54577 = g[284];
    const double C54593 = g[285];
    const double C54623 = g[286];
    const double C54638 = g[287];
    const double C54654 = g[288];
    const double C54670 = g[289];
    const double C54743 = g[290];
    const double C54758 = g[291];
    const double C54862 = g[292];
    const double C54877 = g[293];
    const double C54980 = g[294];
    const double C54995 = g[295];
    const double C55010 = g[296];
    const double C55025 = g[297];
    const double C55040 = g[298];
    const double C55055 = g[299];
    const double C55101 = g[300];
    const double C55118 = g[301];
    const double C55134 = g[302];
    const double C55151 = g[303];
    const double C55226 = g[304];
    const double C55242 = g[305];
    const double C55345 = g[306];
    const double C55361 = g[307];
    const double C55465 = g[308];
    const double C55481 = g[309];
    const double C55496 = g[310];
    const double C55512 = g[311];
    const double C55527 = g[312];
    const double C55543 = g[313];
    const double C55587 = g[314];
    const double C55604 = g[315];
    const double C55620 = g[316];
    const double C55637 = g[317];
    const double C55712 = g[318];
    const double C55728 = g[319];
    const double C55835 = g[320];
    const double C55851 = g[321];
    const double C55954 = g[322];
    const double C55970 = g[323];
    const double C55986 = g[324];
    const double C56002 = g[325];
    const double C56017 = g[326];
    const double C56033 = g[327];
    const double C56079 = g[328];
    const double C56094 = g[329];
    const double C56140 = g[330];
    const double C56198 = g[331];
    const double C56257 = g[332];
    const double C56272 = g[333];
    const double C56288 = g[334];
    const double C56317 = g[335];
    const double C56332 = g[336];
    const double C56377 = g[337];
    const double C56435 = g[338];
    const double C56492 = g[339];
    const double C56507 = g[340];
    const double C56523 = g[341];
    const double C56552 = g[342];
    const double C56568 = g[343];
    const double C56613 = g[344];
    const double C56671 = g[345];
    const double C56728 = g[346];
    const double C56743 = g[347];
    const double C56759 = g[348];
    const double C56788 = g[349];
    const double C56803 = g[350];
    const double C56819 = g[351];
    const double C56835 = g[352];
    const double C56908 = g[353];
    const double C56923 = g[354];
    const double C57025 = g[355];
    const double C57040 = g[356];
    const double C57144 = g[357];
    const double C57159 = g[358];
    const double C57174 = g[359];
    const double C57189 = g[360];
    const double C57204 = g[361];
    const double C57219 = g[362];
    const double C57263 = g[363];
    const double C57279 = g[364];
    const double C57324 = g[365];
    const double C57381 = g[366];
    const double C57439 = g[367];
    const double C57454 = g[368];
    const double C57469 = g[369];
    const double C57498 = g[370];
    const double C57515 = g[371];
    const double C57531 = g[372];
    const double C57548 = g[373];
    const double C57623 = g[374];
    const double C57639 = g[375];
    const double C57744 = g[376];
    const double C57760 = g[377];
    const double C57863 = g[378];
    const double C57879 = g[379];
    const double C57895 = g[380];
    const double C57911 = g[381];
    const double C57926 = g[382];
    const double C57942 = g[383];
    const double C57986 = g[384];
    const double C58001 = g[385];
    const double C58047 = g[386];
    const double C58105 = g[387];
    const double C58164 = g[388];
    const double C58179 = g[389];
    const double C58195 = g[390];
    const double C58224 = g[391];
    const double C58239 = g[392];
    const double C58284 = g[393];
    const double C58342 = g[394];
    const double C58399 = g[395];
    const double C58415 = g[396];
    const double C58431 = g[397];
    const double C58460 = g[398];
    const double C58476 = g[399];
    const double C58521 = g[400];
    const double C58579 = g[401];
    const double C58636 = g[402];
    const double C58651 = g[403];
    const double C58667 = g[404];
    const double C58696 = g[405];
    const double C58711 = g[406];
    const double C58756 = g[407];
    const double C58813 = g[408];
    const double C58870 = g[409];
    const double C58885 = g[410];
    const double C58901 = g[411];
    const double C58930 = g[412];
    const double C58945 = g[413];
    const double C58990 = g[414];
    const double C59047 = g[415];
    const double C59104 = g[416];
    const double C59119 = g[417];
    const double C59134 = g[418];
    const double C59163 = g[419];
    const double C59178 = g[420];
    const double C59223 = g[421];
    const double C59280 = g[422];
    const double C59337 = g[423];
    const double C59353 = g[424];
    const double C59369 = g[425];
    const double C59398 = g[426];
    const double C59413 = g[427];
    const double C59457 = g[428];
    const double C59514 = g[429];
    const double C59571 = g[430];
    const double C59586 = g[431];
    const double C59601 = g[432];
    const double C59630 = g[433];
    const double C59646 = g[434];
    const double C59662 = g[435];
    const double C59676 = g[436];
    const double C59693 = g[437];
    const double C59708 = g[438];
    const double C59723 = g[439];
    const double C59739 = g[440];
    const double C59756 = g[441];
    const double C60194 = g[442];
    const double C60209 = g[443];
    const double C60225 = g[444];
    const double C60240 = g[445];
    const double C60255 = g[446];
    const double C60270 = g[447];
    const double C60286 = g[448];
    const double C60301 = g[449];
    const double C60318 = g[450];
    const double C60614 = g[451];
    const double C60629 = g[452];
    const double C60645 = g[453];
    const double C60660 = g[454];
    const double C60675 = g[455];
    const double C60690 = g[456];
    const double C60706 = g[457];
    const double C60721 = g[458];
    const double C60737 = g[459];
    const double C61059 = g[460];
    const double C61074 = g[461];
    const double C61148 = g[462];
    const double C61205 = g[463];
    const double C61220 = g[464];
    const double C61235 = g[465];
    const double C61306 = g[466];
    const double C61321 = g[467];
    const double C61506 = g[468];
    const double C61521 = g[469];
    const double C61537 = g[470];
    const double C61552 = g[471];
    const double C61567 = g[472];
    const double C61582 = g[473];
    const double C61600 = g[474];
    const double C61841 = g[475];
    const double C61856 = g[476];
    const double C61872 = g[477];
    const double C61887 = g[478];
    const double C61902 = g[479];
    const double C61917 = g[480];
    const double C61934 = g[481];
    const double C62257 = g[482];
    const double C62272 = g[483];
    const double C62346 = g[484];
    const double C62389 = g[485];
    const double C62404 = g[486];
    const double C62447 = g[487];
    const double C62462 = g[488];
    const double C62604 = g[489];
    const double C62619 = g[490];
    const double C62649 = g[491];
    const double C62664 = g[492];
    const double C62680 = g[493];
    const double C62695 = g[494];
    const double C62710 = g[495];
    const double C62725 = g[496];
    const double C62742 = g[497];
    const double C63010 = g[498];
    const double C63025 = g[499];
    const double C63098 = g[500];
    const double C63155 = g[501];
    const double C63170 = g[502];
    const double C63213 = g[503];
    const double C63241 = g[504];
    const double C63256 = g[505];
    const double C63299 = g[506];
    const double C63315 = g[507];
    const double C63330 = g[508];
    const double C63346 = g[509];
    const double C63467 = g[510];
    const double C63482 = g[511];
    const double C63497 = g[512];
    const double C63617 = g[513];
    const double C63632 = g[514];
    const double C63647 = g[515];
    const double C63764 = g[516];
    const double C63821 = g[517];
    const double C63836 = g[518];
    const double C63851 = g[519];
    const double C63866 = g[520];
    const double C63881 = g[521];
    const double C64001 = g[522];
    const double C64016 = g[523];
    const double C64031 = g[524];
    const double C64046 = g[525];
    const double C64061 = g[526];
    const double C64178 = g[527];
    const double C64235 = g[528];
    const double C64250 = g[529];
    const double C64265 = g[530];
    const double C64280 = g[531];
    const double C64295 = g[532];
    const double C64426 = g[533];
    const double C71812 = g[534];
    const double C71828 = g[535];
    const double C71929 = g[536];
    const double C71945 = g[537];
    const double C72135 = g[538];
    const double C72151 = g[539];
    const double C72371 = g[540];
    const double C72416 = g[541];
    const double C72432 = g[542];
    const double C72580 = g[543];
    const double C72785 = g[544];
    const double C72857 = g[545];
    const double C72873 = g[546];
    const double C73020 = g[547];
    const double C73123 = g[548];
    const double C73167 = g[549];
    const double C73225 = g[550];
    const double C73310 = g[551];
    const double C73422 = g[552];
    const double C73643 = g[553];
    const double C73688 = g[554];
    const double C73704 = g[555];
    const double C73824 = g[556];
    const double C73974 = g[557];
    const double C74074 = g[558];
    const double C74090 = g[559];
    const double C74209 = g[560];
    const double C74312 = g[561];
    const double C74356 = g[562];
    const double C74400 = g[563];
    const double C74457 = g[564];
    const double C74528 = g[565];
    const double C74775 = g[566];
    const double C74847 = g[567];
    const double C74863 = g[568];
    const double C74983 = g[569];
    const double C75058 = g[570];
    const double C75102 = g[571];
    const double C75159 = g[572];
    const double C75216 = g[573];
    const double C75244 = g[574];
    const double C75301 = g[575];
    const double C75912 = g[576];
    const double C75928 = g[577];
    const double C76088 = g[578];
    const double C76103 = g[579];
    const double C76318 = g[580];
    const double C76347 = g[581];
    const double C85752 = g[582];
    const double C85768 = g[583];
    const double C86121 = g[584];
    const double C86137 = g[585];
    const double C86888 = g[586];
    const double C86904 = g[587];
    const double C88345 = g[588];
    const double C52243 = vrx[0];
    const double C52261 = vrx[1];
    const double C52278 = vrx[2];
    const double C52962 = vrx[3];
    const double C52980 = vrx[4];
    const double C53454 = vrx[5];
    const double C53472 = vrx[6];
    const double C53929 = vrx[7];
    const double C54167 = vrx[8];
    const double C54405 = vrx[9];
    const double C54658 = vrx[10];
    const double C54674 = vrx[11];
    const double C55138 = vrx[12];
    const double C55155 = vrx[13];
    const double C55624 = vrx[14];
    const double C55641 = vrx[15];
    const double C56098 = vrx[16];
    const double C56336 = vrx[17];
    const double C56572 = vrx[18];
    const double C56823 = vrx[19];
    const double C56839 = vrx[20];
    const double C57283 = vrx[21];
    const double C57535 = vrx[22];
    const double C57552 = vrx[23];
    const double C58005 = vrx[24];
    const double C58243 = vrx[25];
    const double C58480 = vrx[26];
    const double C58716 = vrx[27];
    const double C58950 = vrx[28];
    const double C59183 = vrx[29];
    const double C59417 = vrx[30];
    const double C59634 = vrx[31];
    const double C59681 = vrx[32];
    const double C59712 = vrx[33];
    const double C59727 = vrx[34];
    const double C59743 = vrx[35];
    const double C59760 = vrx[36];
    const double C59819 = vrx[37];
    const double C59848 = vrx[38];
    const double C59964 = vrx[39];
    const double C59993 = vrx[40];
    const double C60066 = vrx[41];
    const double C60124 = vrx[42];
    const double C60153 = vrx[43];
    const double C60168 = vrx[44];
    const double C60274 = vrx[45];
    const double C60305 = vrx[46];
    const double C60322 = vrx[47];
    const double C60367 = vrx[48];
    const double C60441 = vrx[49];
    const double C60456 = vrx[50];
    const double C60515 = vrx[51];
    const double C60573 = vrx[52];
    const double C60602 = vrx[53];
    const double C60694 = vrx[54];
    const double C60741 = vrx[55];
    const double C60887 = vrx[56];
    const double C60946 = vrx[57];
    const double C61018 = vrx[58];
    const double C61047 = vrx[59];
    const double C61339 = vrx[60];
    const double C61409 = vrx[61];
    const double C61466 = vrx[62];
    const double C61586 = vrx[63];
    const double C61604 = vrx[64];
    const double C61650 = vrx[65];
    const double C61724 = vrx[66];
    const double C61739 = vrx[67];
    const double C61784 = vrx[68];
    const double C61814 = vrx[69];
    const double C61829 = vrx[70];
    const double C61938 = vrx[71];
    const double C62113 = vrx[72];
    const double C62158 = vrx[73];
    const double C62202 = vrx[74];
    const double C62231 = vrx[75];
    const double C62522 = vrx[76];
    const double C62592 = vrx[77];
    const double C62637 = vrx[78];
    const double C62746 = vrx[79];
    const double C62894 = vrx[80];
    const double C62939 = vrx[81];
    const double C62983 = vrx[82];
    const double C62998 = vrx[83];
    const double C63303 = vrx[84];
    const double C63334 = vrx[85];
    const double C63350 = vrx[86];
    const double C63365 = vrx[87];
    const double C63380 = vrx[88];
    const double C63395 = vrx[89];
    const double C63410 = vrx[90];
    const double C63425 = vrx[91];
    const double C63440 = vrx[92];
    const double C63455 = vrx[93];
    const double C63515 = vrx[94];
    const double C63530 = vrx[95];
    const double C63545 = vrx[96];
    const double C63560 = vrx[97];
    const double C63575 = vrx[98];
    const double C63590 = vrx[99];
    const double C63605 = vrx[100];
    const double C63707 = vrx[101];
    const double C63722 = vrx[102];
    const double C63737 = vrx[103];
    const double C63752 = vrx[104];
    const double C63899 = vrx[105];
    const double C63914 = vrx[106];
    const double C63929 = vrx[107];
    const double C63944 = vrx[108];
    const double C63959 = vrx[109];
    const double C63974 = vrx[110];
    const double C63989 = vrx[111];
    const double C64121 = vrx[112];
    const double C64136 = vrx[113];
    const double C64151 = vrx[114];
    const double C64166 = vrx[115];
    const double C64369 = vrx[116];
    const double C64384 = vrx[117];
    const double C64399 = vrx[118];
    const double C64414 = vrx[119];
    const double C64506 = vry[0];
    const double C64522 = vry[1];
    const double C64538 = vry[2];
    const double C65204 = vry[3];
    const double C65221 = vry[4];
    const double C65682 = vry[5];
    const double C65699 = vry[6];
    const double C66144 = vry[7];
    const double C66375 = vry[8];
    const double C66606 = vry[9];
    const double C66851 = vry[10];
    const double C66866 = vry[11];
    const double C67317 = vry[12];
    const double C67333 = vry[13];
    const double C67789 = vry[14];
    const double C67805 = vry[15];
    const double C68250 = vry[16];
    const double C68481 = vry[17];
    const double C68710 = vry[18];
    const double C68953 = vry[19];
    const double C68968 = vry[20];
    const double C69400 = vry[21];
    const double C69644 = vry[22];
    const double C69660 = vry[23];
    const double C70101 = vry[24];
    const double C70332 = vry[25];
    const double C70562 = vry[26];
    const double C70791 = vry[27];
    const double C71018 = vry[28];
    const double C71244 = vry[29];
    const double C71471 = vry[30];
    const double C71682 = vry[31];
    const double C71726 = vry[32];
    const double C71755 = vry[33];
    const double C71769 = vry[34];
    const double C71784 = vry[35];
    const double C71800 = vry[36];
    const double C71861 = vry[37];
    const double C71890 = vry[38];
    const double C72008 = vry[39];
    const double C72037 = vry[40];
    const double C72110 = vry[41];
    const double C72170 = vry[42];
    const double C72199 = vry[43];
    const double C72214 = vry[44];
    const double C72314 = vry[45];
    const double C72343 = vry[46];
    const double C72359 = vry[47];
    const double C72405 = vry[48];
    const double C72481 = vry[49];
    const double C72496 = vry[50];
    const double C72555 = vry[51];
    const double C72614 = vry[52];
    const double C72643 = vry[53];
    const double C72729 = vry[54];
    const double C72773 = vry[55];
    const double C72922 = vry[56];
    const double C72981 = vry[57];
    const double C73054 = vry[58];
    const double C73083 = vry[59];
    const double C73371 = vry[60];
    const double C73442 = vry[61];
    const double C73499 = vry[62];
    const double C73613 = vry[63];
    const double C73630 = vry[64];
    const double C73677 = vry[65];
    const double C73753 = vry[66];
    const double C73768 = vry[67];
    const double C73813 = vry[68];
    const double C73844 = vry[69];
    const double C73859 = vry[70];
    const double C73961 = vry[71];
    const double C74139 = vry[72];
    const double C74184 = vry[73];
    const double C74229 = vry[74];
    const double C74258 = vry[75];
    const double C74547 = vry[76];
    const double C74617 = vry[77];
    const double C74660 = vry[78];
    const double C74762 = vry[79];
    const double C74913 = vry[80];
    const double C74958 = vry[81];
    const double C75003 = vry[82];
    const double C75018 = vry[83];
    const double C75320 = vry[84];
    const double C75349 = vry[85];
    const double C75364 = vry[86];
    const double C75379 = vry[87];
    const double C75394 = vry[88];
    const double C75409 = vry[89];
    const double C75424 = vry[90];
    const double C75439 = vry[91];
    const double C75454 = vry[92];
    const double C75469 = vry[93];
    const double C75526 = vry[94];
    const double C75541 = vry[95];
    const double C75556 = vry[96];
    const double C75571 = vry[97];
    const double C75586 = vry[98];
    const double C75601 = vry[99];
    const double C75616 = vry[100];
    const double C75715 = vry[101];
    const double C75730 = vry[102];
    const double C75745 = vry[103];
    const double C75760 = vry[104];
    const double C75901 = vry[105];
    const double C75917 = vry[106];
    const double C75933 = vry[107];
    const double C75948 = vry[108];
    const double C75963 = vry[109];
    const double C75978 = vry[110];
    const double C75993 = vry[111];
    const double C76122 = vry[112];
    const double C76137 = vry[113];
    const double C76152 = vry[114];
    const double C76167 = vry[115];
    const double C76366 = vry[116];
    const double C76381 = vry[117];
    const double C76396 = vry[118];
    const double C76411 = vry[119];
    const double C76502 = vrz[0];
    const double C76518 = vrz[1];
    const double C76534 = vrz[2];
    const double C77200 = vrz[3];
    const double C77217 = vrz[4];
    const double C77678 = vrz[5];
    const double C77695 = vrz[6];
    const double C78140 = vrz[7];
    const double C78371 = vrz[8];
    const double C78602 = vrz[9];
    const double C78847 = vrz[10];
    const double C78862 = vrz[11];
    const double C79313 = vrz[12];
    const double C79329 = vrz[13];
    const double C79785 = vrz[14];
    const double C79801 = vrz[15];
    const double C80246 = vrz[16];
    const double C80477 = vrz[17];
    const double C80706 = vrz[18];
    const double C80949 = vrz[19];
    const double C80964 = vrz[20];
    const double C81396 = vrz[21];
    const double C81640 = vrz[22];
    const double C81656 = vrz[23];
    const double C82097 = vrz[24];
    const double C82328 = vrz[25];
    const double C82558 = vrz[26];
    const double C82787 = vrz[27];
    const double C83014 = vrz[28];
    const double C83240 = vrz[29];
    const double C83467 = vrz[30];
    const double C83678 = vrz[31];
    const double C83722 = vrz[32];
    const double C83751 = vrz[33];
    const double C83765 = vrz[34];
    const double C83780 = vrz[35];
    const double C83796 = vrz[36];
    const double C83855 = vrz[37];
    const double C83884 = vrz[38];
    const double C84000 = vrz[39];
    const double C84029 = vrz[40];
    const double C84102 = vrz[41];
    const double C84160 = vrz[42];
    const double C84189 = vrz[43];
    const double C84204 = vrz[44];
    const double C84304 = vrz[45];
    const double C84333 = vrz[46];
    const double C84349 = vrz[47];
    const double C84394 = vrz[48];
    const double C84468 = vrz[49];
    const double C84483 = vrz[50];
    const double C84542 = vrz[51];
    const double C84600 = vrz[52];
    const double C84629 = vrz[53];
    const double C84715 = vrz[54];
    const double C84759 = vrz[55];
    const double C84905 = vrz[56];
    const double C84964 = vrz[57];
    const double C85036 = vrz[58];
    const double C85065 = vrz[59];
    const double C85349 = vrz[60];
    const double C85419 = vrz[61];
    const double C85476 = vrz[62];
    const double C85590 = vrz[63];
    const double C85607 = vrz[64];
    const double C85653 = vrz[65];
    const double C85727 = vrz[66];
    const double C85742 = vrz[67];
    const double C85789 = vrz[68];
    const double C85819 = vrz[69];
    const double C85834 = vrz[70];
    const double C85936 = vrz[71];
    const double C86111 = vrz[72];
    const double C86158 = vrz[73];
    const double C86202 = vrz[74];
    const double C86231 = vrz[75];
    const double C86515 = vrz[76];
    const double C86585 = vrz[77];
    const double C86628 = vrz[78];
    const double C86730 = vrz[79];
    const double C86878 = vrz[80];
    const double C86925 = vrz[81];
    const double C86969 = vrz[82];
    const double C86984 = vrz[83];
    const double C87280 = vrz[84];
    const double C87309 = vrz[85];
    const double C87324 = vrz[86];
    const double C87339 = vrz[87];
    const double C87354 = vrz[88];
    const double C87369 = vrz[89];
    const double C87384 = vrz[90];
    const double C87399 = vrz[91];
    const double C87414 = vrz[92];
    const double C87429 = vrz[93];
    const double C87486 = vrz[94];
    const double C87501 = vrz[95];
    const double C87516 = vrz[96];
    const double C87531 = vrz[97];
    const double C87546 = vrz[98];
    const double C87561 = vrz[99];
    const double C87576 = vrz[100];
    const double C87675 = vrz[101];
    const double C87690 = vrz[102];
    const double C87705 = vrz[103];
    const double C87720 = vrz[104];
    const double C87861 = vrz[105];
    const double C87876 = vrz[106];
    const double C87891 = vrz[107];
    const double C87906 = vrz[108];
    const double C87921 = vrz[109];
    const double C87936 = vrz[110];
    const double C87951 = vrz[111];
    const double C88078 = vrz[112];
    const double C88093 = vrz[113];
    const double C88108 = vrz[114];
    const double C88123 = vrz[115];
    const double C88320 = vrz[116];
    const double C88335 = vrz[117];
    const double C88351 = vrz[118];
    const double C88366 = vrz[119];
    const double C52258 = 2 * q;
    const double C88833 = C62592 / q;
    const double C88832 = C64166 * p;
    const double C88831 = C61466 / q;
    const double C88830 = C64151 * p;
    const double C88829 = C64136 * p;
    const double C88828 = C64121 * p;
    const double C88827 = 3 * C61409;
    const double C88826 = C63989 * p;
    const double C88825 = C63974 * p;
    const double C88824 = C63959 * p;
    const double C88823 = C63944 * p;
    const double C88822 = C63752 * p;
    const double C88821 = C60168 / q;
    const double C88820 = C63737 * p;
    const double C88819 = C63722 * p;
    const double C88818 = C63707 * p;
    const double C88817 = 3 * C60456;
    const double C88816 = C63605 * p;
    const double C88815 = C63590 * p;
    const double C88814 = C63575 * p;
    const double C88813 = C63560 * p;
    const double C88812 = C63545 * p;
    const double C88811 = C63530 * p;
    const double C88810 = C63515 * p;
    const double C88809 = 3 * C60322;
    const double C88808 = C63455 * p;
    const double C88807 = C63440 * p;
    const double C88806 = C63425 * p;
    const double C88805 = C63410 * p;
    const double C88804 = C63395 * p;
    const double C88803 = C63380 * p;
    const double C88802 = C63365 * p;
    const double C88800 = C62998 * p;
    const double C88799 = C62983 * p;
    const double C88797 = C62939 * p;
    const double C88793 = C62637 * p;
    const double C88792 = C62592 * p;
    const double C88790 = C62522 * p;
    const double C88788 = C57283 * p;
    const double C88787 = C62231 * p;
    const double C88786 = C58480 * p;
    const double C88785 = C62202 * p;
    const double C88784 = C56336 / q;
    const double C88782 = C62158 * p;
    const double C88781 = C58005 / q;
    const double C88780 = C62113 * p;
    const double C88779 = C61938 * p;
    const double C88777 = C59417 / q;
    const double C88776 = 3 * C55624;
    const double C88772 = C61829 * p;
    const double C88771 = C61814 * p;
    const double C88770 = C61784 * p;
    const double C88769 = C61739 * p;
    const double C88768 = C61724 * p;
    const double C88767 = C61604 * p;
    const double C88762 = C56572 * p;
    const double C88761 = C59417 * p;
    const double C88760 = C61466 * p;
    const double C88758 = C55624 * p;
    const double C88757 = C55641 * p;
    const double C88756 = C61409 * p;
    const double C88755 = C61339 * p;
    const double C88754 = C58950 / q;
    const double C88752 = C61047 * p;
    const double C88751 = C54405 / q;
    const double C88750 = C56823 * p;
    const double C88749 = C61018 * p;
    const double C88748 = C58243 * p;
    const double C88746 = C60946 * p;
    const double C88745 = C58005 * p;
    const double C88743 = C60887 * p;
    const double C88742 = C60741 * p;
    const double C88738 = 3 * C53454;
    const double C88737 = C59183 / q;
    const double C88735 = C60602 * p;
    const double C88734 = C58950 * p;
    const double C88733 = C60573 * p;
    const double C88732 = C56336 * p;
    const double C88731 = C54658 * p;
    const double C88730 = C60515 * p;
    const double C88729 = C56098 * p;
    const double C88726 = C60456 * p;
    const double C88725 = C60441 * p;
    const double C88724 = C60322 * p;
    const double C88722 = C60367 * p;
    const double C88721 = C60305 * p;
    const double C88717 = 3 * C52962;
    const double C88716 = C58716 / q;
    const double C88714 = C54405 * p;
    const double C88713 = C60168 * p;
    const double C88712 = C60153 * p;
    const double C88711 = C59183 * p;
    const double C88710 = C60124 * p;
    const double C88709 = C58716 * p;
    const double C88708 = C60066 * p;
    const double C88705 = C53454 * p;
    const double C88704 = C53472 * p;
    const double C88703 = C59993 * p;
    const double C88702 = C54167 * p;
    const double C88701 = C59964 * p;
    const double C88700 = C59760 * p;
    const double C88699 = C52962 * p;
    const double C88698 = C52980 * p;
    const double C88697 = C59848 * p;
    const double C88696 = C53929 * p;
    const double C88695 = C59819 * p;
    const double C88694 = C59743 * p;
    const double C88408 = de * zCD;
    const double C88407 = be * zAB;
    const double C88403 = de * yCD;
    const double C88402 = be * yAB;
    const double C88398 = de * xCD;
    const double C88397 = be * xAB;
    const double C89433 = C74617 / q;
    const double C89432 = C76167 * p;
    const double C89431 = C73499 / q;
    const double C89430 = C76152 * p;
    const double C89429 = C76137 * p;
    const double C89428 = C76122 * p;
    const double C89427 = 3 * C73442;
    const double C89426 = C75993 * p;
    const double C89425 = C75978 * p;
    const double C89424 = C75963 * p;
    const double C89423 = C75948 * p;
    const double C89422 = C75760 * p;
    const double C89421 = C72214 / q;
    const double C89420 = C75745 * p;
    const double C89419 = C75730 * p;
    const double C89418 = C75715 * p;
    const double C89417 = 3 * C72496;
    const double C89416 = C75616 * p;
    const double C89415 = C75601 * p;
    const double C89414 = C75586 * p;
    const double C89413 = C75571 * p;
    const double C89412 = C75556 * p;
    const double C89411 = C75541 * p;
    const double C89410 = C75526 * p;
    const double C89409 = 3 * C72359;
    const double C89408 = C75469 * p;
    const double C89407 = C75454 * p;
    const double C89406 = C75439 * p;
    const double C89405 = C75424 * p;
    const double C89404 = C75409 * p;
    const double C89403 = C75394 * p;
    const double C89402 = C75379 * p;
    const double C89400 = C75018 * p;
    const double C89399 = C75003 * p;
    const double C89397 = C74958 * p;
    const double C89393 = C74660 * p;
    const double C89392 = C74617 * p;
    const double C89390 = C74547 * p;
    const double C89388 = C69400 * p;
    const double C89387 = C74258 * p;
    const double C89386 = C70562 * p;
    const double C89385 = C74229 * p;
    const double C89384 = C68481 / q;
    const double C89382 = C74184 * p;
    const double C89381 = C70101 / q;
    const double C89380 = C74139 * p;
    const double C89379 = C73961 * p;
    const double C89377 = C71471 / q;
    const double C89376 = 3 * C67789;
    const double C89372 = C73859 * p;
    const double C89371 = C73844 * p;
    const double C89370 = C73813 * p;
    const double C89369 = C73768 * p;
    const double C89368 = C73753 * p;
    const double C89367 = C73630 * p;
    const double C89362 = C68710 * p;
    const double C89361 = C71471 * p;
    const double C89360 = C73499 * p;
    const double C89358 = C67789 * p;
    const double C89357 = C67805 * p;
    const double C89356 = C73442 * p;
    const double C89355 = C73371 * p;
    const double C89354 = C71018 / q;
    const double C89352 = C73083 * p;
    const double C89351 = C66606 / q;
    const double C89350 = C68953 * p;
    const double C89349 = C73054 * p;
    const double C89348 = C70332 * p;
    const double C89346 = C72981 * p;
    const double C89345 = C70101 * p;
    const double C89343 = C72922 * p;
    const double C89342 = C72773 * p;
    const double C89338 = 3 * C65682;
    const double C89337 = C71244 / q;
    const double C89335 = C72643 * p;
    const double C89334 = C71018 * p;
    const double C89333 = C72614 * p;
    const double C89332 = C68481 * p;
    const double C89331 = C66851 * p;
    const double C89330 = C72555 * p;
    const double C89329 = C68250 * p;
    const double C89326 = C72496 * p;
    const double C89325 = C72481 * p;
    const double C89324 = C72359 * p;
    const double C89322 = C72405 * p;
    const double C89321 = C72343 * p;
    const double C89317 = 3 * C65204;
    const double C89316 = C70791 / q;
    const double C89314 = C66606 * p;
    const double C89313 = C72214 * p;
    const double C89312 = C72199 * p;
    const double C89311 = C71244 * p;
    const double C89310 = C72170 * p;
    const double C89309 = C70791 * p;
    const double C89308 = C72110 * p;
    const double C89305 = C65682 * p;
    const double C89304 = C65699 * p;
    const double C89303 = C72037 * p;
    const double C89302 = C66375 * p;
    const double C89301 = C72008 * p;
    const double C89300 = C71800 * p;
    const double C89299 = C65204 * p;
    const double C89298 = C65221 * p;
    const double C89297 = C71890 * p;
    const double C89296 = C66144 * p;
    const double C89295 = C71861 * p;
    const double C89294 = C71784 * p;
    const double C90030 = C86585 / q;
    const double C90029 = C88123 * p;
    const double C90028 = C85476 / q;
    const double C90027 = C88108 * p;
    const double C90026 = C88093 * p;
    const double C90025 = C88078 * p;
    const double C90024 = 3 * C85419;
    const double C90023 = C87951 * p;
    const double C90022 = C87936 * p;
    const double C90021 = C87921 * p;
    const double C90020 = C87906 * p;
    const double C90019 = C87720 * p;
    const double C90018 = C84204 / q;
    const double C90017 = C87705 * p;
    const double C90016 = C87690 * p;
    const double C90015 = C87675 * p;
    const double C90014 = 3 * C84483;
    const double C90013 = C87576 * p;
    const double C90012 = C87561 * p;
    const double C90011 = C87546 * p;
    const double C90010 = C87531 * p;
    const double C90009 = C87516 * p;
    const double C90008 = C87501 * p;
    const double C90007 = C87486 * p;
    const double C90006 = 3 * C84349;
    const double C90005 = C87429 * p;
    const double C90004 = C87414 * p;
    const double C90003 = C87399 * p;
    const double C90002 = C87384 * p;
    const double C90001 = C87369 * p;
    const double C90000 = C87354 * p;
    const double C89999 = C87339 * p;
    const double C89997 = C86984 * p;
    const double C89996 = C86969 * p;
    const double C89994 = C86925 * p;
    const double C89990 = C86628 * p;
    const double C89989 = C86585 * p;
    const double C89987 = C86515 * p;
    const double C89985 = C81396 * p;
    const double C89984 = C86231 * p;
    const double C89983 = C82558 * p;
    const double C89982 = C86202 * p;
    const double C89981 = C80477 / q;
    const double C89979 = C86158 * p;
    const double C89978 = C82097 / q;
    const double C89977 = C86111 * p;
    const double C89976 = C85936 * p;
    const double C89974 = C83467 / q;
    const double C89973 = 3 * C79785;
    const double C89969 = C85834 * p;
    const double C89968 = C85819 * p;
    const double C89967 = C85789 * p;
    const double C89966 = C85742 * p;
    const double C89965 = C85727 * p;
    const double C89964 = C85607 * p;
    const double C89959 = C80706 * p;
    const double C89958 = C83467 * p;
    const double C89957 = C85476 * p;
    const double C89955 = C79785 * p;
    const double C89954 = C79801 * p;
    const double C89953 = C85419 * p;
    const double C89952 = C85349 * p;
    const double C89951 = C83014 / q;
    const double C89949 = C85065 * p;
    const double C89948 = C78602 / q;
    const double C89947 = C80949 * p;
    const double C89946 = C85036 * p;
    const double C89945 = C82328 * p;
    const double C89943 = C84964 * p;
    const double C89942 = C82097 * p;
    const double C89940 = C84905 * p;
    const double C89939 = C84759 * p;
    const double C89935 = 3 * C77678;
    const double C89934 = C83240 / q;
    const double C89932 = C84629 * p;
    const double C89931 = C83014 * p;
    const double C89930 = C84600 * p;
    const double C89929 = C80477 * p;
    const double C89928 = C78847 * p;
    const double C89927 = C84542 * p;
    const double C89926 = C80246 * p;
    const double C89923 = C84483 * p;
    const double C89922 = C84468 * p;
    const double C89921 = C84349 * p;
    const double C89919 = C84394 * p;
    const double C89918 = C84333 * p;
    const double C89914 = 3 * C77200;
    const double C89913 = C82787 / q;
    const double C89911 = C78602 * p;
    const double C89910 = C84204 * p;
    const double C89909 = C84189 * p;
    const double C89908 = C83240 * p;
    const double C89907 = C84160 * p;
    const double C89906 = C82787 * p;
    const double C89905 = C84102 * p;
    const double C89902 = C77678 * p;
    const double C89901 = C77695 * p;
    const double C89900 = C84029 * p;
    const double C89899 = C78371 * p;
    const double C89898 = C84000 * p;
    const double C89897 = C83796 * p;
    const double C89896 = C77200 * p;
    const double C89895 = C77217 * p;
    const double C89894 = C83884 * p;
    const double C89893 = C78140 * p;
    const double C89892 = C83855 * p;
    const double C89891 = C83780 * p;
    const double C88801 = C62592 / C52258;
    const double C88796 = C62746 / C52258;
    const double C88795 = C62637 / C52258;
    const double C88794 = C62522 / C52258;
    const double C88789 = C61466 / C52258;
    const double C88775 = C61938 / C52258;
    const double C88774 = C61739 / C52258;
    const double C88773 = C61409 / C52258;
    const double C88765 = C61604 / C52258;
    const double C88764 = C61586 / C52258;
    const double C88763 = C61339 / C52258;
    const double C88753 = C60168 / C52258;
    const double C88741 = C60741 / C52258;
    const double C88740 = C60456 / C52258;
    const double C88739 = C60694 / C52258;
    const double C88736 = C59993 / C52258;
    const double C88720 = C60322 / C52258;
    const double C88719 = C60305 / C52258;
    const double C88718 = C60274 / C52258;
    const double C88715 = C59848 / C52258;
    const double C88693 = C59760 / C52258;
    const double C88692 = C59743 / C52258;
    const double C88691 = C59727 / C52258;
    const double C88690 = C59681 / C52258;
    const double C88689 = C59634 / C52258;
    const double C88688 = C59417 / C52258;
    const double C88682 = C59183 / C52258;
    const double C88680 = C58950 / C52258;
    const double C88668 = C58716 / C52258;
    const double C88665 = C58480 / C52258;
    const double C88659 = C58243 / C52258;
    const double C88650 = C58005 / C52258;
    const double C88641 = C57552 / C52258;
    const double C88640 = C57535 / C52258;
    const double C88634 = C57283 / C52258;
    const double C88613 = C56839 / C52258;
    const double C88612 = C56823 / C52258;
    const double C88608 = C56572 / C52258;
    const double C88605 = C56336 / C52258;
    const double C88596 = C56098 / C52258;
    const double C88568 = C55641 / C52258;
    const double C88567 = C55624 / C52258;
    const double C88553 = C55155 / C52258;
    const double C88552 = C55138 / C52258;
    const double C88530 = C54674 / C52258;
    const double C88529 = C54658 / C52258;
    const double C88519 = C54405 / C52258;
    const double C88514 = C54167 / C52258;
    const double C88503 = C53929 / C52258;
    const double C88478 = C53472 / C52258;
    const double C88476 = C53454 / C52258;
    const double C88438 = C52980 / C52258;
    const double C88436 = C52962 / C52258;
    const double C88401 = C52278 / C52258;
    const double C88400 = C52261 / C52258;
    const double C88399 = C52243 / C52258;
    const double C89401 = C74617 / C52258;
    const double C89396 = C74762 / C52258;
    const double C89395 = C74660 / C52258;
    const double C89394 = C74547 / C52258;
    const double C89389 = C73499 / C52258;
    const double C89375 = C73961 / C52258;
    const double C89374 = C73768 / C52258;
    const double C89373 = C73442 / C52258;
    const double C89365 = C73630 / C52258;
    const double C89364 = C73613 / C52258;
    const double C89363 = C73371 / C52258;
    const double C89353 = C72214 / C52258;
    const double C89341 = C72773 / C52258;
    const double C89340 = C72496 / C52258;
    const double C89339 = C72729 / C52258;
    const double C89336 = C72037 / C52258;
    const double C89320 = C72359 / C52258;
    const double C89319 = C72343 / C52258;
    const double C89318 = C72314 / C52258;
    const double C89315 = C71890 / C52258;
    const double C89293 = C71800 / C52258;
    const double C89292 = C71784 / C52258;
    const double C89291 = C71769 / C52258;
    const double C89290 = C71726 / C52258;
    const double C89289 = C71682 / C52258;
    const double C89288 = C71471 / C52258;
    const double C89282 = C71244 / C52258;
    const double C89280 = C71018 / C52258;
    const double C89268 = C70791 / C52258;
    const double C89265 = C70562 / C52258;
    const double C89259 = C70332 / C52258;
    const double C89250 = C70101 / C52258;
    const double C89241 = C69660 / C52258;
    const double C89240 = C69644 / C52258;
    const double C89234 = C69400 / C52258;
    const double C89213 = C68968 / C52258;
    const double C89212 = C68953 / C52258;
    const double C89208 = C68710 / C52258;
    const double C89205 = C68481 / C52258;
    const double C89196 = C68250 / C52258;
    const double C89168 = C67805 / C52258;
    const double C89167 = C67789 / C52258;
    const double C89153 = C67333 / C52258;
    const double C89152 = C67317 / C52258;
    const double C89130 = C66866 / C52258;
    const double C89129 = C66851 / C52258;
    const double C89119 = C66606 / C52258;
    const double C89114 = C66375 / C52258;
    const double C89103 = C66144 / C52258;
    const double C89078 = C65699 / C52258;
    const double C89076 = C65682 / C52258;
    const double C89038 = C65221 / C52258;
    const double C89036 = C65204 / C52258;
    const double C89005 = C64538 / C52258;
    const double C89004 = C64522 / C52258;
    const double C89003 = C64506 / C52258;
    const double C89998 = C86585 / C52258;
    const double C89993 = C86730 / C52258;
    const double C89992 = C86628 / C52258;
    const double C89991 = C86515 / C52258;
    const double C89986 = C85476 / C52258;
    const double C89972 = C85936 / C52258;
    const double C89971 = C85742 / C52258;
    const double C89970 = C85419 / C52258;
    const double C89962 = C85607 / C52258;
    const double C89961 = C85590 / C52258;
    const double C89960 = C85349 / C52258;
    const double C89950 = C84204 / C52258;
    const double C89938 = C84759 / C52258;
    const double C89937 = C84483 / C52258;
    const double C89936 = C84715 / C52258;
    const double C89933 = C84029 / C52258;
    const double C89917 = C84349 / C52258;
    const double C89916 = C84333 / C52258;
    const double C89915 = C84304 / C52258;
    const double C89912 = C83884 / C52258;
    const double C89890 = C83796 / C52258;
    const double C89889 = C83780 / C52258;
    const double C89888 = C83765 / C52258;
    const double C89887 = C83722 / C52258;
    const double C89886 = C83678 / C52258;
    const double C89885 = C83467 / C52258;
    const double C89879 = C83240 / C52258;
    const double C89877 = C83014 / C52258;
    const double C89865 = C82787 / C52258;
    const double C89862 = C82558 / C52258;
    const double C89856 = C82328 / C52258;
    const double C89847 = C82097 / C52258;
    const double C89838 = C81656 / C52258;
    const double C89837 = C81640 / C52258;
    const double C89831 = C81396 / C52258;
    const double C89810 = C80964 / C52258;
    const double C89809 = C80949 / C52258;
    const double C89805 = C80706 / C52258;
    const double C89802 = C80477 / C52258;
    const double C89793 = C80246 / C52258;
    const double C89765 = C79801 / C52258;
    const double C89764 = C79785 / C52258;
    const double C89750 = C79329 / C52258;
    const double C89749 = C79313 / C52258;
    const double C89727 = C78862 / C52258;
    const double C89726 = C78847 / C52258;
    const double C89716 = C78602 / C52258;
    const double C89711 = C78371 / C52258;
    const double C89700 = C78140 / C52258;
    const double C89675 = C77695 / C52258;
    const double C89673 = C77678 / C52258;
    const double C89635 = C77217 / C52258;
    const double C89633 = C77200 / C52258;
    const double C89602 = C76534 / C52258;
    const double C89601 = C76518 / C52258;
    const double C89600 = C76502 / C52258;
    const double C88998 = C88832 / q;
    const double C88997 = C88830 / q;
    const double C88996 = C88829 / q;
    const double C88995 = C88828 / q;
    const double C88994 = C88827 / C52258;
    const double C88993 = C88825 / q;
    const double C88992 = C88824 / q;
    const double C88991 = C88823 / q;
    const double C88989 = C88822 / q;
    const double C88988 = C88820 / q;
    const double C88987 = C88819 / q;
    const double C88986 = C88818 / q;
    const double C88985 = C88817 / C52258;
    const double C88990 = C88816 / q;
    const double C88984 = C88815 / q;
    const double C88983 = C88814 / q;
    const double C88982 = C88813 / q;
    const double C88981 = C88812 / q;
    const double C88980 = C88811 / q;
    const double C88979 = C88810 / q;
    const double C88978 = C88809 / C52258;
    const double C88977 = C88807 / q;
    const double C88976 = C88806 / q;
    const double C88975 = C88805 / q;
    const double C88974 = C88804 / q;
    const double C88973 = C88803 / q;
    const double C88972 = C88802 / q;
    const double C88971 = C88787 / q;
    const double C88970 = C88785 / q;
    const double C88968 = C88782 / q;
    const double C88967 = C88780 / q;
    const double C88966 = C88779 / q;
    const double C88964 = C88776 / C52258;
    const double C88963 = C88769 / q;
    const double C88962 = C88768 / q;
    const double C88960 = C88758 / q;
    const double C88959 = C88756 / q;
    const double C88955 = C88752 / q;
    const double C88954 = C88749 / q;
    const double C88956 = C88746 / q;
    const double C88953 = C88743 / q;
    const double C88952 = C88742 / q;
    const double C88950 = C88738 / C52258;
    const double C88958 = C88735 / q;
    const double C88957 = C88733 / q;
    const double C88949 = C88730 / q;
    const double C88946 = C88726 / q;
    const double C88945 = C88725 / q;
    const double C88951 = C88724 / q;
    const double C88943 = C88722 / q;
    const double C88942 = C88721 / q;
    const double C88941 = C88717 / C52258;
    const double C88940 = C88705 / q;
    const double C88939 = C88703 / q;
    const double C88938 = C88701 / q;
    const double C88937 = C88699 / q;
    const double C88936 = C88697 / q;
    const double C88935 = C88695 / q;
    const double C88836 = C88407 + C88408;
    const double C88835 = C88402 + C88403;
    const double C88834 = C88397 + C88398;
    const double C89595 = C89432 / q;
    const double C89594 = C89430 / q;
    const double C89593 = C89429 / q;
    const double C89592 = C89428 / q;
    const double C89591 = C89427 / C52258;
    const double C89590 = C89425 / q;
    const double C89589 = C89424 / q;
    const double C89588 = C89423 / q;
    const double C89586 = C89422 / q;
    const double C89585 = C89420 / q;
    const double C89584 = C89419 / q;
    const double C89583 = C89418 / q;
    const double C89582 = C89417 / C52258;
    const double C89587 = C89416 / q;
    const double C89581 = C89415 / q;
    const double C89580 = C89414 / q;
    const double C89579 = C89413 / q;
    const double C89578 = C89412 / q;
    const double C89577 = C89411 / q;
    const double C89576 = C89410 / q;
    const double C89575 = C89409 / C52258;
    const double C89574 = C89407 / q;
    const double C89573 = C89406 / q;
    const double C89572 = C89405 / q;
    const double C89571 = C89404 / q;
    const double C89570 = C89403 / q;
    const double C89569 = C89402 / q;
    const double C89568 = C89387 / q;
    const double C89567 = C89385 / q;
    const double C89565 = C89382 / q;
    const double C89564 = C89380 / q;
    const double C89563 = C89379 / q;
    const double C89561 = C89376 / C52258;
    const double C89560 = C89369 / q;
    const double C89559 = C89368 / q;
    const double C89557 = C89358 / q;
    const double C89556 = C89356 / q;
    const double C89552 = C89352 / q;
    const double C89551 = C89349 / q;
    const double C89553 = C89346 / q;
    const double C89550 = C89343 / q;
    const double C89549 = C89342 / q;
    const double C89547 = C89338 / C52258;
    const double C89555 = C89335 / q;
    const double C89554 = C89333 / q;
    const double C89546 = C89330 / q;
    const double C89543 = C89326 / q;
    const double C89542 = C89325 / q;
    const double C89548 = C89324 / q;
    const double C89540 = C89322 / q;
    const double C89539 = C89321 / q;
    const double C89538 = C89317 / C52258;
    const double C89537 = C89305 / q;
    const double C89536 = C89303 / q;
    const double C89535 = C89301 / q;
    const double C89534 = C89299 / q;
    const double C89533 = C89297 / q;
    const double C89532 = C89295 / q;
    const double C90192 = C90029 / q;
    const double C90191 = C90027 / q;
    const double C90190 = C90026 / q;
    const double C90189 = C90025 / q;
    const double C90188 = C90024 / C52258;
    const double C90187 = C90022 / q;
    const double C90186 = C90021 / q;
    const double C90185 = C90020 / q;
    const double C90183 = C90019 / q;
    const double C90182 = C90017 / q;
    const double C90181 = C90016 / q;
    const double C90180 = C90015 / q;
    const double C90179 = C90014 / C52258;
    const double C90184 = C90013 / q;
    const double C90178 = C90012 / q;
    const double C90177 = C90011 / q;
    const double C90176 = C90010 / q;
    const double C90175 = C90009 / q;
    const double C90174 = C90008 / q;
    const double C90173 = C90007 / q;
    const double C90172 = C90006 / C52258;
    const double C90171 = C90004 / q;
    const double C90170 = C90003 / q;
    const double C90169 = C90002 / q;
    const double C90168 = C90001 / q;
    const double C90167 = C90000 / q;
    const double C90166 = C89999 / q;
    const double C90165 = C89984 / q;
    const double C90164 = C89982 / q;
    const double C90162 = C89979 / q;
    const double C90161 = C89977 / q;
    const double C90160 = C89976 / q;
    const double C90158 = C89973 / C52258;
    const double C90157 = C89966 / q;
    const double C90156 = C89965 / q;
    const double C90154 = C89955 / q;
    const double C90153 = C89953 / q;
    const double C90149 = C89949 / q;
    const double C90148 = C89946 / q;
    const double C90150 = C89943 / q;
    const double C90147 = C89940 / q;
    const double C90146 = C89939 / q;
    const double C90144 = C89935 / C52258;
    const double C90152 = C89932 / q;
    const double C90151 = C89930 / q;
    const double C90143 = C89927 / q;
    const double C90140 = C89923 / q;
    const double C90139 = C89922 / q;
    const double C90145 = C89921 / q;
    const double C90137 = C89919 / q;
    const double C90136 = C89918 / q;
    const double C90135 = C89914 / C52258;
    const double C90134 = C89902 / q;
    const double C90133 = C89900 / q;
    const double C90132 = C89898 / q;
    const double C90131 = C89896 / q;
    const double C90130 = C89894 / q;
    const double C90129 = C89892 / q;
    const double C52607 = -(C52243 * C88836 + C88700) / q;
    const double C52608 = C88399 - (C59760 * C88836) / q - C88938;
    const double C52623 = -(C52261 * C88836 + C88702) / q;
    const double C52624 = C88400 - (C54167 * C88836) / q - C88939;
    const double C52639 = -(C52278 * C88836 + C88704) / q;
    const double C52640 = C88401 - (C53472 * C88836) / q - C88940;
    const double C52836 = -(C59634 * C88836 + C88710) / q;
    const double C52867 = -(C59681 * C88836 + C88711) / q;
    const double C52882 = -(C59743 * C88836 + C88712) / q;
    const double C52897 = -(C53929 * C88836 + C88713) / q;
    const double C52912 = -(C52980 * C88836 + C88714) / q;
    const double C53204 = -(C52962 * C88836 + C88724) / q;
    const double C53205 = C88436 - (C60322 * C88836) / q - C88945;
    const double C53220 = C88438 - (C54405 * C88836) / q - C88946;
    const double C53358 = -(C54658 * C88836 + C88732) / q;
    const double C53359 = -(C59848 * C88836 + C88733) / q;
    const double C53375 = -(C58716 * C88836 + C88734) / q;
    const double C53390 = -(C60305 * C88836 + C88735) / q;
    const double C53698 = C53472 / q - (C53454 * C88836) / q - C88952;
    const double C53699 = C88950 - (C60741 * C88836) / q - C88953;
    const double C53852 = C88737 - (C56823 * C88836) / q - C88748 / q;
    const double C53853 = C54167 / q - (C59993 * C88836) / q - C88954;
    const double C53869 = C88690 - (C59183 * C88836) / q - C88750 / q;
    const double C53884 = C88751 - (C60456 * C88836) / q - C88955;
    const double C54047 = C88503 - (C60168 * C88836) / q - C88956;
    const double C54597 = C88668 - (C58950 * C88836) / q - C88745 / q;
    const double C54895 = C88529 - (C56336 * C88836) / q - C88959;
    const double C54910 = -(C54674 * C88836 + C88757) / q;
    const double C54911 = C88530 - (C55641 * C88836) / q - C88960;
    const double C55073 = -(C56098 * C88836 + C88760) / q;
    const double C55088 = -(C60274 * C88836 + C88761) / q;
    const double C55089 = -(C55155 * C88836 + C88762) / q;
    const double C55379 = -(C55138 * C88836 + C88767) / q;
    const double C55380 = C88552 - (C61604 * C88836) / q - C88962;
    const double C55395 = C88553 - (C56572 * C88836) / q - C88963;
    const double C55531 = -(C61339 * C88836 + C88771) / q;
    const double C55561 = -(C61586 * C88836 + C88772) / q;
    const double C55869 = C55641 / q - (C55624 * C88836) / q - C88966;
    const double C55870 = C88964 - (C61938 * C88836) / q - C88967;
    const double C56021 = C88784 - (C61409 * C88836) / q - C88970;
    const double C56051 = C88777 - (C57283 * C88836) / q - C88786 / q;
    const double C56052 = C56572 / q - (C61739 * C88836) / q - C88971;
    const double C56067 = C88718 - (C59417 * C88836) / q - C88788 / q;
    const double C56216 = C88596 - (C61466 * C88836) / q - C88968;
    const double C57058 =
        (3 * C56823) / C52258 - (C58243 * C88836) / q - C88790 / q;
    const double C57073 = C88691 - (C60694 * C88836) / q - (C56839 * p) / q;
    const double C57074 = C60694 / q - (C56839 * C88836) / q - (C57552 * p) / q;
    const double C57075 =
        (3 * C56839) / C52258 - (C57552 * C88836) / q - (C57535 * p) / q;
    const double C57237 = C88754 - (C58005 * C88836) / q - C88792 / q;
    const double C57399 =
        (3 * C57283) / C52258 - (C58480 * C88836) / q - C88793 / q;
    const double C57778 =
        (2 * C57552) / q - (C57535 * C88836) / q - (C62746 * p) / q;
    const double C57779 =
        (5 * C57535) / C52258 - (C62746 * C88836) / q - (C62894 * p) / q;
    const double C57930 = (2 * C58243) / q - (C62522 * C88836) / q - C88799 / q;
    const double C57960 = (2 * C58480) / q - (C62637 * C88836) / q - C88800 / q;
    const double C58123 =
        (3 * C58005) / C52258 - (C62592 * C88836) / q - C88797 / q;
    const double C59921 = C88689 - (C60124 * C88836) / q - C88975;
    const double C60036 = C88692 - (C60153 * C88836) / q - C88976;
    const double C60051 = C59760 / q - (C59964 * C88836) / q - C88977;
    const double C60095 = -(C60066 * C88836 + C88808) / q;
    const double C60412 = C88715 - (C60573 * C88836) / q - C88982;
    const double C60471 = C88719 - (C60602 * C88836) / q - C88983;
    const double C60486 = C60322 / q - (C60441 * C88836) / q - C88984;
    const double C60544 = -(C60515 * C88836 + C88816) / q;
    const double C60858 =
        (3 * C59993) / C52258 - (C61018 * C88836) / q - C88986;
    const double C60902 = C88985 - (C61047 * C88836) / q - C88987;
    const double C60917 = (2 * C60741) / q - (C60887 * C88836) / q - C88988;
    const double C60989 = C88821 - (C60946 * C88836) / q - C88989;
    const double C61136 = -(C59819 * C88836 + C88804) / q;
    const double C61695 = C88763 - (C61814 * C88836) / q - C88991;
    const double C61754 = C88764 - (C61829 * C88836) / q - C88992;
    const double C61769 = C61604 / q - (C61724 * C88836) / q - C88993;
    const double C61799 = -(C61784 * C88836 + C88826) / q;
    const double C62084 = C88994 - (C62202 * C88836) / q - C88995;
    const double C62128 =
        (3 * C61739) / C52258 - (C62231 * C88836) / q - C88996;
    const double C62143 = (2 * C61938) / q - (C62113 * C88836) / q - C88997;
    const double C62187 = C88831 - (C62158 * C88836) / q - C88998;
    const double C62334 = -(C60367 * C88836 + C88812) / q;
    const double C62577 = -(C59727 * C88836 + C60694 * p) / q;
    const double C62865 =
        (5 * C62522) / C52258 - (C62983 * C88836) / q - (C64369 * p) / q;
    const double C62909 =
        (5 * C62637) / C52258 - (C62998 * C88836) / q - (C64384 * p) / q;
    const double C62924 =
        (3 * C62746) / q - (C62894 * C88836) / q - (C64399 * p) / q;
    const double C62968 =
        (2 * C62592) / q - (C62939 * C88836) / q - (C64414 * p) / q;
    const double C64861 = -(C64506 * C88836 + C89300) / q;
    const double C64877 = -(C64522 * C88836 + C89302) / q;
    const double C64893 = -(C64538 * C88836 + C89304) / q;
    const double C65083 = -(C71682 * C88836 + C89310) / q;
    const double C65112 = -(C71726 * C88836 + C89311) / q;
    const double C65127 = -(C71784 * C88836 + C89312) / q;
    const double C65142 = -(C66144 * C88836 + C89313) / q;
    const double C65157 = -(C65221 * C88836 + C89314) / q;
    const double C65441 = -(C65204 * C88836 + C89324) / q;
    const double C65590 = -(C66851 * C88836 + C89332) / q;
    const double C65591 = -(C71890 * C88836 + C89333) / q;
    const double C65606 = -(C70791 * C88836 + C89334) / q;
    const double C65621 = -(C72343 * C88836 + C89335) / q;
    const double C66070 = C89337 - (C68953 * C88836) / q - C89348 / q;
    const double C66086 = C89290 - (C71244 * C88836) / q - C89350 / q;
    const double C66793 = C89268 - (C71018 * C88836) / q - C89345 / q;
    const double C67098 = -(C66866 * C88836 + C89357) / q;
    const double C67255 = -(C68250 * C88836 + C89360) / q;
    const double C67270 = -(C72314 * C88836 + C89361) / q;
    const double C67271 = -(C67333 * C88836 + C89362) / q;
    const double C67553 = -(C67317 * C88836 + C89367) / q;
    const double C67700 = -(C73371 * C88836 + C89371) / q;
    const double C67729 = -(C73613 * C88836 + C89372) / q;
    const double C68205 = C89377 - (C69400 * C88836) / q - C89386 / q;
    const double C68221 = C89318 - (C71471 * C88836) / q - C89388 / q;
    const double C69183 =
        (3 * C68953) / C52258 - (C70332 * C88836) / q - C89390 / q;
    const double C69198 = C89291 - (C72729 * C88836) / q - (C68968 * p) / q;
    const double C69199 = C72729 / q - (C68968 * C88836) / q - (C69660 * p) / q;
    const double C69200 =
        (3 * C68968) / C52258 - (C69660 * C88836) / q - (C69644 * p) / q;
    const double C69356 = C89354 - (C70101 * C88836) / q - C89392 / q;
    const double C69514 =
        (3 * C69400) / C52258 - (C70562 * C88836) / q - C89393 / q;
    const double C69882 =
        (2 * C69660) / q - (C69644 * C88836) / q - (C74762 * p) / q;
    const double C69883 =
        (5 * C69644) / C52258 - (C74762 * C88836) / q - (C74913 * p) / q;
    const double C70029 = (2 * C70332) / q - (C74547 * C88836) / q - C89399 / q;
    const double C70058 = (2 * C70562) / q - (C74660 * C88836) / q - C89400 / q;
    const double C70217 =
        (3 * C70101) / C52258 - (C74617 * C88836) / q - C89397 / q;
    const double C72140 = -(C72110 * C88836 + C89408) / q;
    const double C72585 = -(C72555 * C88836 + C89416) / q;
    const double C73172 = -(C71861 * C88836 + C89404) / q;
    const double C73829 = -(C73813 * C88836 + C89426) / q;
    const double C74361 = -(C72405 * C88836 + C89412) / q;
    const double C74602 = -(C71769 * C88836 + C72729 * p) / q;
    const double C74884 =
        (5 * C74547) / C52258 - (C75003 * C88836) / q - (C76366 * p) / q;
    const double C74928 =
        (5 * C74660) / C52258 - (C75018 * C88836) / q - (C76381 * p) / q;
    const double C74943 =
        (3 * C74762) / q - (C74913 * C88836) / q - (C76396 * p) / q;
    const double C74988 =
        (2 * C74617) / q - (C74958 * C88836) / q - (C76411 * p) / q;
    const double C76857 = -(C59630 * de + C76502 * C88836 + C89897) / q;
    const double C76873 = -(C59662 * de + C76518 * C88836 + C89899) / q;
    const double C76889 = -(C59693 * de + C76534 * C88836 + C89901) / q;
    const double C77079 = -(C59708 * de + C83678 * C88836 + C89907) / q;
    const double C77108 = -(C59723 * de + C83722 * C88836 + C89908) / q;
    const double C77123 = -(C61059 * de + C83780 * C88836 + C89909) / q;
    const double C77138 = -(C60286 * de + C78140 * C88836 + C89910) / q;
    const double C77153 = -(C60225 * de + C77217 * C88836 + C89911) / q;
    const double C77437 = -(C60194 * de + C77200 * C88836 + C89921) / q;
    const double C77586 = -(C60240 * de + C78847 * C88836 + C89929) / q;
    const double C77587 = -(C60255 * de + C83884 * C88836 + C89930) / q;
    const double C77602 = -(C60270 * de + C82787 * C88836 + C89931) / q;
    const double C77617 = -(C62257 * de + C84333 * C88836 + C89932) / q;
    const double C78066 =
        C89934 - (C60660 * de + C80949 * C88836) / q - C89945 / q;
    const double C78082 =
        C89887 - (C60690 * de + C83240 * C88836) / q - C89947 / q;
    const double C78789 =
        C89865 - (C61220 * de + C83014 * C88836) / q - C89942 / q;
    const double C79094 = -(C61306 * de + C78862 * C88836 + C89954) / q;
    const double C79251 = -(C61567 * de + C80246 * C88836 + C89957) / q;
    const double C79266 = -(C63213 * de + C84304 * C88836 + C89958) / q;
    const double C79267 = -(C61537 * de + C79329 * C88836 + C89959) / q;
    const double C79549 = -(C61506 * de + C79313 * C88836 + C89964) / q;
    const double C79696 = -(C61552 * de + C85349 * C88836 + C89968) / q;
    const double C79725 = -(C63836 * de + C85590 * C88836 + C89969) / q;
    const double C80201 =
        C89974 - (C62604 * de + C81396 * C88836) / q - C89983 / q;
    const double C80217 =
        C89915 - (C63241 * de + C83467 * C88836) / q - C89985 / q;
    const double C81179 = (3 * C80949) / C52258 -
                          (C62710 * de + C82328 * C88836) / q - C89987 / q;
    const double C81194 =
        C89888 - (C63256 * de + C84715 * C88836) / q - (C80964 * p) / q;
    const double C81195 =
        C84715 / q - (C62447 * de + C80964 * C88836) / q - (C81656 * p) / q;
    const double C81196 = (3 * C80964) / C52258 -
                          (C62680 * de + C81656 * C88836) / q -
                          (C81640 * p) / q;
    const double C81352 =
        C89951 - (C62619 * de + C82097 * C88836) / q - C89989 / q;
    const double C81510 = (3 * C81396) / C52258 -
                          (C63155 * de + C82558 * C88836) / q - C89990 / q;
    const double C81878 = (2 * C81656) / q -
                          (C62649 * de + C81640 * C88836) / q -
                          (C86730 * p) / q;
    const double C81879 = (5 * C81640) / C52258 -
                          (C64280 * de + C86730 * C88836) / q -
                          (C86878 * p) / q;
    const double C82025 =
        (2 * C82328) / q - (C62695 * de + C86515 * C88836) / q - C89996 / q;
    const double C82054 =
        (2 * C82558) / q - (C64250 * de + C86628 * C88836) / q - C89997 / q;
    const double C82213 = (3 * C82097) / C52258 -
                          (C63170 * de + C86585 * C88836) / q - C89994 / q;
    const double C84131 = -(C63330 * de + C84102 * C88836 + C90005) / q;
    const double C84571 = -(C63482 * de + C84542 * C88836 + C90013) / q;
    const double C85152 = -(C63467 * de + C83855 * C88836 + C90001) / q;
    const double C85804 = -(C63851 * de + C85789 * C88836 + C90023) / q;
    const double C86332 = -(C63821 * de + C84394 * C88836 + C90009) / q;
    const double C86570 = -(C63315 * de + C83765 * C88836 + C84715 * p) / q;
    const double C86849 = (5 * C86515) / C52258 -
                          (C64295 * de + C86969 * C88836) / q -
                          (C88320 * p) / q;
    const double C86894 = (5 * C86628) / C52258 -
                          (C76347 * de + C86984 * C88836) / q -
                          (C88335 * p) / q;
    const double C86910 = (3 * C86730) / q -
                          (C88345 * de + C86878 * C88836) / q -
                          (C88351 * p) / q;
    const double C86954 = (2 * C86585) / q -
                          (C64265 * de + C86925 * C88836) / q -
                          (C88366 * p) / q;
    const double C52426 = -(C52243 * C88835 + C88694) / q;
    const double C52427 = C88399 - (C59743 * C88835) / q - C88935;
    const double C52442 = -(C52261 * C88835 + C88696) / q;
    const double C52443 = C88400 - (C53929 * C88835) / q - C88936;
    const double C52458 = -(C52278 * C88835 + C88698) / q;
    const double C52459 = C88401 - (C52980 * C88835) / q - C88937;
    const double C52742 = -(C59634 * C88835 + C88708) / q;
    const double C52773 = -(C59681 * C88835 + C88709) / q;
    const double C53085 = C52980 / q - (C52962 * C88835) / q - C88942;
    const double C53086 = C88941 - (C60305 * C88835) / q - C88943;
    const double C53294 = C88716 - (C54658 * C88835) / q - C88729 / q;
    const double C53295 = C53929 / q - (C59848 * C88835) / q - C88949;
    const double C53311 = C88690 - (C58716 * C88835) / q - C88731 / q;
    const double C53577 = -(C53454 * C88835 + C88726) / q;
    const double C53578 = C88476 - (C60456 * C88835) / q - C88945;
    const double C53593 = -(C53472 * C88835 + C88714) / q;
    const double C53594 = C88478 - (C54405 * C88835) / q - C88951;
    const double C53787 = -(C56823 * C88835 + C88745) / q;
    const double C53788 = -(C59993 * C88835 + C88746) / q;
    const double C53804 = -(C59183 * C88835 + C88734) / q;
    const double C53805 = -(C54167 * C88835 + C88713) / q;
    const double C54226 = C88514 - (C60168 * C88835) / q - C88957;
    const double C54327 = -(C59760 * C88835 + C88712) / q;
    const double C54464 = C88751 - (C60322 * C88835) / q - C88958;
    const double C54565 = C88682 - (C58950 * C88835) / q - C88732 / q;
    const double C54776 =
        (3 * C54658) / C52258 - (C56098 * C88835) / q - C88755 / q;
    const double C54791 = C88691 - (C60274 * C88835) / q - (C54674 * p) / q;
    const double C54792 = C60274 / q - (C54674 * C88835) / q - (C55155 * p) / q;
    const double C54793 =
        (3 * C54674) / C52258 - (C55155 * C88835) / q - (C55138 * p) / q;
    const double C55260 =
        (2 * C55155) / q - (C55138 * C88835) / q - (C61586 * p) / q;
    const double C55261 =
        (5 * C55138) / C52258 - (C61586 * C88835) / q - (C61650 * p) / q;
    const double C55469 = (2 * C56098) / q - (C61339 * C88835) / q - C88770 / q;
    const double C55746 = C88613 - (C57283 * C88835) / q - C88960;
    const double C55747 = C57283 / q - (C55624 * C88835) / q - C88963;
    const double C55748 = C88964 - (C61739 * C88835) / q - C88962;
    const double C55763 = C88739 - (C59417 * C88835) / q - C88757 / q;
    const double C55764 = C88777 - (C55641 * C88835) / q - C88762 / q;
    const double C55765 =
        (3 * C55641) / C52258 - (C56572 * C88835) / q - C88767 / q;
    const double C55958 = C88781 - (C61409 * C88835) / q - C88968;
    const double C55974 = C88754 - (C56336 * C88835) / q - C88760 / q;
    const double C56395 =
        (3 * C56336) / C52258 - (C61466 * C88835) / q - C88771 / q;
    const double C56631 = (2 * C56572) / q - (C61604 * C88835) / q - C88772 / q;
    const double C56941 = C88612 - (C58005 * C88835) / q - C88959;
    const double C56956 = -(C56839 * C88835 + C88788) / q;
    const double C57657 = -(C57535 * C88835 + C88793) / q;
    const double C57658 = C88640 - (C62637 * C88835) / q - C88967;
    const double C57673 = -(C57552 * C88835 + C88786) / q;
    const double C57674 = C88641 - (C58480 * C88835) / q - C88966;
    const double C57867 = -(C62522 * C88835 + C88797) / q;
    const double C57883 = -(C58243 * C88835 + C88792) / q;
    const double C58302 = C88659 - (C62592 * C88835) / q - C88970;
    const double C58403 = -(C60741 * C88835 + C88752) / q;
    const double C58539 = C58480 / q - (C61938 * C88835) / q - C88971;
    const double C59341 = -(C60694 * C88835 + C88761) / q;
    const double C59776 = C88689 - (C60066 * C88835) / q - C88972;
    const double C59891 = C59743 / q - (C59819 * C88835) / q - C88973;
    const double C59906 = C88693 - (C60153 * C88835) / q - C88974;
    const double C60338 =
        (3 * C59848) / C52258 - (C60515 * C88835) / q - C88979;
    const double C60382 = (2 * C60305) / q - (C60367 * C88835) / q - C88980;
    const double C60397 = C88978 - (C60602 * C88835) / q - C88981;
    const double C60757 = C88736 - (C60946 * C88835) / q - C88982;
    const double C60828 = C60456 / q - (C60441 * C88835) / q - C88983;
    const double C60843 = C88741 - (C61047 * C88835) / q - C88984;
    const double C61093 = C88821 - (C60573 * C88835) / q - C88990;
    const double C61394 = -(C59727 * C88835 + C60274 * p) / q;
    const double C61621 =
        (5 * C61339) / C52258 - (C61784 * C88835) / q - (C63899 * p) / q;
    const double C61665 =
        (3 * C61586) / q - (C61650 * C88835) / q - (C63914 * p) / q;
    const double C61680 =
        (5 * C61604) / C52258 - (C61829 * C88835) / q - (C63929 * p) / q;
    const double C61955 = C88994 - (C62158 * C88835) / q - C88991;
    const double C62054 = (2 * C61739) / q - (C61724 * C88835) / q - C88992;
    const double C62069 =
        (3 * C61938) / C52258 - (C62231 * C88835) / q - C88993;
    const double C62291 = (2 * C61466) / q - (C61814 * C88835) / q - C88826 / q;
    const double C62763 = C88794 - (C62939 * C88835) / q - C88995;
    const double C62834 = C62637 / q - (C62113 * C88835) / q - C88996;
    const double C62849 = -(C62746 * C88835 + C88800) / q;
    const double C62850 = C88796 - (C62998 * C88835) / q - C88997;
    const double C63044 = C88833 - (C62202 * C88835) / q - C88998;
    const double C64683 = -(C59630 * de + C64506 * C88835 + C89294) / q;
    const double C64699 = -(C59662 * de + C64522 * C88835 + C89296) / q;
    const double C64715 = -(C59693 * de + C64538 * C88835 + C89298) / q;
    const double C64995 = -(C59708 * de + C71682 * C88835 + C89308) / q;
    const double C65024 = -(C59723 * de + C71726 * C88835 + C89309) / q;
    const double C65530 =
        C89316 - (C60240 * de + C66851 * C88835) / q - C89329 / q;
    const double C65546 =
        C89290 - (C60270 * de + C70791 * C88835) / q - C89331 / q;
    const double C65802 = -(C60614 * de + C65682 * C88835 + C89326) / q;
    const double C65818 = -(C60645 * de + C65699 * C88835 + C89314) / q;
    const double C66009 = -(C60660 * de + C68953 * C88835 + C89345) / q;
    const double C66010 = -(C60675 * de + C72037 * C88835 + C89346) / q;
    const double C66025 = -(C60690 * de + C71244 * C88835 + C89334) / q;
    const double C66026 = -(C60706 * de + C66375 * C88835 + C89313) / q;
    const double C66532 = -(C61148 * de + C71800 * C88835 + C89312) / q;
    const double C66763 =
        C89282 - (C61220 * de + C71018 * C88835) / q - C89332 / q;
    const double C66966 = (3 * C66851) / C52258 -
                          (C61567 * de + C68250 * C88835) / q - C89355 / q;
    const double C66981 =
        C89291 - (C63213 * de + C72314 * C88835) / q - (C66866 * p) / q;
    const double C66982 =
        C72314 / q - (C61306 * de + C66866 * C88835) / q - (C67333 * p) / q;
    const double C66983 = (3 * C66866) / C52258 -
                          (C61537 * de + C67333 * C88835) / q -
                          (C67317 * p) / q;
    const double C67436 = (2 * C67333) / q -
                          (C61506 * de + C67317 * C88835) / q -
                          (C73613 * p) / q;
    const double C67437 = (5 * C67317) / C52258 -
                          (C63836 * de + C73613 * C88835) / q -
                          (C73677 * p) / q;
    const double C67642 =
        (2 * C68250) / q - (C61552 * de + C73371 * C88835) / q - C89370 / q;
    const double C67925 =
        C89339 - (C63241 * de + C71471 * C88835) / q - C89357 / q;
    const double C67926 =
        C89377 - (C61872 * de + C67805 * C88835) / q - C89362 / q;
    const double C67927 = (3 * C67805) / C52258 -
                          (C62389 * de + C68710 * C88835) / q - C89367 / q;
    const double C68132 =
        C89354 - (C61902 * de + C68481 * C88835) / q - C89360 / q;
    const double C68539 = (3 * C68481) / C52258 -
                          (C62404 * de + C73499 * C88835) / q - C89371 / q;
    const double C68768 =
        (2 * C68710) / q - (C63866 * de + C73630 * C88835) / q - C89372 / q;
    const double C69083 = -(C62447 * de + C68968 * C88835 + C89388) / q;
    const double C69763 = -(C62649 * de + C69644 * C88835 + C89393) / q;
    const double C69779 = -(C62680 * de + C69660 * C88835 + C89386) / q;
    const double C69970 = -(C62695 * de + C74547 * C88835 + C89397) / q;
    const double C69985 = -(C62710 * de + C70332 * C88835 + C89392) / q;
    const double C70489 = -(C63098 * de + C72773 * C88835 + C89352) / q;
    const double C71399 = -(C63256 * de + C72729 * C88835 + C89361) / q;
    const double C73427 = -(C63315 * de + C71769 * C88835 + C72314 * p) / q;
    const double C73648 = (5 * C73371) / C52258 -
                          (C63851 * de + C73813 * C88835) / q -
                          (C75901 * p) / q;
    const double C73693 = (3 * C73613) / q -
                          (C75912 * de + C73677 * C88835) / q -
                          (C75917 * p) / q;
    const double C73709 = (5 * C73630) / C52258 -
                          (C75928 * de + C73859 * C88835) / q -
                          (C75933 * p) / q;
    const double C74317 =
        (2 * C73499) / q - (C63881 * de + C73844 * C88835) / q - C89426 / q;
    const double C74868 = -(C64280 * de + C74762 * C88835 + C89400) / q;
    const double C76679 = -(C76502 * C88835 + C89891) / q;
    const double C76695 = -(C76518 * C88835 + C89893) / q;
    const double C76711 = -(C76534 * C88835 + C89895) / q;
    const double C76991 = -(C83678 * C88835 + C89905) / q;
    const double C77020 = -(C83722 * C88835 + C89906) / q;
    const double C77526 = C89913 - (C78847 * C88835) / q - C89926 / q;
    const double C77542 = C89887 - (C82787 * C88835) / q - C89928 / q;
    const double C77798 = -(C77678 * C88835 + C89923) / q;
    const double C77814 = -(C77695 * C88835 + C89911) / q;
    const double C78005 = -(C80949 * C88835 + C89942) / q;
    const double C78006 = -(C84029 * C88835 + C89943) / q;
    const double C78021 = -(C83240 * C88835 + C89931) / q;
    const double C78022 = -(C78371 * C88835 + C89910) / q;
    const double C78528 = -(C83796 * C88835 + C89909) / q;
    const double C78759 = C89879 - (C83014 * C88835) / q - C89929 / q;
    const double C78962 =
        (3 * C78847) / C52258 - (C80246 * C88835) / q - C89952 / q;
    const double C78977 = C89888 - (C84304 * C88835) / q - (C78862 * p) / q;
    const double C78978 = C84304 / q - (C78862 * C88835) / q - (C79329 * p) / q;
    const double C78979 =
        (3 * C78862) / C52258 - (C79329 * C88835) / q - (C79313 * p) / q;
    const double C79432 =
        (2 * C79329) / q - (C79313 * C88835) / q - (C85590 * p) / q;
    const double C79433 =
        (5 * C79313) / C52258 - (C85590 * C88835) / q - (C85653 * p) / q;
    const double C79638 = (2 * C80246) / q - (C85349 * C88835) / q - C89967 / q;
    const double C79921 = C89936 - (C83467 * C88835) / q - C89954 / q;
    const double C79922 = C89974 - (C79801 * C88835) / q - C89959 / q;
    const double C79923 =
        (3 * C79801) / C52258 - (C80706 * C88835) / q - C89964 / q;
    const double C80128 = C89951 - (C80477 * C88835) / q - C89957 / q;
    const double C80535 =
        (3 * C80477) / C52258 - (C85476 * C88835) / q - C89968 / q;
    const double C80764 = (2 * C80706) / q - (C85607 * C88835) / q - C89969 / q;
    const double C81079 = -(C80964 * C88835 + C89985) / q;
    const double C81759 = -(C81640 * C88835 + C89990) / q;
    const double C81775 = -(C81656 * C88835 + C89983) / q;
    const double C81966 = -(C86515 * C88835 + C89994) / q;
    const double C81981 = -(C82328 * C88835 + C89989) / q;
    const double C82485 = -(C84759 * C88835 + C89949) / q;
    const double C83395 = -(C84715 * C88835 + C89958) / q;
    const double C85404 = -(C83765 * C88835 + C84304 * p) / q;
    const double C85624 =
        (5 * C85349) / C52258 - (C85789 * C88835) / q - (C87861 * p) / q;
    const double C85668 =
        (3 * C85590) / q - (C85653 * C88835) / q - (C87876 * p) / q;
    const double C85683 =
        (5 * C85607) / C52258 - (C85834 * C88835) / q - (C87891 * p) / q;
    const double C86289 = (2 * C85476) / q - (C85819 * C88835) / q - C90023 / q;
    const double C86833 = -(C86730 * C88835 + C89997) / q;
    const double C52193 = (2 * C52261) / q -
                          (C59630 * de + C52243 * C88834) / q -
                          (C59634 * p) / q;
    const double C52210 = (3 * C52278) / C52258 -
                          (C59662 * de + C52261 * C88834) / q -
                          (C52243 * p) / q;
    const double C52227 =
        C59681 / q - (C59693 * de + C52278 * C88834) / q - (C52261 * p) / q;
    const double C52244 = (5 * C52243) / C52258 -
                          (C59708 * de + C59634 * C88834) / q -
                          (C59712 * p) / q;
    const double C52277 =
        C88691 - (C59723 * de + C59681 * C88834) / q - (C52278 * p) / q;
    const double C52928 =
        C54658 / q - (C60194 * de + C52962 * C88834) / q - C88936;
    const double C52945 =
        C88716 - (C60225 * de + C52980 * C88834) / q - C88696 / q;
    const double C52961 = C88530 - (C60240 * de + C54658 * C88834) / q - C88937;
    const double C52963 = C88941 - (C60255 * de + C59848 * C88834) / q - C88935;
    const double C52979 =
        C88718 - (C60270 * de + C58716 * C88834) / q - C88698 / q;
    const double C52981 = (3 * C52980) / C52258 -
                          (C60286 * de + C53929 * C88834) / q - C88694 / q;
    const double C53420 =
        C56823 / q - (C60614 * de + C53454 * C88834) / q - C88939;
    const double C53437 =
        C88737 - (C60645 * de + C53472 * C88834) / q - C88702 / q;
    const double C53453 = C88613 - (C60660 * de + C56823 * C88834) / q - C88940;
    const double C53455 = C88950 - (C60675 * de + C59993 * C88834) / q - C88938;
    const double C53471 =
        C88739 - (C60690 * de + C59183 * C88834) / q - C88704 / q;
    const double C53473 = (3 * C53472) / C52258 -
                          (C60706 * de + C54167 * C88834) / q - C88700 / q;
    const double C53930 =
        (2 * C53929) / q - (C61059 * de + C59743 * C88834) / q - C88708 / q;
    const double C54168 =
        (2 * C54167) / q - (C61148 * de + C59760 * C88834) / q - C88710 / q;
    const double C54388 =
        C88754 - (C61205 * de + C54405 * C88834) / q - C88713 / q;
    const double C54404 =
        C88688 - (C61220 * de + C58950 * C88834) / q - C88714 / q;
    const double C54406 = (3 * C54405) / C52258 -
                          (C61235 * de + C60168 * C88834) / q - C88712 / q;
    const double C54642 = -(C61306 * de + C54674 * C88834 + C88731) / q;
    const double C55105 = -(C61506 * de + C55138 * C88834 + C88755) / q;
    const double C55122 = -(C61537 * de + C55155 * C88834 + C88729) / q;
    const double C55139 = C88552 - (C61552 * de + C61339 * C88834) / q - C88943;
    const double C55156 = C88553 - (C61567 * de + C56098 * C88834) / q - C88942;
    const double C55591 = -(C61841 * de + C55624 * C88834 + C88756) / q;
    const double C55608 = -(C61872 * de + C55641 * C88834 + C88732) / q;
    const double C55625 = C88567 - (C61887 * de + C61409 * C88834) / q - C88945;
    const double C55642 = C88568 - (C61902 * de + C56336 * C88834) / q - C88951;
    const double C56099 =
        C56098 / q - (C62257 * de + C60305 * C88834) / q - C88949;
    const double C56337 = C88784 - (C62346 * de + C60322 * C88834) / q - C88957;
    const double C56556 = -(C62389 * de + C56572 * C88834 + C88760) / q;
    const double C56573 = C88608 - (C62404 * de + C61466 * C88834) / q - C88958;
    const double C56807 = -(C62447 * de + C56839 * C88834 + C88750) / q;
    const double C57267 = -(C62604 * de + C57283 * C88834 + C88745) / q;
    const double C57284 = C88634 - (C62619 * de + C58005 * C88834) / q - C88946;
    const double C57502 = -(C62649 * de + C57535 * C88834 + C88790) / q;
    const double C57519 = -(C62680 * de + C57552 * C88834 + C88748) / q;
    const double C57536 = C88640 - (C62695 * de + C62522 * C88834) / q - C88953;
    const double C57553 = C88641 - (C62710 * de + C58243 * C88834) / q - C88952;
    const double C58006 = C88781 - (C63010 * de + C60456 * C88834) / q - C88956;
    const double C58244 =
        C58243 / q - (C63098 * de + C60741 * C88834) / q - C88954;
    const double C58464 = -(C63155 * de + C58480 * C88834 + C88792) / q;
    const double C58481 = C88665 - (C63170 * de + C62592 * C88834) / q - C88955;
    const double C58715 = -(C63213 * de + C60274 * C88834 + C88709) / q;
    const double C58949 = -(C63241 * de + C59417 * C88834 + C88734) / q;
    const double C59182 = -(C63256 * de + C60694 * C88834 + C88711) / q;
    const double C59650 = (3 * C59634) / q -
                          (C63299 * de + C59712 * C88834) / q -
                          (C63303 * p) / q;
    const double C59680 = -(C63315 * de + C59727 * C88834 + C59681 * p) / q;
    const double C59744 = (5 * C59743) / C52258 -
                          (C63330 * de + C60066 * C88834) / q -
                          (C63334 * p) / q;
    const double C59761 = (5 * C59760) / C52258 -
                          (C63346 * de + C60124 * C88834) / q -
                          (C63350 * p) / q;
    const double C60213 =
        (2 * C59848) / q - (C63467 * de + C59819 * C88834) / q - C88972;
    const double C60306 =
        (3 * C60305) / C52258 - (C63482 * de + C60515 * C88834) / q - C88973;
    const double C60323 = C88978 - (C63497 * de + C60573 * C88834) / q - C88974;
    const double C60633 =
        (2 * C59993) / q - (C63617 * de + C59964 * C88834) / q - C88975;
    const double C60725 = C88985 - (C63632 * de + C60946 * C88834) / q - C88976;
    const double C60742 =
        (3 * C60741) / C52258 - (C63647 * de + C61018 * C88834) / q - C88977;
    const double C61078 =
        (2 * C60168) / q - (C63764 * de + C60153 * C88834) / q - C88808 / q;
    const double C61525 =
        C61339 / q - (C63821 * de + C60367 * C88834) / q - C88979;
    const double C61587 = -(C63836 * de + C61586 * C88834 + C88770) / q;
    const double C61588 = C88764 - (C63851 * de + C61784 * C88834) / q - C88980;
    const double C61605 = -(C63866 * de + C61604 * C88834 + C88771) / q;
    const double C61606 = C88765 - (C63881 * de + C61814 * C88834) / q - C88981;
    const double C61860 =
        C61409 / q - (C64001 * de + C60441 * C88834) / q - C88982;
    const double C61921 = -(C64016 * de + C61739 * C88834 + C88782) / q;
    const double C61922 = C88774 - (C64031 * de + C62158 * C88834) / q - C88983;
    const double C61939 = -(C64046 * de + C61938 * C88834 + C88785) / q;
    const double C61940 = C88775 - (C64061 * de + C62202 * C88834) / q - C88984;
    const double C62276 = C88831 - (C64178 * de + C60602 * C88834) / q - C88990;
    const double C62668 =
        C62522 / q - (C64235 * de + C60887 * C88834) / q - C88986;
    const double C62729 = -(C64250 * de + C62637 * C88834 + C88797) / q;
    const double C62730 = C88795 - (C64265 * de + C62939 * C88834) / q - C88987;
    const double C62747 = -(C64280 * de + C62746 * C88834 + C88799) / q;
    const double C62748 = C88796 - (C64295 * de + C62983 * C88834) / q - C88988;
    const double C63029 = C88833 - (C64426 * de + C61047 * C88834) / q - C88989;
    const double C64459 =
        (2 * C64522) / q - (C64506 * C88834) / q - (C71682 * p) / q;
    const double C64475 =
        (3 * C64538) / C52258 - (C64522 * C88834) / q - (C64506 * p) / q;
    const double C64491 = C71726 / q - (C64538 * C88834) / q - (C64522 * p) / q;
    const double C64507 =
        (5 * C64506) / C52258 - (C71682 * C88834) / q - (C71755 * p) / q;
    const double C64537 = C89291 - (C71726 * C88834) / q - (C64538 * p) / q;
    const double C65188 = C89316 - (C65221 * C88834) / q - C89296 / q;
    const double C65220 = C89318 - (C70791 * C88834) / q - C89298 / q;
    const double C65222 =
        (3 * C65221) / C52258 - (C66144 * C88834) / q - C89294 / q;
    const double C65666 = C89337 - (C65699 * C88834) / q - C89302 / q;
    const double C65698 = C89339 - (C71244 * C88834) / q - C89304 / q;
    const double C65700 =
        (3 * C65699) / C52258 - (C66375 * C88834) / q - C89300 / q;
    const double C66145 = (2 * C66144) / q - (C71784 * C88834) / q - C89308 / q;
    const double C66376 = (2 * C66375) / q - (C71800 * C88834) / q - C89310 / q;
    const double C66590 = C89354 - (C66606 * C88834) / q - C89313 / q;
    const double C66605 = C89288 - (C71018 * C88834) / q - C89314 / q;
    const double C66607 =
        (3 * C66606) / C52258 - (C72214 * C88834) / q - C89312 / q;
    const double C66836 = -(C66866 * C88834 + C89331) / q;
    const double C67286 = -(C67317 * C88834 + C89355) / q;
    const double C67302 = -(C67333 * C88834 + C89329) / q;
    const double C67758 = -(C67789 * C88834 + C89356) / q;
    const double C67774 = -(C67805 * C88834 + C89332) / q;
    const double C68695 = -(C68710 * C88834 + C89360) / q;
    const double C68938 = -(C68968 * C88834 + C89350) / q;
    const double C69385 = -(C69400 * C88834 + C89345) / q;
    const double C69613 = -(C69644 * C88834 + C89390) / q;
    const double C69629 = -(C69660 * C88834 + C89348) / q;
    const double C70547 = -(C70562 * C88834 + C89392) / q;
    const double C70790 = -(C72314 * C88834 + C89309) / q;
    const double C71017 = -(C71471 * C88834 + C89334) / q;
    const double C71243 = -(C72729 * C88834 + C89311) / q;
    const double C71697 =
        (3 * C71682) / q - (C71755 * C88834) / q - (C75320 * p) / q;
    const double C71725 = -(C71769 * C88834 + C71726 * p) / q;
    const double C71785 =
        (5 * C71784) / C52258 - (C72110 * C88834) / q - (C75349 * p) / q;
    const double C71801 =
        (5 * C71800) / C52258 - (C72170 * C88834) / q - (C75364 * p) / q;
    const double C73112 = (2 * C72214) / q - (C72199 * C88834) / q - C89408 / q;
    const double C73614 = -(C73613 * C88834 + C89370) / q;
    const double C73631 = -(C73630 * C88834 + C89371) / q;
    const double C73945 = -(C73768 * C88834 + C89382) / q;
    const double C73962 = -(C73961 * C88834 + C89385) / q;
    const double C74746 = -(C74660 * C88834 + C89397) / q;
    const double C74763 = -(C74762 * C88834 + C89399) / q;
    const double C76455 =
        (2 * C76518) / q - (C76502 * C88834) / q - (C83678 * p) / q;
    const double C76471 =
        (3 * C76534) / C52258 - (C76518 * C88834) / q - (C76502 * p) / q;
    const double C76487 = C83722 / q - (C76534 * C88834) / q - (C76518 * p) / q;
    const double C76503 =
        (5 * C76502) / C52258 - (C83678 * C88834) / q - (C83751 * p) / q;
    const double C76533 = C89888 - (C83722 * C88834) / q - (C76534 * p) / q;
    const double C77184 = C89913 - (C77217 * C88834) / q - C89893 / q;
    const double C77216 = C89915 - (C82787 * C88834) / q - C89895 / q;
    const double C77218 =
        (3 * C77217) / C52258 - (C78140 * C88834) / q - C89891 / q;
    const double C77662 = C89934 - (C77695 * C88834) / q - C89899 / q;
    const double C77694 = C89936 - (C83240 * C88834) / q - C89901 / q;
    const double C77696 =
        (3 * C77695) / C52258 - (C78371 * C88834) / q - C89897 / q;
    const double C78141 = (2 * C78140) / q - (C83780 * C88834) / q - C89905 / q;
    const double C78372 = (2 * C78371) / q - (C83796 * C88834) / q - C89907 / q;
    const double C78586 = C89951 - (C78602 * C88834) / q - C89910 / q;
    const double C78601 = C89885 - (C83014 * C88834) / q - C89911 / q;
    const double C78603 =
        (3 * C78602) / C52258 - (C84204 * C88834) / q - C89909 / q;
    const double C78832 = -(C78862 * C88834 + C89928) / q;
    const double C79282 = -(C79313 * C88834 + C89952) / q;
    const double C79298 = -(C79329 * C88834 + C89926) / q;
    const double C79754 = -(C79785 * C88834 + C89953) / q;
    const double C79770 = -(C79801 * C88834 + C89929) / q;
    const double C80691 = -(C80706 * C88834 + C89957) / q;
    const double C80934 = -(C80964 * C88834 + C89947) / q;
    const double C81381 = -(C81396 * C88834 + C89942) / q;
    const double C81609 = -(C81640 * C88834 + C89987) / q;
    const double C81625 = -(C81656 * C88834 + C89945) / q;
    const double C82543 = -(C82558 * C88834 + C89989) / q;
    const double C82786 = -(C84304 * C88834 + C89906) / q;
    const double C83013 = -(C83467 * C88834 + C89931) / q;
    const double C83239 = -(C84715 * C88834 + C89908) / q;
    const double C83693 =
        (3 * C83678) / q - (C83751 * C88834) / q - (C87280 * p) / q;
    const double C83721 = -(C83765 * C88834 + C83722 * p) / q;
    const double C83781 =
        (5 * C83780) / C52258 - (C84102 * C88834) / q - (C87309 * p) / q;
    const double C83797 =
        (5 * C83796) / C52258 - (C84160 * C88834) / q - (C87324 * p) / q;
    const double C85094 = (2 * C84204) / q - (C84189 * C88834) / q - C90005 / q;
    const double C85591 = -(C85590 * C88834 + C89967) / q;
    const double C85608 = -(C85607 * C88834 + C89968) / q;
    const double C85920 = -(C85742 * C88834 + C89979) / q;
    const double C85937 = -(C85936 * C88834 + C89982) / q;
    const double C86714 = -(C86628 * C88834 + C89994) / q;
    const double C86731 = -(C86730 * C88834 + C89996) / q;
    const double C74214 = C89431 - (C74184 * C88836) / q - C89595;
    const double C75063 = C89433 - (C64061 * de + C74229 * C88835) / q - C89595;
    const double C74169 = (2 * C73961) / q - (C74139 * C88836) / q - C89594;
    const double C74869 = C89396 - (C76347 * de + C75018 * C88835) / q - C89594;
    const double C74154 =
        (3 * C73768) / C52258 - (C74258 * C88836) / q - C89593;
    const double C74852 =
        C74660 / q - (C76318 * de + C74139 * C88835) / q - C89593;
    const double C74780 = C89394 - (C64265 * de + C74958 * C88835) / q - C89592;
    const double C74110 = C89591 - (C74229 * C88836) / q - C89592;
    const double C73798 = C73630 / q - (C73753 * C88836) / q - C89590;
    const double C74095 =
        (3 * C73961) / C52258 - (C76103 * de + C74258 * C88835) / q - C89590;
    const double C73783 = C89364 - (C73859 * C88836) / q - C89589;
    const double C74079 =
        (2 * C73768) / q - (C76088 * de + C73753 * C88835) / q - C89589;
    const double C73724 = C89363 - (C73844 * C88836) / q - C89588;
    const double C73979 = C89591 - (C64031 * de + C74184 * C88835) / q - C89588;
    const double C73025 = C89421 - (C72981 * C88836) / q - C89586;
    const double C75047 = C89433 - (C73083 * C88834) / q - C89586;
    const double C72952 = (2 * C72773) / q - (C72922 * C88836) / q - C89585;
    const double C74764 = C89396 - (C75003 * C88834) / q - C89585;
    const double C74747 = C89395 - (C74958 * C88834) / q - C89584;
    const double C72893 =
        (3 * C72037) / C52258 - (C73054 * C88836) / q - C89583;
    const double C74689 = C74547 / q - (C72922 * C88834) / q - C89583;
    const double C72937 = C89582 - (C73083 * C88836) / q - C89584;
    const double C73128 = C89421 - (C63497 * de + C72614 * C88835) / q - C89587;
    const double C74301 = C89431 - (C72643 * C88834) / q - C89587;
    const double C72526 = C72359 / q - (C72481 * C88836) / q - C89581;
    const double C72878 = C89341 - (C64426 * de + C73083 * C88835) / q - C89581;
    const double C73963 = C89375 - (C74229 * C88834) / q - C89581;
    const double C72511 = C89319 - (C72643 * C88836) / q - C89580;
    const double C72862 =
        C72496 / q - (C64001 * de + C72481 * C88835) / q - C89580;
    const double C73946 = C89374 - (C74184 * C88834) / q - C89580;
    const double C72452 = C89315 - (C72614 * C88836) / q - C89579;
    const double C72790 = C89336 - (C63632 * de + C72981 * C88835) / q - C89579;
    const double C73888 = C73442 / q - (C72481 * C88834) / q - C89579;
    const double C73632 = C89365 - (C73844 * C88834) / q - C89578;
    const double C72421 =
        (2 * C72343) / q - (C63821 * de + C72405 * C88835) / q - C89577;
    const double C73615 = C89364 - (C73813 * C88834) / q - C89577;
    const double C72376 =
        (3 * C71890) / C52258 - (C63482 * de + C72555 * C88835) / q - C89576;
    const double C73556 = C73371 / q - (C72405 * C88834) / q - C89576;
    const double C72437 = C89575 - (C64178 * de + C72643 * C88835) / q - C89578;
    const double C72095 = C71800 / q - (C72008 * C88836) / q - C89574;
    const double C72774 =
        (3 * C72773) / C52258 - (C73054 * C88834) / q - C89574;
    const double C72080 = C89292 - (C72199 * C88836) / q - C89573;
    const double C72758 = C89582 - (C72981 * C88834) / q - C89573;
    const double C71965 = C89289 - (C72170 * C88836) / q - C89572;
    const double C72672 = (2 * C72037) / q - (C72008 * C88834) / q - C89572;
    const double C71950 = C89293 - (C63764 * de + C72199 * C88835) / q - C89571;
    const double C72360 = C89575 - (C72614 * C88834) / q - C89571;
    const double C71934 =
        C71784 / q - (C63467 * de + C71861 * C88835) / q - C89570;
    const double C72344 =
        (3 * C72343) / C52258 - (C72555 * C88834) / q - C89570;
    const double C71817 = C89289 - (C63330 * de + C72110 * C88835) / q - C89569;
    const double C72257 = (2 * C71890) / q - (C71861 * C88834) / q - C89569;
    const double C68206 = C68710 / q - (C73768 * C88836) / q - C89568;
    const double C70620 =
        C70562 / q - (C64046 * de + C73961 * C88835) / q - C89568;
    const double C68176 = C89384 - (C73442 * C88836) / q - C89567;
    const double C70390 = C89259 - (C63170 * de + C74617 * C88835) / q - C89567;
    const double C68117 = C89381 - (C61887 * de + C73442 * C88835) / q - C89565;
    const double C68366 = C89196 - (C73499 * C88836) / q - C89565;
    const double C69764 = C89240 - (C64250 * de + C74660 * C88835) / q - C89564;
    const double C68029 = C67805 / q - (C67789 * C88836) / q - C89563;
    const double C69780 = C89241 - (C63155 * de + C70562 * C88835) / q - C89563;
    const double C68030 = C89561 - (C73961 * C88836) / q - C89564;
    const double C67569 = C89153 - (C68710 * C88836) / q - C89560;
    const double C67909 =
        C69400 / q - (C61841 * de + C67789 * C88835) / q - C89560;
    const double C67554 = C89152 - (C73630 * C88836) / q - C89559;
    const double C67910 = C89561 - (C64016 * de + C73768 * C88835) / q - C89559;
    const double C67099 = C89130 - (C67805 * C88836) / q - C89557;
    const double C67908 = C89213 - (C62604 * de + C69400 * C88835) / q - C89557;
    const double C67083 = C89129 - (C68481 * C88836) / q - C89556;
    const double C69068 = C89212 - (C62619 * de + C70101 * C88835) / q - C89556;
    const double C66101 = C89351 - (C72496 * C88836) / q - C89552;
    const double C70563 = C89265 - (C74617 * C88834) / q - C89552;
    const double C66071 = C66375 / q - (C72037 * C88836) / q - C89551;
    const double C70333 = C70332 / q - (C72773 * C88834) / q - C89551;
    const double C66260 = C89103 - (C72214 * C88836) / q - C89553;
    const double C70102 = C89381 - (C72496 * C88834) / q - C89553;
    const double C69645 = C89240 - (C74547 * C88834) / q - C89550;
    const double C65921 = C65699 / q - (C65682 * C88836) / q - C89549;
    const double C69661 = C89241 - (C70332 * C88834) / q - C89549;
    const double C65922 = C89547 - (C72773 * C88836) / q - C89550;
    const double C66664 = C89351 - (C62346 * de + C72359 * C88835) / q - C89555;
    const double C68711 = C89208 - (C73499 * C88834) / q - C89555;
    const double C66433 = C89114 - (C61235 * de + C72214 * C88835) / q - C89554;
    const double C68482 = C89384 - (C72359 * C88834) / q - C89554;
    const double C65531 =
        C66144 / q - (C60255 * de + C71890 * C88835) / q - C89546;
    const double C68251 = C68250 / q - (C72343 * C88834) / q - C89546;
    const double C65457 = C89038 - (C66606 * C88836) / q - C89543;
    const double C69401 = C89234 - (C70101 * C88834) / q - C89543;
    const double C65442 = C89036 - (C72359 * C88836) / q - C89542;
    const double C65803 = C89076 - (C63010 * de + C72496 * C88835) / q - C89542;
    const double C67790 = C89167 - (C73442 * C88834) / q - C89542;
    const double C65819 = C89078 - (C61205 * de + C66606 * C88835) / q - C89548;
    const double C67806 = C89168 - (C68481 * C88834) / q - C89548;
    const double C67318 = C89152 - (C73371 * C88834) / q - C89540;
    const double C65324 =
        C65221 / q - (C60194 * de + C65204 * C88835) / q - C89539;
    const double C67334 = C89153 - (C68250 * C88834) / q - C89539;
    const double C65325 = C89538 - (C62257 * de + C72343 * C88835) / q - C89540;
    const double C64894 = C89005 - (C65699 * C88836) / q - C89537;
    const double C65681 = C89213 - (C68953 * C88834) / q - C89537;
    const double C64878 = C89004 - (C66375 * C88836) / q - C89536;
    const double C65650 = C68953 / q - (C65682 * C88834) / q - C89536;
    const double C64862 = C89003 - (C71800 * C88836) / q - C89535;
    const double C65683 = C89547 - (C72037 * C88834) / q - C89535;
    const double C64716 = C89005 - (C60225 * de + C65221 * C88835) / q - C89534;
    const double C65203 = C89130 - (C66851 * C88834) / q - C89534;
    const double C64700 = C89004 - (C60286 * de + C66144 * C88835) / q - C89533;
    const double C65172 = C66851 / q - (C65204 * C88834) / q - C89533;
    const double C64684 = C89003 - (C61059 * de + C71784 * C88835) / q - C89532;
    const double C65205 = C89538 - (C71890 * C88834) / q - C89532;
    const double C86187 = C90028 - (C64031 * de + C86158 * C88836) / q - C90192;
    const double C87028 = C90030 - (C86202 * C88835) / q - C90192;
    const double C86143 =
        (2 * C85936) / q - (C76318 * de + C86111 * C88836) / q - C90191;
    const double C86834 = C89993 - (C86984 * C88835) / q - C90191;
    const double C86127 =
        (3 * C85742) / C52258 - (C76103 * de + C86231 * C88836) / q - C90190;
    const double C86818 = C86628 / q - (C86111 * C88835) / q - C90190;
    const double C86747 = C89991 - (C86925 * C88835) / q - C90189;
    const double C86082 = C90188 - (C64061 * de + C86202 * C88836) / q - C90189;
    const double C85774 =
        C85607 / q - (C76088 * de + C85727 * C88836) / q - C90187;
    const double C86067 =
        (3 * C85936) / C52258 - (C86231 * C88835) / q - C90187;
    const double C85758 = C89961 - (C75928 * de + C85834 * C88836) / q - C90186;
    const double C86052 = (2 * C85742) / q - (C85727 * C88835) / q - C90186;
    const double C85698 = C89960 - (C63881 * de + C85819 * C88836) / q - C90185;
    const double C85953 = C90188 - (C86158 * C88835) / q - C90185;
    const double C85007 = C90018 - (C63632 * de + C84964 * C88836) / q - C90183;
    const double C87013 = C90030 - (C85065 * C88834) / q - C90183;
    const double C84935 =
        (2 * C84759) / q - (C64235 * de + C84905 * C88836) / q - C90182;
    const double C86732 = C89993 - (C86969 * C88834) / q - C90182;
    const double C86715 = C89992 - (C86925 * C88834) / q - C90181;
    const double C84876 =
        (3 * C84029) / C52258 - (C63647 * de + C85036 * C88836) / q - C90180;
    const double C86657 = C86515 / q - (C84905 * C88834) / q - C90180;
    const double C84920 = C90179 - (C64426 * de + C85065 * C88836) / q - C90181;
    const double C85109 = C90018 - (C84600 * C88835) / q - C90184;
    const double C86274 = C90028 - (C84629 * C88834) / q - C90184;
    const double C84513 =
        C84349 / q - (C64001 * de + C84468 * C88836) / q - C90178;
    const double C84861 = C89938 - (C85065 * C88835) / q - C90178;
    const double C85938 = C89972 - (C86202 * C88834) / q - C90178;
    const double C84498 = C89916 - (C64178 * de + C84629 * C88836) / q - C90177;
    const double C84846 = C84483 / q - (C84468 * C88835) / q - C90177;
    const double C85921 = C89971 - (C86158 * C88834) / q - C90177;
    const double C84439 = C89912 - (C63497 * de + C84600 * C88836) / q - C90176;
    const double C84775 = C89933 - (C84964 * C88835) / q - C90176;
    const double C85863 = C85419 / q - (C84468 * C88834) / q - C90176;
    const double C85609 = C89962 - (C85819 * C88834) / q - C90175;
    const double C84409 = (2 * C84333) / q - (C84394 * C88835) / q - C90174;
    const double C85592 = C89961 - (C85789 * C88834) / q - C90174;
    const double C84365 =
        (3 * C83884) / C52258 - (C84542 * C88835) / q - C90173;
    const double C85533 = C85349 / q - (C84394 * C88834) / q - C90173;
    const double C84424 = C90172 - (C84629 * C88835) / q - C90175;
    const double C84087 =
        C83796 / q - (C63617 * de + C84000 * C88836) / q - C90171;
    const double C84760 =
        (3 * C84759) / C52258 - (C85036 * C88834) / q - C90171;
    const double C84072 = C89889 - (C63764 * de + C84189 * C88836) / q - C90170;
    const double C84744 = C90179 - (C84964 * C88834) / q - C90170;
    const double C83957 = C89886 - (C63346 * de + C84160 * C88836) / q - C90169;
    const double C84658 = (2 * C84029) / q - (C84000 * C88834) / q - C90169;
    const double C83942 = C89890 - (C84189 * C88835) / q - C90168;
    const double C84350 = C90172 - (C84600 * C88834) / q - C90168;
    const double C83927 = C83780 / q - (C83855 * C88835) / q - C90167;
    const double C84334 =
        (3 * C84333) / C52258 - (C84542 * C88834) / q - C90167;
    const double C83812 = C89886 - (C84102 * C88835) / q - C90166;
    const double C84247 = (2 * C83884) / q - (C83855 * C88834) / q - C90166;
    const double C80202 =
        C80706 / q - (C64016 * de + C85742 * C88836) / q - C90165;
    const double C82616 = C82558 / q - (C85936 * C88835) / q - C90165;
    const double C80172 = C89981 - (C61887 * de + C85419 * C88836) / q - C90164;
    const double C82386 = C89856 - (C86585 * C88835) / q - C90164;
    const double C80113 = C89978 - (C85419 * C88835) / q - C90162;
    const double C80362 = C89793 - (C62404 * de + C85476 * C88836) / q - C90162;
    const double C81760 = C89837 - (C86628 * C88835) / q - C90161;
    const double C80025 =
        C79801 / q - (C61841 * de + C79785 * C88836) / q - C90160;
    const double C81776 = C89838 - (C82558 * C88835) / q - C90160;
    const double C80026 = C90158 - (C64046 * de + C85936 * C88836) / q - C90161;
    const double C79565 = C89750 - (C62389 * de + C80706 * C88836) / q - C90157;
    const double C79905 = C81396 / q - (C79785 * C88835) / q - C90157;
    const double C79550 = C89749 - (C63866 * de + C85607 * C88836) / q - C90156;
    const double C79906 = C90158 - (C85742 * C88835) / q - C90156;
    const double C79095 = C89727 - (C61872 * de + C79801 * C88836) / q - C90154;
    const double C79904 = C89810 - (C81396 * C88835) / q - C90154;
    const double C79079 = C89726 - (C61902 * de + C80477 * C88836) / q - C90153;
    const double C81064 = C89809 - (C82097 * C88835) / q - C90153;
    const double C78097 = C89948 - (C63010 * de + C84483 * C88836) / q - C90149;
    const double C82559 = C89862 - (C86585 * C88834) / q - C90149;
    const double C78067 =
        C78371 / q - (C60675 * de + C84029 * C88836) / q - C90148;
    const double C82329 = C82328 / q - (C84759 * C88834) / q - C90148;
    const double C78256 = C89700 - (C61235 * de + C84204 * C88836) / q - C90150;
    const double C82098 = C89978 - (C84483 * C88834) / q - C90150;
    const double C81641 = C89837 - (C86515 * C88834) / q - C90147;
    const double C77917 =
        C77695 / q - (C60614 * de + C77678 * C88836) / q - C90146;
    const double C81657 = C89838 - (C82328 * C88834) / q - C90146;
    const double C77918 = C90144 - (C63098 * de + C84759 * C88836) / q - C90147;
    const double C78660 = C89948 - (C84349 * C88835) / q - C90152;
    const double C80707 = C89805 - (C85476 * C88834) / q - C90152;
    const double C78429 = C89711 - (C84204 * C88835) / q - C90151;
    const double C80478 = C89981 - (C84349 * C88834) / q - C90151;
    const double C77527 = C78140 / q - (C83884 * C88835) / q - C90143;
    const double C80247 = C80246 / q - (C84333 * C88834) / q - C90143;
    const double C77453 = C89635 - (C61205 * de + C78602 * C88836) / q - C90140;
    const double C81397 = C89831 - (C82097 * C88834) / q - C90140;
    const double C77438 = C89633 - (C62346 * de + C84349 * C88836) / q - C90139;
    const double C77799 = C89673 - (C84483 * C88835) / q - C90139;
    const double C79786 = C89764 - (C85419 * C88834) / q - C90139;
    const double C77815 = C89675 - (C78602 * C88835) / q - C90145;
    const double C79802 = C89765 - (C80477 * C88834) / q - C90145;
    const double C79314 = C89749 - (C85349 * C88834) / q - C90137;
    const double C77320 = C77217 / q - (C77200 * C88835) / q - C90136;
    const double C79330 = C89750 - (C80246 * C88834) / q - C90136;
    const double C77321 = C90135 - (C84333 * C88835) / q - C90137;
    const double C76890 = C89602 - (C60645 * de + C77695 * C88836) / q - C90134;
    const double C77677 = C89810 - (C80949 * C88834) / q - C90134;
    const double C76874 = C89601 - (C60706 * de + C78371 * C88836) / q - C90133;
    const double C77646 = C80949 / q - (C77678 * C88834) / q - C90133;
    const double C76858 = C89600 - (C61148 * de + C83796 * C88836) / q - C90132;
    const double C77679 = C90144 - (C84029 * C88834) / q - C90132;
    const double C76712 = C89602 - (C77217 * C88835) / q - C90131;
    const double C77199 = C89727 - (C78847 * C88834) / q - C90131;
    const double C76696 = C89601 - (C78140 * C88835) / q - C90130;
    const double C77168 = C78847 / q - (C77200 * C88834) / q - C90130;
    const double C76680 = C89600 - (C83780 * C88835) / q - C90129;
    const double C77201 = C90135 - (C83884 * C88834) / q - C90129;
    const double C88707 = C52607 / C52258;
    const double C88421 = C52608 * p;
    const double C88513 = C52623 / C52258;
    const double C88516 = C52624 / q;
    const double C88422 = C52624 * p;
    const double C88471 = C52639 / C52258;
    const double C15519 = (3 * C52639) / C52258 -
                          (C52848 * de + C52623 * C88834) / q -
                          (C52607 * p) / q;
    const double C88491 = C52640 / q;
    const double C88423 = C52640 * p;
    const double C15518 = (2 * C52623) / q -
                          (C52832 * de + C52607 * C88834) / q -
                          (C52836 * p) / q;
    const double C88679 = C52867 / C52258;
    const double C15527 =
        C52867 / q - (C52863 * de + C52639 * C88834) / q - (C52623 * p) / q;
    const double C88430 = C52882 * p;
    const double C88511 = C52897 / q;
    const double C88431 = C52897 * p;
    const double C88462 = C52912 / q;
    const double C88432 = C52912 * p;
    const double C88472 = C53204 * p;
    const double C88456 = C53205 * p;
    const double C88524 = C53220 / q;
    const double C88457 = C53220 * p;
    const double C88549 = C53358 * p;
    const double C88467 = C53358 / q;
    const double C88468 = C53359 * p;
    const double C88469 = C53375 / q;
    const double C52820 = -(C52867 * C88835 + C53375 * p) / q;
    const double C88470 = C53390 * p;
    const double C88493 = C53698 * p;
    const double C88492 = C53699 * p;
    const double C88631 = C53852 * p;
    const double C88499 = C53852 / q;
    const double C88500 = C53853 * p;
    const double C88501 = C53869 / q;
    const double C52592 = C88690 - (C52867 * C88836) / q - (C53869 * p) / q;
    const double C88502 = C53884 * p;
    const double C88509 = C54047 * p;
    const double C88675 = C54597 * p;
    const double C88526 = C54597 / q;
    const double C88607 = C54895 / q;
    const double C88542 = C54895 * p;
    const double C88548 = C54910 / C52258;
    const double C88581 = C54911 / q;
    const double C88543 = C54911 * p;
    const double C88550 = C55073 * p;
    const double C88678 = C55088 / C52258;
    const double C88603 = C55089 / C52258;
    const double C16696 = C55088 / q - (C54910 * C88835) / q - (C55089 * p) / q;
    const double C16945 =
        (3 * C54910) / C52258 - (C55089 * C88835) / q - (C55379 * p) / q;
    const double C88560 = C55380 * p;
    const double C88609 = C55395 / q;
    const double C88561 = C55395 * p;
    const double C88565 = C55531 * p;
    const double C16944 =
        (2 * C55089) / q - (C55379 * C88835) / q - (C55561 * p) / q;
    const double C88583 = C55869 * p;
    const double C88582 = C55870 * p;
    const double C88590 = C56021 * p;
    const double C88633 = C56051 * p;
    const double C88591 = C56051 / q;
    const double C88592 = C56052 * p;
    const double C88759 = C56067 * p;
    const double C88593 = C56067 / q;
    const double C88601 = C56216 * p;
    const double C88625 = C57058 * p;
    const double C88687 = C57073 / C52258;
    const double C88630 = C57074 / C52258;
    const double C88664 = C57075 / C52258;
    const double C17752 =
        C57073 / q - (C57074 * C88836) / q + C88613 - (C57075 * p) / q;
    const double C88655 = C57237 / q;
    const double C88632 = C57237 * p;
    const double C88637 = C57399 * p;
    const double C18241 = (3 * C57074) / C52258 - (C57075 * C88836) / q +
                          C88641 - (C57778 * p) / q;
    const double C18240 =
        (2 * C57075) / q - (C57778 * C88836) / q + C88640 - (C57779 * p) / q;
    const double C88647 = C57930 * p;
    const double C88648 = C57960 * p;
    const double C88654 = C58123 * p;
    const double C52561 = C88689 - (C52836 * C88836) / q - (C59921 * p) / q;
    const double C88706 = C60036 * p;
    const double C52789 = -(C52836 * C88835 + C60095 * p) / q;
    const double C88723 = C60412 * p;
    const double C88727 = C60471 * p;
    const double C88728 = C60486 * p;
    const double C88744 = C60902 * p;
    const double C53757 = (3 * C53698) / C52258 - (C53699 * C88836) / q +
                          C88741 - (C60917 * p) / q;
    const double C88747 = C60989 * p;
    const double C88766 = C61695 * p;
    const double C55410 = C88764 - (C55561 * C88836) / q - (C61754 * p) / q;
    const double C55439 =
        C55379 / C52258 - (C55380 * C88836) / q + C88765 - (C61769 * p) / q;
    const double C55500 =
        (2 * C55073) / q - (C55531 * C88835) / q - (C61799 * p) / q;
    const double C88778 = C62084 * p;
    const double C55928 = (3 * C55869) / C52258 - (C55870 * C88836) / q +
                          C88775 - (C62143 * p) / q;
    const double C88783 = C62187 * p;
    const double C56276 =
        (3 * C53204) / C52258 - (C53390 * C88835) / q - (C62334 * p) / q;
    const double C88791 = C62577 / C52258;
    const double C57748 =
        (2 * C57058) / q - (C57930 * C88836) / q + C88794 - (C62865 * p) / q;
    const double C57808 =
        (2 * C57399) / q - (C57960 * C88836) / q + C88795 - (C62909 * p) / q;
    const double C57837 = (5 * C57778) / C52258 - (C57779 * C88836) / q +
                          C88796 - (C62924 * p) / q;
    const double C88798 = C62968 * p;
    const double C89307 = C64861 / C52258;
    const double C89113 = C64877 / C52258;
    const double C89071 = C64893 / C52258;
    const double C31311 =
        (3 * C64893) / C52258 - (C64877 * C88834) / q - (C64861 * p) / q;
    const double C31310 =
        (2 * C64877) / q - (C64861 * C88834) / q - (C65083 * p) / q;
    const double C89279 = C65112 / C52258;
    const double C31319 = C65112 / q - (C64893 * C88834) / q - (C64877 * p) / q;
    const double C89030 = C65127 * p;
    const double C89111 = C65142 / q;
    const double C89031 = C65142 * p;
    const double C89062 = C65157 / q;
    const double C89032 = C65157 * p;
    const double C89072 = C65441 * p;
    const double C89149 = C65590 * p;
    const double C89067 = C65590 / q;
    const double C89068 = C65591 * p;
    const double C89069 = C65606 / q;
    const double C65068 = -(C72151 * de + C65112 * C88835 + C65606 * p) / q;
    const double C89070 = C65621 * p;
    const double C89231 = C66070 * p;
    const double C89099 = C66070 / q;
    const double C89101 = C66086 / q;
    const double C64846 = C89290 - (C65112 * C88836) / q - (C66086 * p) / q;
    const double C89275 = C66793 * p;
    const double C89126 = C66793 / q;
    const double C89148 = C67098 / C52258;
    const double C89150 = C67255 * p;
    const double C89278 = C67270 / C52258;
    const double C89203 = C67271 / C52258;
    const double C32488 =
        C67270 / q - (C55055 * de + C67098 * C88835) / q - (C67271 * p) / q;
    const double C32737 = (3 * C67098) / C52258 -
                          (C55543 * de + C67271 * C88835) / q -
                          (C67553 * p) / q;
    const double C89165 = C67700 * p;
    const double C32736 = (2 * C67271) / q -
                          (C55527 * de + C67553 * C88835) / q -
                          (C67729 * p) / q;
    const double C89233 = C68205 * p;
    const double C89191 = C68205 / q;
    const double C89359 = C68221 * p;
    const double C89193 = C68221 / q;
    const double C89225 = C69183 * p;
    const double C89287 = C69198 / C52258;
    const double C89230 = C69199 / C52258;
    const double C89264 = C69200 / C52258;
    const double C33544 =
        C69198 / q - (C69199 * C88836) / q + C89213 - (C69200 * p) / q;
    const double C89255 = C69356 / q;
    const double C89232 = C69356 * p;
    const double C89237 = C69514 * p;
    const double C34033 = (3 * C69199) / C52258 - (C69200 * C88836) / q +
                          C89241 - (C69882 * p) / q;
    const double C34032 =
        (2 * C69200) / q - (C69882 * C88836) / q + C89240 - (C69883 * p) / q;
    const double C89247 = C70029 * p;
    const double C89248 = C70058 * p;
    const double C89254 = C70217 * p;
    const double C65039 = -(C72135 * de + C65083 * C88835 + C72140 * p) / q;
    const double C67671 = (2 * C67255) / q -
                          (C73824 * de + C67700 * C88835) / q -
                          (C73829 * p) / q;
    const double C68424 = (3 * C65441) / C52258 -
                          (C74356 * de + C65621 * C88835) / q -
                          (C74361 * p) / q;
    const double C89391 = C74602 / C52258;
    const double C69853 =
        (2 * C69183) / q - (C70029 * C88836) / q + C89394 - (C74884 * p) / q;
    const double C69912 =
        (2 * C69514) / q - (C70058 * C88836) / q + C89395 - (C74928 * p) / q;
    const double C69941 = (5 * C69882) / C52258 - (C69883 * C88836) / q +
                          C89396 - (C74943 * p) / q;
    const double C89398 = C74988 * p;
    const double C89904 = C76857 / C52258;
    const double C89710 = C76873 / C52258;
    const double C89668 = C76889 / C52258;
    const double C47103 =
        (3 * C76889) / C52258 - (C76873 * C88834) / q - (C76857 * p) / q;
    const double C47102 =
        (2 * C76873) / q - (C76857 * C88834) / q - (C77079 * p) / q;
    const double C89876 = C77108 / C52258;
    const double C47111 = C77108 / q - (C76889 * C88834) / q - (C76873 * p) / q;
    const double C89627 = C77123 * p;
    const double C89708 = C77138 / q;
    const double C89628 = C77138 * p;
    const double C89659 = C77153 / q;
    const double C89629 = C77153 * p;
    const double C89669 = C77437 * p;
    const double C89746 = C77586 * p;
    const double C89664 = C77586 / q;
    const double C89665 = C77587 * p;
    const double C89666 = C77602 / q;
    const double C77064 = -(C77108 * C88835 + C77602 * p) / q;
    const double C89667 = C77617 * p;
    const double C89828 = C78066 * p;
    const double C89696 = C78066 / q;
    const double C89698 = C78082 / q;
    const double C76842 =
        C89887 - (C72151 * de + C77108 * C88836) / q - (C78082 * p) / q;
    const double C89872 = C78789 * p;
    const double C89723 = C78789 / q;
    const double C89745 = C79094 / C52258;
    const double C89747 = C79251 * p;
    const double C89875 = C79266 / C52258;
    const double C89800 = C79267 / C52258;
    const double C48280 = C79266 / q - (C79094 * C88835) / q - (C79267 * p) / q;
    const double C48529 =
        (3 * C79094) / C52258 - (C79267 * C88835) / q - (C79549 * p) / q;
    const double C89762 = C79696 * p;
    const double C48528 =
        (2 * C79267) / q - (C79549 * C88835) / q - (C79725 * p) / q;
    const double C89830 = C80201 * p;
    const double C89788 = C80201 / q;
    const double C89956 = C80217 * p;
    const double C89790 = C80217 / q;
    const double C89822 = C81179 * p;
    const double C89884 = C81194 / C52258;
    const double C89827 = C81195 / C52258;
    const double C89861 = C81196 / C52258;
    const double C49336 = C81194 / q - (C57219 * de + C81195 * C88836) / q +
                          C89810 - (C81196 * p) / q;
    const double C89852 = C81352 / q;
    const double C89829 = C81352 * p;
    const double C89834 = C81510 * p;
    const double C49825 = (3 * C81195) / C52258 -
                          (C57942 * de + C81196 * C88836) / q + C89838 -
                          (C81878 * p) / q;
    const double C49824 = (2 * C81196) / q -
                          (C57926 * de + C81878 * C88836) / q + C89837 -
                          (C81879 * p) / q;
    const double C89844 = C82025 * p;
    const double C89845 = C82054 * p;
    const double C89851 = C82213 * p;
    const double C77035 = -(C77079 * C88835 + C84131 * p) / q;
    const double C79667 =
        (2 * C79251) / q - (C79696 * C88835) / q - (C85804 * p) / q;
    const double C80420 =
        (3 * C77437) / C52258 - (C77617 * C88835) / q - (C86332 * p) / q;
    const double C89988 = C86570 / C52258;
    const double C81849 = (2 * C81179) / q -
                          (C74983 * de + C82025 * C88836) / q + C89991 -
                          (C86849 * p) / q;
    const double C81908 = (2 * C81510) / q -
                          (C86888 * de + C82054 * C88836) / q + C89992 -
                          (C86894 * p) / q;
    const double C81937 = (5 * C81878) / C52258 -
                          (C86904 * de + C81879 * C88836) / q + C89993 -
                          (C86910 * p) / q;
    const double C89995 = C86954 * p;
    const double C88412 = C52427 * p;
    const double C88507 = C52443 / q;
    const double C88413 = C52443 * p;
    const double C15485 = (3 * C52458) / C52258 -
                          (C52754 * de + C52442 * C88834) / q -
                          (C52426 * p) / q;
    const double C88446 = C52459 / q;
    const double C88414 = C52459 * p;
    const double C15484 = (2 * C52442) / q -
                          (C52738 * de + C52426 * C88834) / q -
                          (C52742 * p) / q;
    const double C15493 =
        C52773 / q - (C52769 * de + C52458 * C88834) / q - (C52442 * p) / q;
    const double C88448 = C53085 * p;
    const double C88447 = C53086 * p;
    const double C88547 = C53294 * p;
    const double C88464 = C53294 / q;
    const double C88465 = C53295 * p;
    const double C88466 = C53311 / q;
    const double C52411 = C88690 - (C52773 * C88835) / q - (C53311 * p) / q;
    const double C88484 = C53578 * p;
    const double C88522 = C53594 / q;
    const double C88485 = C53594 * p;
    const double C88497 = C53787 / q;
    const double C88498 = C53804 / q;
    const double C88515 = C54226 * p;
    const double C16288 = (3 * C53593) / C52258 -
                          (C54323 * de + C53805 * C88834) / q -
                          (C54327 * p) / q;
    const double C88521 = C54464 * p;
    const double C88684 = C54565 * p;
    const double C88525 = C54565 / q;
    const double C88536 = C54776 * p;
    const double C16536 =
        C54791 / q - (C54792 * C88835) / q + C88530 - (C54793 * p) / q;
    const double C16785 = (3 * C54792) / C52258 - (C54793 * C88835) / q +
                          C88553 - (C55260 * p) / q;
    const double C16784 =
        (2 * C54793) / q - (C55260 * C88835) / q + C88552 - (C55261 * p) / q;
    const double C88564 = C55469 * p;
    const double C88574 = C55746 / q;
    const double C88575 = C55763 / q;
    const double C88588 = C55958 * p;
    const double C88589 = C55974 * p;
    const double C88606 = C56395 * p;
    const double C17512 = (3 * C55764) / C52258 - (C55765 * C88835) / q +
                          C88608 - (C56631 * p) / q;
    const double C88652 = C56941 / q;
    const double C88619 = C56941 * p;
    const double C88629 = C56956 / C52258;
    const double C17688 = C88613 - (C56956 * C88835) / q - (C55746 * p) / q;
    const double C17800 = -(C57159 * de + C56956 * C88834 + C53787 * p) / q;
    const double C18176 = C88640 - (C57657 * C88835) / q - (C57658 * p) / q;
    const double C88663 = C57673 / C52258;
    const double C88666 = C57674 / q;
    const double C18177 = C88641 - (C57673 * C88835) / q - (C57674 * p) / q;
    const double C18288 = -(C57863 * de + C57657 * C88834 + C57867 * p) / q;
    const double C18289 = -(C57879 * de + C57673 * C88834 + C57883 * p) / q;
    const double C88661 = C58302 * p;
    const double C88686 = C59341 / C52258;
    const double C57013 = C88739 - (C59341 * C88835) / q - (C55763 * p) / q;
    const double C52380 = C88689 - (C52742 * C88835) / q - (C59776 * p) / q;
    const double C52474 =
        C52426 / C52258 - (C52427 * C88835) / q + C88692 - (C59891 * p) / q;
    const double C52517 = C88693 - (C54327 * C88835) / q - (C59906 * p) / q;
    const double C53115 = (3 * C53085) / C52258 - (C53086 * C88835) / q +
                          C88719 - (C60382 * p) / q;
    const double C53547 = C88736 - (C53788 * C88835) / q - (C60757 * p) / q;
    const double C53609 =
        C53577 / C52258 - (C53578 * C88835) / q + C88740 - (C60828 * p) / q;
    const double C53638 = C88741 - (C58403 * C88835) / q - (C60843 * p) / q;
    const double C54017 =
        C53805 / C52258 - (C54226 * C88835) / q + C88753 - (C61093 * p) / q;
    const double C54822 =
        C61394 / C52258 - (C54791 * C88835) / q + C88718 - (C54792 * p) / q;
    const double C55230 =
        (2 * C54776) / q - (C55469 * C88835) / q + C88763 - (C61621 * p) / q;
    const double C55290 = (5 * C55260) / C52258 - (C55261 * C88835) / q +
                          C88764 - (C61665 * p) / q;
    const double C55319 =
        (2 * C55765) / q - (C56631 * C88835) / q + C88765 - (C61680 * p) / q;
    const double C55780 = (3 * C55747) / C52258 - (C55748 * C88835) / q +
                          C88774 - (C62054 * p) / q;
    const double C56186 = (3 * C55974) / C52258 - (C56395 * C88835) / q +
                          C88789 - (C62291 * p) / q;
    const double C57627 = C88794 - (C57867 * C88835) / q - (C62763 * p) / q;
    const double C57689 =
        C57657 / C52258 - (C57658 * C88835) / q + C88795 - (C62834 * p) / q;
    const double C57718 = C88796 - (C62849 * C88835) / q - (C62850 * p) / q;
    const double C58093 =
        C57883 / C52258 - (C58302 * C88835) / q + C88801 - (C63044 * p) / q;
    const double C31277 =
        (3 * C64715) / C52258 - (C64699 * C88834) / q - (C64683 * p) / q;
    const double C31276 =
        (2 * C64699) / q - (C64683 * C88834) / q - (C64995 * p) / q;
    const double C31285 = C65024 / q - (C64715 * C88834) / q - (C64699 * p) / q;
    const double C89147 = C65530 * p;
    const double C89064 = C65530 / q;
    const double C89066 = C65546 / q;
    const double C64668 =
        C89290 - (C71828 * de + C65024 * C88835) / q - (C65546 * p) / q;
    const double C89097 = C66009 / q;
    const double C89098 = C66025 / q;
    const double C32080 =
        (3 * C65818) / C52258 - (C66026 * C88834) / q - (C66532 * p) / q;
    const double C89284 = C66763 * p;
    const double C89125 = C66763 / q;
    const double C89136 = C66966 * p;
    const double C32328 = C66981 / q - (C54995 * de + C66982 * C88835) / q +
                          C89130 - (C66983 * p) / q;
    const double C32577 = (3 * C66982) / C52258 -
                          (C55481 * de + C66983 * C88835) / q + C89153 -
                          (C67436 * p) / q;
    const double C32576 = (2 * C66983) / q -
                          (C55465 * de + C67436 * C88835) / q + C89152 -
                          (C67437 * p) / q;
    const double C89164 = C67642 * p;
    const double C89175 = C67925 / q;
    const double C89189 = C68132 * p;
    const double C89206 = C68539 * p;
    const double C33304 = (3 * C67926) / C52258 -
                          (C56728 * de + C67927 * C88835) / q + C89208 -
                          (C68768 * p) / q;
    const double C89229 = C69083 / C52258;
    const double C33592 = -(C69083 * C88834 + C66009 * p) / q;
    const double C89263 = C69779 / C52258;
    const double C34080 = -(C69763 * C88834 + C69970 * p) / q;
    const double C34081 = -(C69779 * C88834 + C69985 * p) / q;
    const double C89286 = C71399 / C52258;
    const double C69140 =
        C89339 - (C74528 * de + C71399 * C88835) / q - (C67925 * p) / q;
    const double C67012 = C73427 / C52258 -
                          (C73422 * de + C66981 * C88835) / q + C89318 -
                          (C66982 * p) / q;
    const double C67407 = (2 * C66966) / q -
                          (C73643 * de + C67642 * C88835) / q + C89363 -
                          (C73648 * p) / q;
    const double C67466 = (5 * C67436) / C52258 -
                          (C73688 * de + C67437 * C88835) / q + C89364 -
                          (C73693 * p) / q;
    const double C67495 = (2 * C67927) / q -
                          (C73704 * de + C68768 * C88835) / q + C89365 -
                          (C73709 * p) / q;
    const double C68337 = (3 * C68132) / C52258 -
                          (C74312 * de + C68539 * C88835) / q + C89389 -
                          (C74317 * p) / q;
    const double C47069 =
        (3 * C76711) / C52258 - (C76695 * C88834) / q - (C76679 * p) / q;
    const double C47068 =
        (2 * C76695) / q - (C76679 * C88834) / q - (C76991 * p) / q;
    const double C47077 = C77020 / q - (C76711 * C88834) / q - (C76695 * p) / q;
    const double C89744 = C77526 * p;
    const double C89661 = C77526 / q;
    const double C89663 = C77542 / q;
    const double C76664 = C89887 - (C77020 * C88835) / q - (C77542 * p) / q;
    const double C89694 = C78005 / q;
    const double C89695 = C78021 / q;
    const double C47872 =
        (3 * C77814) / C52258 - (C78022 * C88834) / q - (C78528 * p) / q;
    const double C89881 = C78759 * p;
    const double C89722 = C78759 / q;
    const double C89733 = C78962 * p;
    const double C48120 =
        C78977 / q - (C78978 * C88835) / q + C89727 - (C78979 * p) / q;
    const double C48369 = (3 * C78978) / C52258 - (C78979 * C88835) / q +
                          C89750 - (C79432 * p) / q;
    const double C48368 =
        (2 * C78979) / q - (C79432 * C88835) / q + C89749 - (C79433 * p) / q;
    const double C89761 = C79638 * p;
    const double C89772 = C79921 / q;
    const double C89786 = C80128 * p;
    const double C89803 = C80535 * p;
    const double C49096 = (3 * C79922) / C52258 - (C79923 * C88835) / q +
                          C89805 - (C80764 * p) / q;
    const double C89826 = C81079 / C52258;
    const double C49384 = -(C81079 * C88834 + C78005 * p) / q;
    const double C89860 = C81775 / C52258;
    const double C49872 = -(C81759 * C88834 + C81966 * p) / q;
    const double C49873 = -(C81775 * C88834 + C81981 * p) / q;
    const double C89883 = C83395 / C52258;
    const double C81136 = C89936 - (C83395 * C88835) / q - (C79921 * p) / q;
    const double C79008 =
        C85404 / C52258 - (C78977 * C88835) / q + C89915 - (C78978 * p) / q;
    const double C79403 =
        (2 * C78962) / q - (C79638 * C88835) / q + C89960 - (C85624 * p) / q;
    const double C79462 = (5 * C79432) / C52258 - (C79433 * C88835) / q +
                          C89961 - (C85668 * p) / q;
    const double C79491 =
        (2 * C79923) / q - (C80764 * C88835) / q + C89962 - (C85683 * p) / q;
    const double C80333 = (3 * C80128) / C52258 - (C80535 * C88835) / q +
                          C89986 - (C86289 * p) / q;
    const double C15298 = (3 * C52227) / C52258 -
                          (C52256 * de + C52210 * C88834) / q + C88400 -
                          (C52193 * p) / q;
    const double C15297 = (2 * C52210) / q -
                          (C52239 * de + C52193 * C88834) / q + C88399 -
                          (C52244 * p) / q;
    const double C15306 = C52277 / q - (C52273 * de + C52227 * C88834) / q +
                          C88401 - (C52210 * p) / q;
    const double C88435 = C52961 / q;
    const double C88437 = C52979 / q;
    const double C88475 = C53453 / q;
    const double C88477 = C53471 / q;
    const double C16072 = (3 * C52945) / C52258 -
                          (C53925 * de + C52981 * C88834) / q + C88503 -
                          (C53930 * p) / q;
    const double C16200 = (3 * C53437) / C52258 -
                          (C54163 * de + C53473 * C88834) / q + C88514 -
                          (C54168 * p) / q;
    const double C88518 = C54404 / q;
    const double C16464 = C54642 / C52258 -
                          (C54654 * de + C52961 * C88834) / q + C88529 -
                          (C52928 * p) / q;
    const double C16472 =
        C88530 - (C54670 * de + C54642 * C88834) / q - (C52961 * p) / q;
    const double C16720 =
        C88552 - (C55134 * de + C55105 * C88834) / q - (C55139 * p) / q;
    const double C88595 = C55156 / q;
    const double C16721 =
        C88553 - (C55151 * de + C55122 * C88834) / q - (C55156 * p) / q;
    const double C16976 =
        C88567 - (C55620 * de + C55591 * C88834) / q - (C55625 * p) / q;
    const double C88604 = C55642 / q;
    const double C16977 =
        C88568 - (C55637 * de + C55608 * C88834) / q - (C55642 * p) / q;
    const double C17224 = C55122 / C52258 -
                          (C56094 * de + C55156 * C88834) / q + C88596 -
                          (C56099 * p) / q;
    const double C17352 = C55608 / C52258 -
                          (C56332 * de + C55642 * C88834) / q + C88605 -
                          (C56337 * p) / q;
    const double C17480 =
        C88608 - (C56568 * de + C56556 * C88834) / q - (C56573 * p) / q;
    const double C17616 = C56807 / C52258 -
                          (C56819 * de + C53453 * C88834) / q + C88612 -
                          (C53420 * p) / q;
    const double C17624 =
        C88613 - (C56835 * de + C56807 * C88834) / q - (C53453 * p) / q;
    const double C88649 = C57284 / q;
    const double C17871 =
        C88634 - (C57279 * de + C57267 * C88834) / q - (C57284 * p) / q;
    const double C18112 =
        C88640 - (C57531 * de + C57502 * C88834) / q - (C57536 * p) / q;
    const double C88658 = C57553 / q;
    const double C18113 =
        C88641 - (C57548 * de + C57519 * C88834) / q - (C57553 * p) / q;
    const double C18360 = C57267 / C52258 -
                          (C58001 * de + C57284 * C88834) / q + C88650 -
                          (C58006 * p) / q;
    const double C18488 = C57519 / C52258 -
                          (C58239 * de + C57553 * C88834) / q + C88659 -
                          (C58244 * p) / q;
    const double C18616 =
        C88665 - (C58476 * de + C58464 * C88834) / q - (C58481 * p) / q;
    const double C18758 = C58715 / C52258 -
                          (C58711 * de + C52979 * C88834) / q + C88668 -
                          (C52945 * p) / q;
    const double C54703 =
        C88718 - (C61321 * de + C58715 * C88834) / q - (C52979 * p) / q;
    const double C19103 = C58949 / C52258 -
                          (C58945 * de + C54404 * C88834) / q + C88680 -
                          (C54388 * p) / q;
    const double C20038 =
        C88688 - (C59413 * de + C58949 * C88834) / q - (C54404 * p) / q;
    const double C19350 = C59182 / C52258 -
                          (C59178 * de + C53471 * C88834) / q + C88682 -
                          (C53437 * p) / q;
    const double C56896 =
        C88739 - (C62462 * de + C59182 * C88834) / q - (C53471 * p) / q;
    const double C52194 = (5 * C52193) / C52258 -
                          (C59646 * de + C52244 * C88834) / q + C88689 -
                          (C59650 * p) / q;
    const double C52226 = C59680 / C52258 -
                          (C59676 * de + C52277 * C88834) / q + C88690 -
                          (C52227 * p) / q;
    const double C52293 = (2 * C52981) / q -
                          (C59739 * de + C53930 * C88834) / q + C88692 -
                          (C59744 * p) / q;
    const double C52336 = (2 * C53473) / q -
                          (C59756 * de + C54168 * C88834) / q + C88693 -
                          (C59761 * p) / q;
    const double C52929 = (3 * C52928) / C52258 -
                          (C60209 * de + C52963 * C88834) / q + C88715 -
                          (C60213 * p) / q;
    const double C53421 = (3 * C53420) / C52258 -
                          (C60629 * de + C53455 * C88834) / q + C88736 -
                          (C60633 * p) / q;
    const double C53959 = (3 * C54388) / C52258 -
                          (C61074 * de + C54406 * C88834) / q + C88753 -
                          (C61078 * p) / q;
    const double C55106 = C55105 / C52258 -
                          (C61521 * de + C55139 * C88834) / q + C88763 -
                          (C61525 * p) / q;
    const double C55171 =
        C88764 - (C61582 * de + C61587 * C88834) / q - (C61588 * p) / q;
    const double C55200 =
        C88765 - (C61600 * de + C61605 * C88834) / q - (C61606 * p) / q;
    const double C55592 = C55591 / C52258 -
                          (C61856 * de + C55625 * C88834) / q + C88773 -
                          (C61860 * p) / q;
    const double C55657 =
        C88774 - (C61917 * de + C61921 * C88834) / q - (C61922 * p) / q;
    const double C55686 =
        C88775 - (C61934 * de + C61939 * C88834) / q - (C61940 * p) / q;
    const double C56128 = C56556 / C52258 -
                          (C62272 * de + C56573 * C88834) / q + C88789 -
                          (C62276 * p) / q;
    const double C57503 = C57502 / C52258 -
                          (C62664 * de + C57536 * C88834) / q + C88794 -
                          (C62668 * p) / q;
    const double C57568 =
        C88795 - (C62725 * de + C62729 * C88834) / q - (C62730 * p) / q;
    const double C57597 =
        C88796 - (C62742 * de + C62747 * C88834) / q - (C62748 * p) / q;
    const double C58035 = C58464 / C52258 -
                          (C63025 * de + C58481 * C88834) / q + C88801 -
                          (C63029 * p) / q;
    const double C31090 = (3 * C64491) / C52258 - (C64475 * C88834) / q +
                          C89004 - (C64459 * p) / q;
    const double C31089 =
        (2 * C64475) / q - (C64459 * C88834) / q + C89003 - (C64507 * p) / q;
    const double C31098 =
        C64537 / q - (C64491 * C88834) / q + C89005 - (C64475 * p) / q;
    const double C89037 = C65220 / q;
    const double C89077 = C65698 / q;
    const double C31864 = (3 * C65188) / C52258 - (C65222 * C88834) / q +
                          C89103 - (C66145 * p) / q;
    const double C31992 = (3 * C65666) / C52258 - (C65700 * C88834) / q +
                          C89114 - (C66376 * p) / q;
    const double C89118 = C66605 / q;
    const double C34550 =
        C70790 / C52258 - (C65220 * C88834) / q + C89268 - (C65188 * p) / q;
    const double C66895 = C89318 - (C70790 * C88834) / q - (C65220 * p) / q;
    const double C34895 =
        C71017 / C52258 - (C66605 * C88834) / q + C89280 - (C66590 * p) / q;
    const double C35830 = C89288 - (C71017 * C88834) / q - (C66605 * p) / q;
    const double C35142 =
        C71243 / C52258 - (C65698 * C88834) / q + C89282 - (C65666 * p) / q;
    const double C69025 = C89339 - (C71243 * C88834) / q - (C65698 * p) / q;
    const double C64460 = (5 * C64459) / C52258 - (C64507 * C88834) / q +
                          C89289 - (C71697 * p) / q;
    const double C64490 =
        C71725 / C52258 - (C64537 * C88834) / q + C89290 - (C64491 * p) / q;
    const double C64553 =
        (2 * C65222) / q - (C66145 * C88834) / q + C89292 - (C71785 * p) / q;
    const double C64596 =
        (2 * C65700) / q - (C66376 * C88834) / q + C89293 - (C71801 * p) / q;
    const double C66174 = (3 * C66590) / C52258 - (C66607 * C88834) / q +
                          C89353 - (C73112 * p) / q;
    const double C46882 = (3 * C76487) / C52258 - (C76471 * C88834) / q +
                          C89601 - (C76455 * p) / q;
    const double C46881 =
        (2 * C76471) / q - (C76455 * C88834) / q + C89600 - (C76503 * p) / q;
    const double C46890 =
        C76533 / q - (C76487 * C88834) / q + C89602 - (C76471 * p) / q;
    const double C89634 = C77216 / q;
    const double C89674 = C77694 / q;
    const double C47656 = (3 * C77184) / C52258 - (C77218 * C88834) / q +
                          C89700 - (C78141 * p) / q;
    const double C47784 = (3 * C77662) / C52258 - (C77696 * C88834) / q +
                          C89711 - (C78372 * p) / q;
    const double C89715 = C78601 / q;
    const double C50342 =
        C82786 / C52258 - (C77216 * C88834) / q + C89865 - (C77184 * p) / q;
    const double C78891 = C89915 - (C82786 * C88834) / q - (C77216 * p) / q;
    const double C50687 =
        C83013 / C52258 - (C78601 * C88834) / q + C89877 - (C78586 * p) / q;
    const double C51622 = C89885 - (C83013 * C88834) / q - (C78601 * p) / q;
    const double C50934 =
        C83239 / C52258 - (C77694 * C88834) / q + C89879 - (C77662 * p) / q;
    const double C81021 = C89936 - (C83239 * C88834) / q - (C77694 * p) / q;
    const double C76456 = (5 * C76455) / C52258 - (C76503 * C88834) / q +
                          C89886 - (C83693 * p) / q;
    const double C76486 =
        C83721 / C52258 - (C76533 * C88834) / q + C89887 - (C76487 * p) / q;
    const double C76549 =
        (2 * C77218) / q - (C78141 * C88834) / q + C89889 - (C83781 * p) / q;
    const double C76592 =
        (2 * C77696) / q - (C78372 * C88834) / q + C89890 - (C83797 * p) / q;
    const double C78170 = (3 * C78586) / C52258 - (C78603 * C88834) / q +
                          C89950 - (C85094 * p) / q;
    const double C89383 = C74214 * p;
    const double C69824 =
        C89396 - (C74863 * de + C74868 * C88835) / q - (C74869 * p) / q;
    const double C69734 =
        C89394 - (C74775 * de + C69970 * C88835) / q - (C74780 * p) / q;
    const double C89378 = C74110 * p;
    const double C67584 = C89364 - (C67729 * C88836) / q - (C73783 * p) / q;
    const double C89366 = C73724 * p;
    const double C89347 = C73025 * p;
    const double C69705 = C89396 - (C74763 * C88834) / q - (C74764 * p) / q;
    const double C69676 = C89395 - (C74746 * C88834) / q - (C74747 * p) / q;
    const double C89344 = C72937 * p;
    const double C89328 = C72526 * p;
    const double C65863 =
        C89341 - (C72873 * de + C70489 * C88835) / q - (C72878 * p) / q;
    const double C67850 = C89375 - (C73962 * C88834) / q - (C73963 * p) / q;
    const double C89327 = C72511 * p;
    const double C67821 = C89374 - (C73945 * C88834) / q - (C73946 * p) / q;
    const double C89323 = C72452 * p;
    const double C65773 =
        C89336 - (C72785 * de + C66010 * C88835) / q - (C72790 * p) / q;
    const double C67378 = C89365 - (C73631 * C88834) / q - (C73632 * p) / q;
    const double C67349 = C89364 - (C73614 * C88834) / q - (C73615 * p) / q;
    const double C89306 = C72080 * p;
    const double C64817 = C89289 - (C65083 * C88836) / q - (C71965 * p) / q;
    const double C64774 =
        C89293 - (C71945 * de + C66532 * C88835) / q - (C71950 * p) / q;
    const double C64639 =
        C89289 - (C71812 * de + C64995 * C88835) / q - (C71817 * p) / q;
    const double C89192 = C68206 * p;
    const double C89190 = C68176 * p;
    const double C89261 = C70390 * p;
    const double C70188 = C69985 / C52258 -
                          (C75058 * de + C70390 * C88835) / q + C89401 -
                          (C75063 * p) / q;
    const double C89188 = C68117 * p;
    const double C89201 = C68366 * p;
    const double C33968 =
        C89240 - (C57863 * de + C69763 * C88835) / q - (C69764 * p) / q;
    const double C69795 = C69763 / C52258 -
                          (C74847 * de + C69764 * C88835) / q + C89395 -
                          (C74852 * p) / q;
    const double C89183 = C68029 * p;
    const double C89266 = C69780 / q;
    const double C33969 =
        C89241 - (C57879 * de + C69779 * C88835) / q - (C69780 * p) / q;
    const double C89182 = C68030 * p;
    const double C68088 = (3 * C68029) / C52258 - (C68030 * C88836) / q +
                          C89375 - (C74169 * p) / q;
    const double C89209 = C67569 / q;
    const double C89161 = C67569 * p;
    const double C89160 = C67554 * p;
    const double C67613 =
        C67553 / C52258 - (C67554 * C88836) / q + C89365 - (C73798 * p) / q;
    const double C67942 = (3 * C67909) / C52258 -
                          (C74074 * de + C67910 * C88835) / q + C89374 -
                          (C74079 * p) / q;
    const double C89181 = C67099 / q;
    const double C89143 = C67099 * p;
    const double C89174 = C67908 / q;
    const double C33480 =
        C89213 - (C57159 * de + C69083 * C88835) / q - (C67908 * p) / q;
    const double C89207 = C67083 / q;
    const double C89142 = C67083 * p;
    const double C89252 = C69068 / q;
    const double C89219 = C69068 * p;
    const double C89102 = C66101 * p;
    const double C34408 = C89265 - (C70547 * C88834) / q - (C70563 * p) / q;
    const double C70131 =
        C70547 / C52258 - (C70563 * C88834) / q + C89401 - (C75047 * p) / q;
    const double C89100 = C66071 * p;
    const double C89109 = C66260 * p;
    const double C33904 = C89240 - (C69613 * C88834) / q - (C69645 * p) / q;
    const double C69614 =
        C69613 / C52258 - (C69645 * C88834) / q + C89394 - (C74689 * p) / q;
    const double C89093 = C65921 * p;
    const double C89258 = C69661 / q;
    const double C33905 = C89241 - (C69629 * C88834) / q - (C69661 * p) / q;
    const double C34280 =
        C69629 / C52258 - (C69661 * C88834) / q + C89259 - (C70333 * p) / q;
    const double C89092 = C65922 * p;
    const double C65980 = (3 * C65921) / C52258 - (C65922 * C88836) / q +
                          C89341 - (C72952 * p) / q;
    const double C89121 = C66664 * p;
    const double C33272 = C89208 - (C68695 * C88834) / q - (C68711 * p) / q;
    const double C68280 =
        C68695 / C52258 - (C68711 * C88834) / q + C89389 - (C74301 * p) / q;
    const double C89115 = C66433 * p;
    const double C66231 = C66026 / C52258 -
                          (C73123 * de + C66433 * C88835) / q + C89353 -
                          (C73128 * p) / q;
    const double C89065 = C65531 * p;
    const double C89124 = C65457 / q;
    const double C89057 = C65457 * p;
    const double C89249 = C69401 / q;
    const double C33663 = C89234 - (C69385 * C88834) / q - (C69401 * p) / q;
    const double C34152 =
        C69385 / C52258 - (C69401 * C88834) / q + C89250 - (C70102 * p) / q;
    const double C89056 = C65442 * p;
    const double C89084 = C65803 * p;
    const double C65834 = C65802 / C52258 -
                          (C72857 * de + C65803 * C88835) / q + C89340 -
                          (C72862 * p) / q;
    const double C32768 = C89167 - (C67758 * C88834) / q - (C67790 * p) / q;
    const double C67759 =
        C67758 / C52258 - (C67790 * C88834) / q + C89373 - (C73888 * p) / q;
    const double C89122 = C65819 / q;
    const double C89085 = C65819 * p;
    const double C89204 = C67806 / q;
    const double C32769 = C89168 - (C67774 * C88834) / q - (C67806 * p) / q;
    const double C33144 =
        C67774 / C52258 - (C67806 * C88834) / q + C89205 - (C68482 * p) / q;
    const double C32512 = C89152 - (C67286 * C88834) / q - (C67318 * p) / q;
    const double C67287 =
        C67286 / C52258 - (C67318 * C88834) / q + C89363 - (C73556 * p) / q;
    const double C89048 = C65324 * p;
    const double C89195 = C67334 / q;
    const double C32513 = C89153 - (C67302 * C88834) / q - (C67334 * p) / q;
    const double C33016 =
        C67302 / C52258 - (C67334 * C88834) / q + C89196 - (C68251 * p) / q;
    const double C89047 = C65325 * p;
    const double C65354 = (3 * C65324) / C52258 -
                          (C72416 * de + C65325 * C88835) / q + C89319 -
                          (C72421 * p) / q;
    const double C89091 = C64894 / q;
    const double C89023 = C64894 * p;
    const double C89075 = C65681 / q;
    const double C33416 = C89213 - (C68938 * C88834) / q - (C65681 * p) / q;
    const double C89116 = C64878 / q;
    const double C89022 = C64878 * p;
    const double C33408 =
        C68938 / C52258 - (C65681 * C88834) / q + C89212 - (C65650 * p) / q;
    const double C89021 = C64862 * p;
    const double C65651 = (3 * C65650) / C52258 - (C65683 * C88834) / q +
                          C89336 - (C72672 * p) / q;
    const double C89046 = C64716 / q;
    const double C89014 = C64716 * p;
    const double C89035 = C65203 / q;
    const double C32264 = C89130 - (C66836 * C88834) / q - (C65203 * p) / q;
    const double C89107 = C64700 / q;
    const double C89013 = C64700 * p;
    const double C32256 =
        C66836 / C52258 - (C65203 * C88834) / q + C89129 - (C65172 * p) / q;
    const double C89012 = C64684 * p;
    const double C64731 = C64683 / C52258 -
                          (C71929 * de + C64684 * C88835) / q + C89292 -
                          (C71934 * p) / q;
    const double C65173 = (3 * C65172) / C52258 - (C65205 * C88834) / q +
                          C89315 - (C72257 * p) / q;
    const double C89980 = C86187 * p;
    const double C81820 = C89993 - (C86833 * C88835) / q - (C86834 * p) / q;
    const double C81730 = C89991 - (C81966 * C88835) / q - (C86747 * p) / q;
    const double C89975 = C86082 * p;
    const double C79580 =
        C89961 - (C85752 * de + C79725 * C88836) / q - (C85758 * p) / q;
    const double C89963 = C85698 * p;
    const double C89944 = C85007 * p;
    const double C81701 = C89993 - (C86731 * C88834) / q - (C86732 * p) / q;
    const double C81672 = C89992 - (C86714 * C88834) / q - (C86715 * p) / q;
    const double C89941 = C84920 * p;
    const double C89925 = C84513 * p;
    const double C77859 = C89938 - (C82485 * C88835) / q - (C84861 * p) / q;
    const double C79846 = C89972 - (C85937 * C88834) / q - (C85938 * p) / q;
    const double C89924 = C84498 * p;
    const double C79817 = C89971 - (C85920 * C88834) / q - (C85921 * p) / q;
    const double C89920 = C84439 * p;
    const double C77769 = C89933 - (C78006 * C88835) / q - (C84775 * p) / q;
    const double C79374 = C89962 - (C85608 * C88834) / q - (C85609 * p) / q;
    const double C79345 = C89961 - (C85591 * C88834) / q - (C85592 * p) / q;
    const double C89903 = C84072 * p;
    const double C76813 =
        C89886 - (C72135 * de + C77079 * C88836) / q - (C83957 * p) / q;
    const double C76770 = C89890 - (C78528 * C88835) / q - (C83942 * p) / q;
    const double C76635 = C89886 - (C76991 * C88835) / q - (C83812 * p) / q;
    const double C89789 = C80202 * p;
    const double C89787 = C80172 * p;
    const double C89858 = C82386 * p;
    const double C82184 =
        C81981 / C52258 - (C82386 * C88835) / q + C89998 - (C87028 * p) / q;
    const double C89785 = C80113 * p;
    const double C89798 = C80362 * p;
    const double C49760 = C89837 - (C81759 * C88835) / q - (C81760 * p) / q;
    const double C81791 =
        C81759 / C52258 - (C81760 * C88835) / q + C89992 - (C86818 * p) / q;
    const double C89780 = C80025 * p;
    const double C89863 = C81776 / q;
    const double C49761 = C89838 - (C81775 * C88835) / q - (C81776 * p) / q;
    const double C89779 = C80026 * p;
    const double C80084 = (3 * C80025) / C52258 -
                          (C86137 * de + C80026 * C88836) / q + C89972 -
                          (C86143 * p) / q;
    const double C89806 = C79565 / q;
    const double C89758 = C79565 * p;
    const double C89757 = C79550 * p;
    const double C79609 = C79549 / C52258 -
                          (C85768 * de + C79550 * C88836) / q + C89962 -
                          (C85774 * p) / q;
    const double C79938 = (3 * C79905) / C52258 - (C79906 * C88835) / q +
                          C89971 - (C86052 * p) / q;
    const double C89778 = C79095 / q;
    const double C89740 = C79095 * p;
    const double C89771 = C79904 / q;
    const double C49272 = C89810 - (C81079 * C88835) / q - (C79904 * p) / q;
    const double C89804 = C79079 / q;
    const double C89739 = C79079 * p;
    const double C89849 = C81064 / q;
    const double C89816 = C81064 * p;
    const double C89699 = C78097 * p;
    const double C50200 = C89862 - (C82543 * C88834) / q - (C82559 * p) / q;
    const double C82127 =
        C82543 / C52258 - (C82559 * C88834) / q + C89998 - (C87013 * p) / q;
    const double C89697 = C78067 * p;
    const double C89706 = C78256 * p;
    const double C49696 = C89837 - (C81609 * C88834) / q - (C81641 * p) / q;
    const double C81610 =
        C81609 / C52258 - (C81641 * C88834) / q + C89991 - (C86657 * p) / q;
    const double C89690 = C77917 * p;
    const double C89855 = C81657 / q;
    const double C49697 = C89838 - (C81625 * C88834) / q - (C81657 * p) / q;
    const double C50072 =
        C81625 / C52258 - (C81657 * C88834) / q + C89856 - (C82329 * p) / q;
    const double C89689 = C77918 * p;
    const double C77976 = (3 * C77917) / C52258 -
                          (C75159 * de + C77918 * C88836) / q + C89938 -
                          (C84935 * p) / q;
    const double C89718 = C78660 * p;
    const double C49064 = C89805 - (C80691 * C88834) / q - (C80707 * p) / q;
    const double C80276 =
        C80691 / C52258 - (C80707 * C88834) / q + C89986 - (C86274 * p) / q;
    const double C89712 = C78429 * p;
    const double C78227 =
        C78022 / C52258 - (C78429 * C88835) / q + C89950 - (C85109 * p) / q;
    const double C89662 = C77527 * p;
    const double C89721 = C77453 / q;
    const double C89654 = C77453 * p;
    const double C89846 = C81397 / q;
    const double C49455 = C89831 - (C81381 * C88834) / q - (C81397 * p) / q;
    const double C49944 =
        C81381 / C52258 - (C81397 * C88834) / q + C89847 - (C82098 * p) / q;
    const double C89653 = C77438 * p;
    const double C89681 = C77799 * p;
    const double C77830 =
        C77798 / C52258 - (C77799 * C88835) / q + C89937 - (C84846 * p) / q;
    const double C48560 = C89764 - (C79754 * C88834) / q - (C79786 * p) / q;
    const double C79755 =
        C79754 / C52258 - (C79786 * C88834) / q + C89970 - (C85863 * p) / q;
    const double C89719 = C77815 / q;
    const double C89682 = C77815 * p;
    const double C89801 = C79802 / q;
    const double C48561 = C89765 - (C79770 * C88834) / q - (C79802 * p) / q;
    const double C48936 =
        C79770 / C52258 - (C79802 * C88834) / q + C89802 - (C80478 * p) / q;
    const double C48304 = C89749 - (C79282 * C88834) / q - (C79314 * p) / q;
    const double C79283 =
        C79282 / C52258 - (C79314 * C88834) / q + C89960 - (C85533 * p) / q;
    const double C89645 = C77320 * p;
    const double C89792 = C79330 / q;
    const double C48305 = C89750 - (C79298 * C88834) / q - (C79330 * p) / q;
    const double C48808 =
        C79298 / C52258 - (C79330 * C88834) / q + C89793 - (C80247 * p) / q;
    const double C89644 = C77321 * p;
    const double C77350 = (3 * C77320) / C52258 - (C77321 * C88835) / q +
                          C89916 - (C84409 * p) / q;
    const double C89688 = C76890 / q;
    const double C89620 = C76890 * p;
    const double C89672 = C77677 / q;
    const double C49208 = C89810 - (C80934 * C88834) / q - (C77677 * p) / q;
    const double C89713 = C76874 / q;
    const double C89619 = C76874 * p;
    const double C49200 =
        C80934 / C52258 - (C77677 * C88834) / q + C89809 - (C77646 * p) / q;
    const double C89618 = C76858 * p;
    const double C77647 = (3 * C77646) / C52258 - (C77679 * C88834) / q +
                          C89933 - (C84658 * p) / q;
    const double C89643 = C76712 / q;
    const double C89611 = C76712 * p;
    const double C89632 = C77199 / q;
    const double C48056 = C89727 - (C78832 * C88834) / q - (C77199 * p) / q;
    const double C89704 = C76696 / q;
    const double C89610 = C76696 * p;
    const double C48048 =
        C78832 / C52258 - (C77199 * C88834) / q + C89726 - (C77168 * p) / q;
    const double C89609 = C76680 * p;
    const double C76727 =
        C76679 / C52258 - (C76680 * C88835) / q + C89889 - (C83927 * p) / q;
    const double C77169 = (3 * C77168) / C52258 - (C77201 * C88834) / q +
                          C89912 - (C84247 * p) / q;
    const double C52698 =
        C88707 - (C52608 * C88836) / q + C88693 - (C60051 * p) / q;
    const double C54107 = C88707 - (C52882 * C88835) / q - (C61136 * p) / q;
    const double C88843 = C88421 / q;
    const double C53668 =
        C88516 - (C53853 * C88836) / q + C88736 - (C60858 * p) / q;
    const double C88844 = C88422 / q;
    const double C88845 = C88423 / q;
    const double C15535 = -(C52607 * C88835 + C88430) / q;
    const double C16176 = (3 * C52912) / C52258 -
                          (C54119 * de + C52897 * C88834) / q - C88430 / q;
    const double C53327 = C88511 - (C53359 * C88835) / q - (C60544 * p) / q;
    const double C15536 = -(C52623 * C88835 + C88431) / q;
    const double C15544 = -(C52639 * C88835 + C88432) / q;
    const double C88867 = C88472 / q;
    const double C88858 = C88456 / q;
    const double C88859 = C88457 / q;
    const double C16049 = -(C52640 * C88835 + C88457) / q;
    const double C16680 = -(C55055 * de + C54910 * C88834 + C88549) / q;
    const double C18968 = C88679 - (C53375 * C88835) / q - C88549 / q;
    const double C88865 = C88468 / q;
    const double C15777 =
        C88469 - (C53371 * de + C52912 * C88834) / q - C88431 / q;
    const double C88866 = C88470 / q;
    const double C88880 = C88493 / q;
    const double C88879 = C88492 / q;
    const double C17832 = -(C57219 * de + C57074 * C88834 + C88631) / q;
    const double C19470 = C88679 - (C53869 * C88836) / q + C88682 - C88631 / q;
    const double C88883 = C88500 / q;
    const double C88676 = C52592 / C52258;
    const double C88892 = C88502 / q;
    const double C16048 = -(C53698 * C88835 + C88502) / q;
    const double C88884 = C88509 / q;
    const double C16312 = -(C52624 * C88835 + C88509) / q;
    const double C18878 = C88668 - (C53375 * C88836) / q - C88675 / q;
    const double C19560 = -(C53869 * C88835 + C88675) / q;
    const double C20233 = -(C59601 * de + C56067 * C88834 + C88675) / q;
    const double C88896 = C88542 / q;
    const double C17185 = -(C56033 * de + C54911 * C88834 + C88542) / q;
    const double C88897 = C88543 / q;
    const double C16688 = C88469 - (C53358 * C88835) / q - C88550 / q;
    const double C16929 = -(C55543 * de + C55089 * C88834 + C88550) / q;
    const double C18953 =
        C88678 - (C58901 * de + C53375 * C88834) / q - C88432 / q;
    const double C88901 = C88560 / q;
    const double C55899 =
        C88609 - (C56052 * C88836) / q + C88774 - (C62128 * p) / q;
    const double C88902 = C88561 / q;
    const double C16928 = -(C55527 * de + C55379 * C88834 + C88565) / q;
    const double C17336 =
        (3 * C53358) / C52258 - (C55073 * C88835) / q - C88565 / q;
    const double C88914 = C88583 / q;
    const double C88913 = C88582 / q;
    const double C88923 = C88590 / q;
    const double C17184 = -(C56017 * de + C55869 * C88834 + C88590) / q;
    const double C17848 = -(C57074 * C88835 + C88633) / q;
    const double C20158 = C88678 - (C56067 * C88836) / q + C88688 - C88633 / q;
    const double C88918 = C88592 / q;
    const double C54940 = C88718 - (C55088 * C88836) / q - C88759 / q;
    const double C59357 = -(C57073 * C88835 + C88759) / q;
    const double C88919 = C88601 / q;
    const double C17584 = -(C56759 * de + C55395 * C88834 + C88601) / q;
    const double C17744 = C88501 - (C53852 * C88836) / q + C88612 - C88625 / q;
    const double C18321 = -(C57942 * de + C57075 * C88834 + C88625) / q;
    const double C88623 = C17752 / C52258;
    const double C17840 = -(C53852 * C88835 + C88632) / q;
    const double C18066 = -(C57469 * de + C56051 * C88834 + C88632) / q;
    const double C19223 =
        C53375 / C52258 - (C54597 * C88836) / q + C88680 - C88632 / q;
    const double C17991 = C88593 - (C56051 * C88836) / q + C88634 - C88637 / q;
    const double C18337 = -(C57075 * C88835 + C88637) / q;
    const double C88662 = C18241 / C52258;
    const double C18273 = (3 * C17752) / C52258 - (C18241 * C88836) / q +
                          C57075 / q - (C18240 * p) / q;
    const double C18320 = -(C57926 * de + C57778 * C88834 + C88647) / q;
    const double C18552 =
        (3 * C53852) / C52258 - (C57058 * C88836) / q + C88659 - C88647 / q;
    const double C18336 = -(C57778 * C88835 + C88648) / q;
    const double C18680 =
        (3 * C56051) / C52258 - (C57399 * C88836) / q + C88665 - C88648 / q;
    const double C18424 = C88526 - (C57237 * C88836) / q + C88650 - C88654 / q;
    const double C18600 = -(C57058 * C88835 + C88654) / q;
    const double C18720 = -(C58667 * de + C57399 * C88834 + C88654) / q;
    const double C52655 = C88692 - (C52882 * C88836) / q - C88706 / q;
    const double C54343 = -(C52608 * C88835 + C88706) / q;
    const double C88944 = C88723 / q;
    const double C88947 = C88727 / q;
    const double C88948 = C88728 / q;
    const double C53728 = C88524 - (C53884 * C88836) / q + C88740 - C88744 / q;
    const double C58419 = -(C53699 * C88835 + C88744) / q;
    const double C88495 = C53757 * p;
    const double C53821 = -(C53853 * C88835 + C88747) / q;
    const double C54076 =
        C52897 / C52258 - (C54047 * C88836) / q + C88753 - C88747 / q;
    const double C88961 = C88766 / q;
    const double C88562 = C55439 * p;
    const double C16912 = -(C55496 * de + C16944 * C88834 + C55500 * p) / q;
    const double C88965 = C88778 / q;
    const double C88586 = C55928 * p;
    const double C88969 = C88783 / q;
    const double C57132 =
        C88791 - (C57073 * C88836) / q + C88739 - (C57074 * p) / q;
    const double C58889 = C88791 - (C55088 * C88835) / q - (C54910 * p) / q;
    const double C88645 = C57748 * p;
    const double C88646 = C57808 * p;
    const double C18272 = (2 * C18241) / q - (C18240 * C88836) / q +
                          C57778 / q - (C57837 * p) / q;
    const double C57899 = -(C57930 * C88835 + C88798) / q;
    const double C58152 =
        (3 * C57237) / C52258 - (C58123 * C88836) / q + C88801 - C88798 / q;
    const double C64952 =
        C89307 - (C64862 * C88836) / q + C89293 - (C72095 * p) / q;
    const double C66318 =
        C89307 - (C73167 * de + C65127 * C88835) / q - (C73172 * p) / q;
    const double C31327 = -(C52832 * de + C64861 * C88835 + C89030) / q;
    const double C31968 =
        (3 * C65157) / C52258 - (C65142 * C88834) / q - C89030 / q;
    const double C65561 =
        C89111 - (C72580 * de + C65591 * C88835) / q - (C72585 * p) / q;
    const double C31328 = -(C52848 * de + C64877 * C88835 + C89031) / q;
    const double C31336 = -(C52863 * de + C64893 * C88835 + C89032) / q;
    const double C89464 = C89072 / q;
    const double C32472 = -(C67098 * C88834 + C89149) / q;
    const double C34760 =
        C89279 - (C58901 * de + C65606 * C88835) / q - C89149 / q;
    const double C89462 = C89068 / q;
    const double C31569 = C89069 - (C65157 * C88834) / q - C89031 / q;
    const double C89463 = C89070 / q;
    const double C33624 = -(C69199 * C88834 + C89231) / q;
    const double C35262 = C89279 - (C66086 * C88836) / q + C89282 - C89231 / q;
    const double C89276 = C64846 / C52258;
    const double C34670 = C89268 - (C65606 * C88836) / q - C89275 / q;
    const double C35352 = -(C59369 * de + C66086 * C88835 + C89275) / q;
    const double C36025 = -(C68221 * C88834 + C89275) / q;
    const double C32480 =
        C89069 - (C55040 * de + C65590 * C88835) / q - C89150 / q;
    const double C32721 = -(C67271 * C88834 + C89150) / q;
    const double C34745 = C89278 - (C65606 * C88834) / q - C89032 / q;
    const double C32720 = -(C67553 * C88834 + C89165) / q;
    const double C33128 = (3 * C65590) / C52258 -
                          (C56288 * de + C67255 * C88835) / q - C89165 / q;
    const double C33640 = -(C57219 * de + C69199 * C88835 + C89233) / q;
    const double C35950 = C89278 - (C68221 * C88836) / q + C89288 - C89233 / q;
    const double C67128 = C89318 - (C67270 * C88836) / q - C89359 / q;
    const double C71414 = -(C75301 * de + C69198 * C88835 + C89359) / q;
    const double C33536 = C89101 - (C66070 * C88836) / q + C89212 - C89225 / q;
    const double C34113 = -(C69200 * C88834 + C89225) / q;
    const double C89223 = C33544 / C52258;
    const double C33632 = -(C57204 * de + C66070 * C88835 + C89232) / q;
    const double C33858 = -(C68205 * C88834 + C89232) / q;
    const double C35015 =
        C65606 / C52258 - (C66793 * C88836) / q + C89280 - C89232 / q;
    const double C33783 = C89193 - (C68205 * C88836) / q + C89234 - C89237 / q;
    const double C34129 = -(C57942 * de + C69200 * C88835 + C89237) / q;
    const double C89262 = C34033 / C52258;
    const double C34065 = (3 * C33544) / C52258 - (C34033 * C88836) / q +
                          C69200 / q - (C34032 * p) / q;
    const double C34112 = -(C69882 * C88834 + C89247) / q;
    const double C34344 =
        (3 * C66070) / C52258 - (C69183 * C88836) / q + C89259 - C89247 / q;
    const double C34128 = -(C57926 * de + C69882 * C88835 + C89248) / q;
    const double C34472 =
        (3 * C68205) / C52258 - (C69514 * C88836) / q + C89265 - C89248 / q;
    const double C34216 = C89126 - (C69356 * C88836) / q + C89250 - C89254 / q;
    const double C34392 = -(C58431 * de + C69183 * C88835 + C89254) / q;
    const double C34512 = -(C69514 * C88834 + C89254) / q;
    const double C32704 = -(C32736 * C88834 + C67671 * p) / q;
    const double C69257 =
        C89391 - (C69198 * C88836) / q + C89339 - (C69199 * p) / q;
    const double C70960 =
        C89391 - (C75244 * de + C67270 * C88835) / q - (C67098 * p) / q;
    const double C89245 = C69853 * p;
    const double C89246 = C69912 * p;
    const double C34064 = (2 * C34033) / q - (C34032 * C88836) / q +
                          C69882 / q - (C69941 * p) / q;
    const double C70000 = -(C74983 * de + C70029 * C88835 + C89398) / q;
    const double C70246 =
        (3 * C69356) / C52258 - (C70217 * C88836) / q + C89401 - C89398 / q;
    const double C76948 = C89904 - (C73225 * de + C76858 * C88836) / q +
                          C89890 - (C84087 * p) / q;
    const double C78314 = C89904 - (C77123 * C88835) / q - (C85152 * p) / q;
    const double C47119 = -(C76857 * C88835 + C89627) / q;
    const double C47760 =
        (3 * C77153) / C52258 - (C77138 * C88834) / q - C89627 / q;
    const double C77557 = C89708 - (C77587 * C88835) / q - (C84571 * p) / q;
    const double C47120 = -(C76873 * C88835 + C89628) / q;
    const double C47128 = -(C76889 * C88835 + C89629) / q;
    const double C90061 = C89669 / q;
    const double C48264 = -(C79094 * C88834 + C89746) / q;
    const double C50552 = C89876 - (C77602 * C88835) / q - C89746 / q;
    const double C90059 = C89665 / q;
    const double C47361 = C89666 - (C77153 * C88834) / q - C89628 / q;
    const double C90060 = C89667 / q;
    const double C49416 = -(C81195 * C88834 + C89828) / q;
    const double C51054 =
        C89876 - (C59369 * de + C78082 * C88836) / q + C89879 - C89828 / q;
    const double C89873 = C76842 / C52258;
    const double C50462 =
        C89865 - (C58901 * de + C77602 * C88836) / q - C89872 / q;
    const double C51144 = -(C78082 * C88835 + C89872) / q;
    const double C51817 = -(C80217 * C88834 + C89872) / q;
    const double C48272 = C89666 - (C77586 * C88835) / q - C89747 / q;
    const double C48513 = -(C79267 * C88834 + C89747) / q;
    const double C50537 = C89875 - (C77602 * C88834) / q - C89629 / q;
    const double C48512 = -(C79549 * C88834 + C89762) / q;
    const double C48920 =
        (3 * C77586) / C52258 - (C79251 * C88835) / q - C89762 / q;
    const double C49432 = -(C81195 * C88835 + C89830) / q;
    const double C51742 =
        C89875 - (C59601 * de + C80217 * C88836) / q + C89885 - C89830 / q;
    const double C79124 =
        C89915 - (C75244 * de + C79266 * C88836) / q - C89956 / q;
    const double C83410 = -(C81194 * C88835 + C89956) / q;
    const double C49328 =
        C89698 - (C57204 * de + C78066 * C88836) / q + C89809 - C89822 / q;
    const double C49905 = -(C81196 * C88834 + C89822) / q;
    const double C89820 = C49336 / C52258;
    const double C49424 = -(C78066 * C88835 + C89829) / q;
    const double C49650 = -(C80201 * C88834 + C89829) / q;
    const double C50807 = C77602 / C52258 -
                          (C59134 * de + C78789 * C88836) / q + C89877 -
                          C89829 / q;
    const double C49575 =
        C89790 - (C57469 * de + C80201 * C88836) / q + C89831 - C89834 / q;
    const double C49921 = -(C81196 * C88835 + C89834) / q;
    const double C89859 = C49825 / C52258;
    const double C49857 = (3 * C49336) / C52258 -
                          (C57760 * de + C49825 * C88836) / q + C81196 / q -
                          (C49824 * p) / q;
    const double C49904 = -(C81878 * C88834 + C89844) / q;
    const double C50136 = (3 * C78066) / C52258 -
                          (C58431 * de + C81179 * C88836) / q + C89856 -
                          C89844 / q;
    const double C49920 = -(C81878 * C88835 + C89845) / q;
    const double C50264 = (3 * C80201) / C52258 -
                          (C58667 * de + C81510 * C88836) / q + C89862 -
                          C89845 / q;
    const double C50008 =
        C89723 - (C58195 * de + C81352 * C88836) / q + C89847 - C89851 / q;
    const double C50184 = -(C81179 * C88835 + C89851) / q;
    const double C50304 = -(C81510 * C88834 + C89851) / q;
    const double C48496 = -(C48528 * C88834 + C79667 * p) / q;
    const double C81253 = C89988 - (C75301 * de + C81194 * C88836) / q +
                          C89936 - (C81195 * p) / q;
    const double C82956 = C89988 - (C79266 * C88835) / q - (C79094 * p) / q;
    const double C89842 = C81849 * p;
    const double C89843 = C81908 * p;
    const double C49856 = (2 * C49825) / q -
                          (C57744 * de + C49824 * C88836) / q + C81878 / q -
                          (C81937 * p) / q;
    const double C81996 = -(C82025 * C88835 + C89995) / q;
    const double C82242 = (3 * C81352) / C52258 -
                          (C75216 * de + C82213 * C88836) / q + C89998 -
                          C89995 / q;
    const double C88837 = C88412 / q;
    const double C53055 =
        C88507 - (C53295 * C88835) / q + C88715 - (C60338 * p) / q;
    const double C88838 = C88413 / q;
    const double C88839 = C88414 / q;
    const double C88854 = C88448 / q;
    const double C88853 = C88447 / q;
    const double C16648 = -(C54995 * de + C54792 * C88834 + C88547) / q;
    const double C18818 =
        C52773 / C52258 - (C53311 * C88835) / q + C88668 - C88547 / q;
    const double C88864 = C88465 / q;
    const double C88672 = C52411 / C52258;
    const double C88872 = C88484 / q;
    const double C53144 =
        C88522 - (C54464 * C88835) / q + C88720 - (C60397 * p) / q;
    const double C88873 = C88485 / q;
    const double C16000 =
        C88497 - (C53783 * de + C53577 * C88834) / q - (C53788 * p) / q;
    const double C16001 =
        C88498 - (C53800 * de + C53593 * C88834) / q - (C53805 * p) / q;
    const double C88886 = C88515 / q;
    const double C88890 = C88521 / q;
    const double C19410 = C88682 - (C53804 * C88835) / q - C88684 / q;
    const double C20203 = -(C59571 * de + C55763 * C88834 + C88684) / q;
    const double C16528 = C88466 - (C53294 * C88835) / q + C88529 - C88536 / q;
    const double C16897 = -(C55481 * de + C54793 * C88834 + C88536) / q;
    const double C88534 = C16536 / C52258;
    const double C88598 = C16785 / C52258;
    const double C16801 = (3 * C16536) / C52258 - (C16785 * C88835) / q +
                          C54793 / q - (C16784 * p) / q;
    const double C16896 = -(C55465 * de + C55260 * C88834 + C88564) / q;
    const double C17256 =
        (3 * C53294) / C52258 - (C54776 * C88835) / q + C88596 - C88564 / q;
    const double C17040 =
        C88574 - (C55747 * C88835) / q + C88567 - (C55748 * p) / q;
    const double C17041 =
        C88575 - (C55764 * C88835) / q + C88568 - (C55765 * p) / q;
    const double C17152 = -(C55954 * de + C55747 * C88834 + C88588) / q;
    const double C18392 =
        C53787 / C52258 - (C56941 * C88835) / q + C88650 - C88588 / q;
    const double C17153 = -(C55970 * de + C55764 * C88834 + C88589) / q;
    const double C19163 =
        C53804 / C52258 - (C54565 * C88835) / q + C88680 - C88589 / q;
    const double C17384 = C88525 - (C55974 * C88835) / q + C88605 - C88606 / q;
    const double C17568 = -(C56728 * de + C55765 * C88834 + C88606) / q;
    const double C88558 = C17512 * p;
    const double C55716 =
        C88652 - (C55958 * C88835) / q + C88773 - (C61955 * p) / q;
    const double C17680 = C88612 - (C53787 * C88835) / q - C88619 / q;
    const double C18036 = -(C57439 * de + C55746 * C88834 + C88619) / q;
    const double C17792 =
        C88629 - (C57144 * de + C53787 * C88834) / q - (C53577 * p) / q;
    const double C17931 =
        C88629 - (C55746 * C88835) / q + C88634 - (C55747 * p) / q;
    const double C88617 = C17688 / C52258;
    const double C18576 =
        C88663 - (C58399 * de + C57883 * C88834) / q - (C58403 * p) / q;
    const double C18648 =
        C88663 - (C57674 * C88835) / q + C88665 - (C58539 * p) / q;
    const double C55809 =
        C88666 - (C58539 * C88835) / q + C88775 - (C62069 * p) / q;
    const double C88660 = C18177 / C52258;
    const double C18209 =
        (3 * C17688) / C52258 - (C18177 * C88836) / q - (C18176 * p) / q;
    const double C18520 = C88659 - (C57883 * C88835) / q - C88661 / q;
    const double C18704 = -(C58636 * de + C57674 * C88834 + C88661) / q;
    const double C19515 =
        C88686 - (C59337 * de + C53804 * C88834) / q - (C53593 * p) / q;
    const double C20098 =
        C88686 - (C55763 * C88835) / q + C88688 - (C55764 * p) / q;
    const double C88683 = C57013 / C52258;
    const double C17720 = C57013 / q - (C17688 * C88836) / q - (C18177 * p) / q;
    const double C88415 = C52474 * p;
    const double C88418 = C52517 * p;
    const double C88449 = C53115 * p;
    const double C88482 = C53547 * p;
    const double C88486 = C53609 * p;
    const double C88487 = C53638 * p;
    const double C88508 = C54017 * p;
    const double C88671 = C54822 / C52258;
    const double C16552 =
        C54822 / q - (C16536 * C88835) / q + C54792 / q - (C16785 * p) / q;
    const double C88556 = C55230 * p;
    const double C16800 = (2 * C16785) / q - (C16784 * C88835) / q +
                          C55260 / q - (C55290 * p) / q;
    const double C88557 = C55319 * p;
    const double C88576 = C55780 * p;
    const double C88599 = C56186 * p;
    const double C88643 = C57627 * p;
    const double C88644 = C57689 * p;
    const double C18208 =
        (2 * C18177) / q - (C18176 * C88836) / q - (C57718 * p) / q;
    const double C88653 = C58093 * p;
    const double C32440 = -(C66982 * C88834 + C89147) / q;
    const double C34610 = C65024 / C52258 -
                          (C58870 * de + C65546 * C88835) / q + C89268 -
                          C89147 / q;
    const double C89272 = C64668 / C52258;
    const double C31792 = C89097 - (C65802 * C88834) / q - (C66010 * p) / q;
    const double C31793 = C89098 - (C65818 * C88834) / q - (C66026 * p) / q;
    const double C35202 =
        C89282 - (C59337 * de + C66025 * C88835) / q - C89284 / q;
    const double C35995 = -(C67925 * C88834 + C89284) / q;
    const double C32320 =
        C89066 - (C54980 * de + C65530 * C88835) / q + C89129 - C89136 / q;
    const double C32689 = -(C66983 * C88834 + C89136) / q;
    const double C89134 = C32328 / C52258;
    const double C89198 = C32577 / C52258;
    const double C32593 = (3 * C32328) / C52258 -
                          (C55242 * de + C32577 * C88835) / q + C66983 / q -
                          (C32576 * p) / q;
    const double C32688 = -(C67436 * C88834 + C89164) / q;
    const double C33048 = (3 * C65530) / C52258 -
                          (C56257 * de + C66966 * C88835) / q + C89196 -
                          C89164 / q;
    const double C32833 = C89175 - (C55970 * de + C67926 * C88835) / q +
                          C89168 - (C67927 * p) / q;
    const double C32945 = -(C67926 * C88834 + C89189) / q;
    const double C34955 = C66025 / C52258 -
                          (C59104 * de + C66763 * C88835) / q + C89280 -
                          C89189 / q;
    const double C33176 =
        C89125 - (C56492 * de + C68132 * C88835) / q + C89205 - C89206 / q;
    const double C33360 = -(C67927 * C88834 + C89206) / q;
    const double C89158 = C33304 * p;
    const double C33584 = C89229 - (C66009 * C88834) / q - (C65802 * p) / q;
    const double C33723 = C89229 - (C57439 * de + C67908 * C88835) / q +
                          C89234 - (C67909 * p) / q;
    const double C34368 = C89263 - (C69985 * C88834) / q - (C70489 * p) / q;
    const double C34440 = C89263 - (C58636 * de + C69780 * C88835) / q +
                          C89265 - (C70620 * p) / q;
    const double C35307 = C89286 - (C66025 * C88834) / q - (C65818 * p) / q;
    const double C35890 = C89286 - (C59571 * de + C67925 * C88835) / q +
                          C89288 - (C67926 * p) / q;
    const double C89283 = C69140 / C52258;
    const double C89271 = C67012 / C52258;
    const double C32344 = C67012 / q - (C54758 * de + C32328 * C88835) / q +
                          C66982 / q - (C32577 * p) / q;
    const double C89156 = C67407 * p;
    const double C32592 = (2 * C32577) / q -
                          (C55226 * de + C32576 * C88835) / q + C67436 / q -
                          (C67466 * p) / q;
    const double C89157 = C67495 * p;
    const double C89199 = C68337 * p;
    const double C48232 = -(C78978 * C88834 + C89744) / q;
    const double C50402 =
        C77020 / C52258 - (C77542 * C88835) / q + C89865 - C89744 / q;
    const double C89869 = C76664 / C52258;
    const double C47584 = C89694 - (C77798 * C88834) / q - (C78006 * p) / q;
    const double C47585 = C89695 - (C77814 * C88834) / q - (C78022 * p) / q;
    const double C50994 = C89879 - (C78021 * C88835) / q - C89881 / q;
    const double C51787 = -(C79921 * C88834 + C89881) / q;
    const double C48112 = C89663 - (C77526 * C88835) / q + C89726 - C89733 / q;
    const double C48481 = -(C78979 * C88834 + C89733) / q;
    const double C89731 = C48120 / C52258;
    const double C89795 = C48369 / C52258;
    const double C48385 = (3 * C48120) / C52258 - (C48369 * C88835) / q +
                          C78979 / q - (C48368 * p) / q;
    const double C48480 = -(C79432 * C88834 + C89761) / q;
    const double C48840 =
        (3 * C77526) / C52258 - (C78962 * C88835) / q + C89793 - C89761 / q;
    const double C48625 =
        C89772 - (C79922 * C88835) / q + C89765 - (C79923 * p) / q;
    const double C48737 = -(C79922 * C88834 + C89786) / q;
    const double C50747 =
        C78021 / C52258 - (C78759 * C88835) / q + C89877 - C89786 / q;
    const double C48968 = C89722 - (C80128 * C88835) / q + C89802 - C89803 / q;
    const double C49152 = -(C79923 * C88834 + C89803) / q;
    const double C89755 = C49096 * p;
    const double C49376 = C89826 - (C78005 * C88834) / q - (C77798 * p) / q;
    const double C49515 =
        C89826 - (C79904 * C88835) / q + C89831 - (C79905 * p) / q;
    const double C50160 = C89860 - (C81981 * C88834) / q - (C82485 * p) / q;
    const double C50232 =
        C89860 - (C81776 * C88835) / q + C89862 - (C82616 * p) / q;
    const double C51099 = C89883 - (C78021 * C88834) / q - (C77814 * p) / q;
    const double C51682 =
        C89883 - (C79921 * C88835) / q + C89885 - (C79922 * p) / q;
    const double C89880 = C81136 / C52258;
    const double C89868 = C79008 / C52258;
    const double C48136 =
        C79008 / q - (C48120 * C88835) / q + C78978 / q - (C48369 * p) / q;
    const double C89753 = C79403 * p;
    const double C48384 = (2 * C48369) / q - (C48368 * C88835) / q +
                          C79432 / q - (C79462 * p) / q;
    const double C89754 = C79491 * p;
    const double C89796 = C80333 * p;
    const double C88504 = C15298 / C52258;
    const double C88440 = C15306 / C52258;
    const double C15281 = (3 * C15306) / C52258 -
                          (C52206 * de + C15298 * C88834) / q + C52210 / q -
                          (C15297 * p) / q;
    const double C15568 = C88435 - (C52957 * de + C52928 * C88834) / q +
                          C88436 - (C52963 * p) / q;
    const double C15569 = C88437 - (C52975 * de + C52945 * C88834) / q +
                          C88438 - (C52981 * p) / q;
    const double C15824 = C88475 - (C53449 * de + C53420 * C88834) / q +
                          C88476 - (C53455 * p) / q;
    const double C15825 = C88477 - (C53467 * de + C53437 * C88834) / q +
                          C88478 - (C53473 * p) / q;
    const double C88405 = C16072 * p;
    const double C88410 = C16200 * p;
    const double C16328 = C88518 - (C54400 * de + C54388 * C88834) / q +
                          C88519 - (C54406 * p) / q;
    const double C88528 = C16464 * p;
    const double C88527 = C16472 / C52258;
    const double C52996 = C88595 - (C60301 * de + C56099 * C88834) / q +
                          C88719 - (C60306 * p) / q;
    const double C88594 = C16721 / C52258;
    const double C16737 =
        (3 * C16472) / C52258 - (C16721 * C88835) / q - (C16720 * p) / q;
    const double C88572 = C16976 * p;
    const double C53025 = C88604 - (C60318 * de + C56337 * C88834) / q +
                          C88720 - (C60323 * p) / q;
    const double C88533 = C16977 * p;
    const double C88531 = C17224 * p;
    const double C88532 = C17352 * p;
    const double C88555 = C17480 * p;
    const double C88611 = C17616 * p;
    const double C88610 = C17624 / C52258;
    const double C53488 = C88649 - (C60721 * de + C58006 * C88834) / q +
                          C88740 - (C60725 * p) / q;
    const double C88615 = C17871 * p;
    const double C53517 = C88658 - (C60737 * de + C58244 * C88834) / q +
                          C88741 - (C60742 * p) / q;
    const double C88657 = C18113 / C52258;
    const double C18145 =
        (3 * C17624) / C52258 - (C18113 * C88836) / q - (C18112 * p) / q;
    const double C88614 = C18360 * p;
    const double C88616 = C18488 * p;
    const double C88635 = C18616 * p;
    const double C88434 = C18758 / q;
    const double C88667 = C54703 / C52258;
    const double C16488 = C54703 / q - (C16472 * C88835) / q - (C16721 * p) / q;
    const double C88670 = C19103 * p;
    const double C88517 = C19103 / q;
    const double C88570 = C20038 / q;
    const double C88474 = C19350 / q;
    const double C88681 = C56896 / C52258;
    const double C17656 = C56896 / q - (C17624 * C88836) / q - (C18113 * p) / q;
    const double C15280 = (2 * C15298) / q -
                          (C52189 * de + C15297 * C88834) / q + C52193 / q -
                          (C52194 * p) / q;
    const double C88669 = C52226 / C52258;
    const double C15289 = C52226 / q - (C52222 * de + C15306 * C88834) / q +
                          C52227 / q - (C15298 * p) / q;
    const double C88404 = C52293 * p;
    const double C88409 = C52336 * p;
    const double C88433 = C52929 * p;
    const double C88473 = C53421 * p;
    const double C88505 = C53959 * p;
    const double C88551 = C55106 * p;
    const double C16736 =
        (2 * C16721) / q - (C16720 * C88835) / q - (C55171 * p) / q;
    const double C88554 = C55200 * p;
    const double C88566 = C55592 * p;
    const double C88569 = C55657 * p;
    const double C88571 = C55686 * p;
    const double C88597 = C56128 * p;
    const double C88639 = C57503 * p;
    const double C88642 = C57568 * p;
    const double C18144 =
        (2 * C18113) / q - (C18112 * C88836) / q - (C57597 * p) / q;
    const double C88651 = C58035 * p;
    const double C89104 = C31090 / C52258;
    const double C89040 = C31098 / C52258;
    const double C31073 = (3 * C31098) / C52258 - (C31090 * C88834) / q +
                          C64475 / q - (C31089 * p) / q;
    const double C31361 =
        C89037 - (C65188 * C88834) / q + C89038 - (C65222 * p) / q;
    const double C31617 =
        C89077 - (C65666 * C88834) / q + C89078 - (C65700 * p) / q;
    const double C89007 = C31864 * p;
    const double C89010 = C31992 * p;
    const double C32120 =
        C89118 - (C66590 * C88834) / q + C89119 - (C66607 * p) / q;
    const double C89034 = C34550 / q;
    const double C89267 = C66895 / C52258;
    const double C89270 = C34895 * p;
    const double C89117 = C34895 / q;
    const double C89170 = C35830 / q;
    const double C89074 = C35142 / q;
    const double C89281 = C69025 / C52258;
    const double C31072 = (2 * C31090) / q - (C31089 * C88834) / q +
                          C64459 / q - (C64460 * p) / q;
    const double C89269 = C64490 / C52258;
    const double C31081 =
        C64490 / q - (C31098 * C88834) / q + C64491 / q - (C31090 * p) / q;
    const double C89006 = C64553 * p;
    const double C89009 = C64596 * p;
    const double C89105 = C66174 * p;
    const double C89701 = C46882 / C52258;
    const double C89637 = C46890 / C52258;
    const double C46865 = (3 * C46890) / C52258 - (C46882 * C88834) / q +
                          C76471 / q - (C46881 * p) / q;
    const double C47153 =
        C89634 - (C77184 * C88834) / q + C89635 - (C77218 * p) / q;
    const double C47409 =
        C89674 - (C77662 * C88834) / q + C89675 - (C77696 * p) / q;
    const double C89604 = C47656 * p;
    const double C89607 = C47784 * p;
    const double C47912 =
        C89715 - (C78586 * C88834) / q + C89716 - (C78603 * p) / q;
    const double C89631 = C50342 / q;
    const double C89864 = C78891 / C52258;
    const double C89867 = C50687 * p;
    const double C89714 = C50687 / q;
    const double C89767 = C51622 / q;
    const double C89671 = C50934 / q;
    const double C89878 = C81021 / C52258;
    const double C46864 = (2 * C46882) / q - (C46881 * C88834) / q +
                          C76455 / q - (C76456 * p) / q;
    const double C89866 = C76486 / C52258;
    const double C46873 =
        C76486 / q - (C46890 * C88834) / q + C76487 / q - (C46882 * p) / q;
    const double C89603 = C76549 * p;
    const double C89606 = C76592 * p;
    const double C89702 = C78170 * p;
    const double C89566 = C89383 / q;
    const double C89243 = C69734 * p;
    const double C89562 = C89378 / q;
    const double C89558 = C89366 / q;
    const double C66041 = -(C73020 * de + C66071 * C88835 + C89347) / q;
    const double C66289 =
        C65142 / C52258 - (C66260 * C88836) / q + C89353 - C89347 / q;
    const double C89242 = C69676 * p;
    const double C70504 = -(C75159 * de + C65922 * C88835 + C89344) / q;
    const double C89545 = C89328 / q;
    const double C89087 = C65863 * p;
    const double C89171 = C67850 * p;
    const double C89544 = C89327 / q;
    const double C89169 = C67821 * p;
    const double C89541 = C89323 / q;
    const double C89082 = C65773 * p;
    const double C89154 = C67378 * p;
    const double C64909 = C89292 - (C65127 * C88836) / q - C89306 / q;
    const double C66547 = -(C73225 * de + C64862 * C88835 + C89306) / q;
    const double C89018 = C64774 * p;
    const double C89515 = C89192 / q;
    const double C89520 = C89190 / q;
    const double C32976 = -(C68029 * C88834 + C89190) / q;
    const double C34312 =
        C89259 - (C58399 * de + C69985 * C88835) / q - C89261 / q;
    const double C34496 = -(C69780 * C88834 + C89261) / q;
    const double C89253 = C70188 * p;
    const double C32944 = -(C67909 * C88834 + C89188) / q;
    const double C34184 = C66009 / C52258 -
                          (C58164 * de + C69068 * C88835) / q + C89250 -
                          C89188 / q;
    const double C89516 = C89201 / q;
    const double C33376 = -(C67569 * C88834 + C89201) / q;
    const double C89244 = C69795 * p;
    const double C89511 = C89183 / q;
    const double C67971 = C89266 - (C74090 * de + C70620 * C88835) / q +
                          C89375 - (C74095 * p) / q;
    const double C89260 = C33969 / C52258;
    const double C34000 =
        (2 * C33969) / q - (C33968 * C88836) / q - (C69824 * p) / q;
    const double C89510 = C89182 / q;
    const double C89186 = C68088 * p;
    const double C68059 =
        C89209 - (C68206 * C88836) / q + C89374 - (C74154 * p) / q;
    const double C89499 = C89161 / q;
    const double C89498 = C89160 / q;
    const double C89162 = C67613 * p;
    const double C89176 = C67942 * p;
    const double C89494 = C89143 / q;
    const double C32832 = C89174 - (C55954 * de + C67909 * C88835) / q +
                          C89167 - (C67910 * p) / q;
    const double C89217 = C33480 / C52258;
    const double C33512 = C69140 / q - (C33480 * C88836) / q - (C33969 * p) / q;
    const double C34001 =
        (3 * C33480) / C52258 - (C33969 * C88836) / q - (C33968 * p) / q;
    const double C89493 = C89142 / q;
    const double C32977 = -(C67099 * C88834 + C89142) / q;
    const double C67879 = C89252 - (C73974 * de + C68117 * C88835) / q +
                          C89373 - (C73979 * p) / q;
    const double C33472 =
        C89212 - (C57144 * de + C66009 * C88835) / q - C89219 / q;
    const double C33828 = -(C67908 * C88834 + C89219) / q;
    const double C89489 = C89102 / q;
    const double C31840 = -(C53848 * de + C65921 * C88835 + C89102) / q;
    const double C89235 = C34408 * p;
    const double C89251 = C70131 * p;
    const double C89480 = C89100 / q;
    const double C89481 = C89109 / q;
    const double C32104 = -(C54355 * de + C64878 * C88835 + C89109) / q;
    const double C89239 = C69614 * p;
    const double C89477 = C89093 / q;
    const double C65744 =
        C89258 - (C70333 * C88834) / q + C89341 - (C72774 * p) / q;
    const double C89257 = C33905 / C52258;
    const double C33936 =
        (2 * C33905) / q - (C33904 * C88836) / q - (C69705 * p) / q;
    const double C89216 = C34280 * p;
    const double C89476 = C89092 / q;
    const double C89095 = C65980 * p;
    const double C89487 = C89121 / q;
    const double C89155 = C33272 * p;
    const double C89197 = C68280 * p;
    const double C89483 = C89115 / q;
    const double C89108 = C66231 * p;
    const double C89461 = C89065 / q;
    const double C65951 = C89124 - (C66101 * C88836) / q + C89340 - C89344 / q;
    const double C89456 = C89057 / q;
    const double C31841 = -(C53865 * de + C64894 * C88835 + C89057) / q;
    const double C65715 =
        C89249 - (C70102 * C88834) / q + C89340 - (C72758 * p) / q;
    const double C89215 = C33663 * p;
    const double C89214 = C34152 * p;
    const double C89455 = C89056 / q;
    const double C89469 = C89084 / q;
    const double C89086 = C65834 * p;
    const double C89172 = C32768 * p;
    const double C89166 = C67759 * p;
    const double C65383 = C89122 - (C72432 * de + C66664 * C88835) / q +
                          C89320 - (C72437 * p) / q;
    const double C89470 = C89085 / q;
    const double C65266 =
        C89204 - (C68482 * C88834) / q + C89320 - (C72360 * p) / q;
    const double C89133 = C32769 * p;
    const double C89132 = C33144 * p;
    const double C89151 = C67287 * p;
    const double C89451 = C89048 / q;
    const double C65237 =
        C89195 - (C68251 * C88834) / q + C89319 - (C72344 * p) / q;
    const double C89194 = C32513 / C52258;
    const double C32528 = (2 * C32513) / q -
                          (C55101 * de + C32512 * C88835) / q -
                          (C67349 * p) / q;
    const double C89131 = C33016 * p;
    const double C89450 = C89047 / q;
    const double C89049 = C65354 * p;
    const double C89442 = C89023 / q;
    const double C31616 =
        C89075 - (C65650 * C88834) / q + C89076 - (C65683 * p) / q;
    const double C89210 = C33416 / C52258;
    const double C33448 = C69025 / q - (C33416 * C88836) / q - (C33905 * p) / q;
    const double C33937 =
        (3 * C33416) / C52258 - (C33905 * C88836) / q - (C33904 * p) / q;
    const double C65892 =
        C89116 - (C66071 * C88836) / q + C89336 - (C72893 * p) / q;
    const double C89441 = C89022 / q;
    const double C89211 = C33408 * p;
    const double C89440 = C89021 / q;
    const double C89073 = C65651 * p;
    const double C89436 = C89014 / q;
    const double C31360 =
        C89035 - (C65172 * C88834) / q + C89036 - (C65205 * p) / q;
    const double C89127 = C32264 / C52258;
    const double C32280 =
        C66895 / q - (C54638 * de + C32264 * C88835) / q - (C32513 * p) / q;
    const double C32529 = (3 * C32264) / C52258 -
                          (C55118 * de + C32513 * C88835) / q -
                          (C32512 * p) / q;
    const double C65295 = C89107 - (C72371 * de + C65531 * C88835) / q +
                          C89315 - (C72376 * p) / q;
    const double C89435 = C89013 / q;
    const double C89128 = C32256 * p;
    const double C89434 = C89012 / q;
    const double C89015 = C64731 * p;
    const double C89033 = C65173 * p;
    const double C90163 = C89980 / q;
    const double C89840 = C81730 * p;
    const double C90159 = C89975 / q;
    const double C90155 = C89963 / q;
    const double C78037 = -(C78067 * C88835 + C89944) / q;
    const double C78285 = C77138 / C52258 -
                          (C73310 * de + C78256 * C88836) / q + C89950 -
                          C89944 / q;
    const double C89839 = C81672 * p;
    const double C82500 = -(C77918 * C88835 + C89941) / q;
    const double C90142 = C89925 / q;
    const double C89684 = C77859 * p;
    const double C89768 = C79846 * p;
    const double C90141 = C89924 / q;
    const double C89766 = C79817 * p;
    const double C90138 = C89920 / q;
    const double C89679 = C77769 * p;
    const double C89751 = C79374 * p;
    const double C76905 =
        C89889 - (C73167 * de + C77123 * C88836) / q - C89903 / q;
    const double C78543 = -(C76858 * C88835 + C89903) / q;
    const double C89615 = C76770 * p;
    const double C90112 = C89789 / q;
    const double C90117 = C89787 / q;
    const double C48768 = -(C80025 * C88834 + C89787) / q;
    const double C50104 = C89856 - (C81981 * C88835) / q - C89858 / q;
    const double C50288 = -(C81776 * C88834 + C89858) / q;
    const double C89850 = C82184 * p;
    const double C48736 = -(C79905 * C88834 + C89785) / q;
    const double C49976 =
        C78005 / C52258 - (C81064 * C88835) / q + C89847 - C89785 / q;
    const double C90113 = C89798 / q;
    const double C49168 = -(C79565 * C88834 + C89798) / q;
    const double C89841 = C81791 * p;
    const double C90108 = C89780 / q;
    const double C79967 =
        C89863 - (C82616 * C88835) / q + C89972 - (C86067 * p) / q;
    const double C89857 = C49761 / C52258;
    const double C49792 = (2 * C49761) / q -
                          (C57623 * de + C49760 * C88836) / q -
                          (C81820 * p) / q;
    const double C90107 = C89779 / q;
    const double C89783 = C80084 * p;
    const double C80055 = C89806 - (C86121 * de + C80202 * C88836) / q +
                          C89971 - (C86127 * p) / q;
    const double C90096 = C89758 / q;
    const double C90095 = C89757 / q;
    const double C89759 = C79609 * p;
    const double C89773 = C79938 * p;
    const double C90091 = C89740 / q;
    const double C48624 =
        C89771 - (C79905 * C88835) / q + C89764 - (C79906 * p) / q;
    const double C89814 = C49272 / C52258;
    const double C49304 =
        C81136 / q - (C56923 * de + C49272 * C88836) / q - (C49761 * p) / q;
    const double C49793 = (3 * C49272) / C52258 -
                          (C57639 * de + C49761 * C88836) / q -
                          (C49760 * p) / q;
    const double C90090 = C89739 / q;
    const double C48769 = -(C79095 * C88834 + C89739) / q;
    const double C79875 =
        C89849 - (C80113 * C88835) / q + C89970 - (C85953 * p) / q;
    const double C49264 = C89809 - (C78005 * C88835) / q - C89816 / q;
    const double C49620 = -(C79904 * C88834 + C89816) / q;
    const double C90086 = C89699 / q;
    const double C47632 = -(C77917 * C88835 + C89699) / q;
    const double C89832 = C50200 * p;
    const double C89848 = C82127 * p;
    const double C90077 = C89697 / q;
    const double C90078 = C89706 / q;
    const double C47896 = -(C76874 * C88835 + C89706) / q;
    const double C89836 = C81610 * p;
    const double C90074 = C89690 / q;
    const double C77740 =
        C89855 - (C82329 * C88834) / q + C89938 - (C84760 * p) / q;
    const double C89854 = C49697 / C52258;
    const double C49728 = (2 * C49697) / q -
                          (C57498 * de + C49696 * C88836) / q -
                          (C81701 * p) / q;
    const double C89813 = C50072 * p;
    const double C90073 = C89689 / q;
    const double C89692 = C77976 * p;
    const double C90084 = C89718 / q;
    const double C89752 = C49064 * p;
    const double C89794 = C80276 * p;
    const double C90080 = C89712 / q;
    const double C89705 = C78227 * p;
    const double C90058 = C89662 / q;
    const double C77947 =
        C89721 - (C75102 * de + C78097 * C88836) / q + C89937 - C89941 / q;
    const double C90053 = C89654 / q;
    const double C47633 = -(C76890 * C88835 + C89654) / q;
    const double C77711 =
        C89846 - (C82098 * C88834) / q + C89937 - (C84744 * p) / q;
    const double C89812 = C49455 * p;
    const double C89811 = C49944 * p;
    const double C90052 = C89653 / q;
    const double C90066 = C89681 / q;
    const double C89683 = C77830 * p;
    const double C89769 = C48560 * p;
    const double C89763 = C79755 * p;
    const double C77379 =
        C89719 - (C78660 * C88835) / q + C89917 - (C84424 * p) / q;
    const double C90067 = C89682 / q;
    const double C77262 =
        C89801 - (C80478 * C88834) / q + C89917 - (C84350 * p) / q;
    const double C89730 = C48561 * p;
    const double C89729 = C48936 * p;
    const double C89748 = C79283 * p;
    const double C90048 = C89645 / q;
    const double C77233 =
        C89792 - (C80247 * C88834) / q + C89916 - (C84334 * p) / q;
    const double C89791 = C48305 / C52258;
    const double C48320 =
        (2 * C48305) / q - (C48304 * C88835) / q - (C79345 * p) / q;
    const double C89728 = C48808 * p;
    const double C90047 = C89644 / q;
    const double C89646 = C77350 * p;
    const double C90039 = C89620 / q;
    const double C47408 =
        C89672 - (C77646 * C88834) / q + C89673 - (C77679 * p) / q;
    const double C89807 = C49208 / C52258;
    const double C49240 =
        C81021 / q - (C56803 * de + C49208 * C88836) / q - (C49697 * p) / q;
    const double C49729 = (3 * C49208) / C52258 -
                          (C57515 * de + C49697 * C88836) / q -
                          (C49696 * p) / q;
    const double C77888 = C89713 - (C73020 * de + C78067 * C88836) / q +
                          C89933 - (C84876 * p) / q;
    const double C90038 = C89619 / q;
    const double C89808 = C49200 * p;
    const double C90037 = C89618 / q;
    const double C89670 = C77647 * p;
    const double C90033 = C89611 / q;
    const double C47152 =
        C89632 - (C77168 * C88834) / q + C89633 - (C77201 * p) / q;
    const double C89724 = C48056 / C52258;
    const double C48072 = C78891 / q - (C48056 * C88835) / q - (C48305 * p) / q;
    const double C48321 =
        (3 * C48056) / C52258 - (C48305 * C88835) / q - (C48304 * p) / q;
    const double C77291 =
        C89704 - (C77527 * C88835) / q + C89912 - (C84365 * p) / q;
    const double C90032 = C89610 / q;
    const double C89725 = C48048 * p;
    const double C90031 = C89609 / q;
    const double C89612 = C76727 * p;
    const double C89630 = C77169 * p;
    const double C88427 = C52698 * p;
    const double C15433 = C88399 - (C52607 * C88836) / q - C88843;
    const double C16304 =
        (3 * C52640) / C52258 - (C54355 * de + C52624 * C88834) / q - C88843;
    const double C88489 = C53668 * p;
    const double C15434 = C88400 - (C52623 * C88836) / q - C88844;
    const double C16033 = C88501 - (C53865 * de + C52640 * C88834) / q - C88844;
    const double C15442 = C88401 - (C52639 * C88836) / q - C88845;
    const double C19545 = C88687 - (C59369 * de + C53869 * C88834) / q - C88845;
    const double C15501 = (2 * C15536) / q -
                          (C52785 * de + C15535 * C88834) / q -
                          (C52789 * p) / q;
    const double C15502 = (3 * C15544) / C52258 -
                          (C52801 * de + C15536 * C88834) / q -
                          (C15535 * p) / q;
    const double C15510 =
        C52820 / q - (C52816 * de + C15544 * C88834) / q - (C15536 * p) / q;
    const double C15793 = C88471 - (C52912 * C88835) / q - C88867;
    const double C16672 = C88548 - (C55040 * de + C53358 * C88834) / q - C88867;
    const double C15696 = C88436 - (C53204 * C88836) / q - C88858;
    const double C16440 = C52640 / C52258 - (C53220 * C88835) / q - C88858;
    const double C17456 =
        C54911 / C52258 - (C56523 * de + C54895 * C88834) / q - C88858;
    const double C15697 = C88438 - (C52912 * C88836) / q - C88859;
    const double C19298 =
        C56067 / C52258 - (C59134 * de + C54597 * C88834) / q - C88859;
    const double C15776 = C88467 - (C53354 * de + C53204 * C88834) / q - C88865;
    const double C16184 = C88513 - (C52897 * C88835) / q - C88865;
    const double C15792 = C88462 - (C53204 * C88835) / q - C88866;
    const double C17328 = C88603 - (C56288 * de + C55073 * C88834) / q - C88866;
    const double C15953 = C88471 - (C52640 * C88836) / q + C88478 - C88880;
    const double C17824 = C88630 - (C57204 * de + C53852 * C88834) / q - C88880;
    const double C15952 = C88491 - (C53698 * C88836) / q + C88476 - C88879;
    const double C18592 = C88664 - (C58431 * de + C57058 * C88834) / q - C88879;
    const double C88490 = C19470 / q;
    const double C16032 = C88499 - (C53848 * de + C53698 * C88834) / q - C88883;
    const double C16264 = C88513 - (C52624 * C88836) / q + C88514 - C88883;
    const double C16392 =
        C52912 / C52258 - (C53220 * C88836) / q + C88519 - C88892;
    const double C18464 =
        C56051 / C52258 - (C58195 * de + C57237 * C88834) / q - C88892;
    const double C16136 = C88503 - (C52897 * C88836) / q - C88884;
    const double C16432 = C88526 - (C54593 * de + C53220 * C88834) / q - C88884;
    const double C88455 = C18878 / q;
    const double C16017 =
        C19560 / q - (C53833 * de + C16049 * C88834) / q - (C16312 * p) / q;
    const double C16592 = C88529 - (C53358 * C88836) / q - C88896;
    const double C19313 = C53869 / C52258 - (C54597 * C88835) / q - C88896;
    const double C16600 = C88530 - (C54910 * C88836) / q - C88897;
    const double C20248 = C88687 - (C56067 * C88835) / q - C88897;
    const double C16664 = -(C55025 * de + C16696 * C88834 + C16688 * p) / q;
    const double C16848 = C88552 - (C55379 * C88836) / q - C88901;
    const double C17592 =
        (3 * C54911) / C52258 - (C55395 * C88835) / q - C88901;
    const double C88584 = C55899 * p;
    const double C16849 = C88553 - (C55089 * C88836) / q - C88902;
    const double C17201 = C88593 - (C54911 * C88835) / q - C88902;
    const double C16913 = -(C55512 * de + C16945 * C88834 + C17336 * p) / q;
    const double C17320 = C16945 / C52258 -
                          (C56272 * de + C17336 * C88834) / q -
                          (C56276 * p) / q;
    const double C17105 = C88548 - (C54911 * C88836) / q + C88568 - C88914;
    const double C18081 = C88630 - (C56051 * C88835) / q - C88914;
    const double C17104 = C88581 - (C55869 * C88836) / q + C88567 - C88913;
    const double C18728 = C88664 - (C57399 * C88835) / q - C88913;
    const double C17416 =
        C53358 / C52258 - (C54895 * C88836) / q + C88605 - C88923;
    const double C18472 = C53852 / C52258 - (C57237 * C88835) / q - C88923;
    const double C88585 = C20158 / q;
    const double C17200 = C88591 - (C55869 * C88835) / q - C88918;
    const double C17544 = C88603 - (C55395 * C88836) / q + C88608 - C88918;
    const double C88674 = C54940 / C52258;
    const double C19530 = C59357 / C52258 -
                          (C59353 * de + C19560 * C88834) / q -
                          (C16049 * p) / q;
    const double C17288 = C88596 - (C55073 * C88836) / q - C88919;
    const double C17464 = C88526 - (C54895 * C88835) / q - C88919;
    const double C88624 = C17744 * p;
    const double C17808 = C17848 / C52258 -
                          (C57174 * de + C17840 * C88834) / q -
                          (C16048 * p) / q;
    const double C17816 = -(C57189 * de + C17848 * C88834 + C17840 * p) / q;
    const double C88677 = C19223 * p;
    const double C88523 = C19223 / q;
    const double C88627 = C17991 * p;
    const double C88628 = C18552 * p;
    const double C88638 = C18680 * p;
    const double C88626 = C18424 * p;
    const double C18305 = -(C57911 * de + C18337 * C88834 + C18600 * p) / q;
    const double C88424 = C52655 * p;
    const double C16296 = (3 * C16049) / C52258 -
                          (C54339 * de + C16312 * C88834) / q -
                          (C54343 * p) / q;
    const double C53174 = C88715 - (C53359 * C88836) / q - C88944;
    const double C54581 = C52624 / C52258 - (C54047 * C88835) / q - C88944;
    const double C53235 = C88719 - (C53390 * C88836) / q - C88947;
    const double C56511 = C88524 - (C53205 * C88835) / q - C88947;
    const double C53264 =
        C53204 / C52258 - (C53205 * C88836) / q + C88720 - C88948;
    const double C58183 = C53698 / C52258 - (C53884 * C88835) / q - C88948;
    const double C88494 = C53728 * p;
    const double C18584 = C18337 / C52258 -
                          (C58415 * de + C18600 * C88834) / q -
                          (C58419 * p) / q;
    const double C88881 = C88495 / q;
    const double C16016 =
        C17840 / q - (C53817 * de + C16048 * C88834) / q - (C53821 * p) / q;
    const double C88512 = C54076 * p;
    const double C55349 = C88763 - (C55531 * C88836) / q - C88961;
    const double C56747 =
        (3 * C54895) / C52258 - (C56216 * C88835) / q - C88961;
    const double C88903 = C88562 / q;
    const double C55839 = C88607 - (C56021 * C88836) / q + C88773 - C88965;
    const double C58655 = C57058 / C52258 - (C58123 * C88835) / q - C88965;
    const double C88916 = C88586 / q;
    const double C55990 = C88655 - (C56021 * C88835) / q - C88969;
    const double C56245 =
        C55073 / C52258 - (C56216 * C88836) / q + C88789 - C88969;
    const double C88685 = C57132 / C52258;
    const double C17784 =
        C57132 / q - (C17752 * C88836) / q + C57074 / q - (C18241 * p) / q;
    const double C18224 = -(C57744 * de + C18240 * C88834 + C88645) / q;
    const double C18568 =
        (3 * C17744) / C52258 - (C18552 * C88836) / q + C57058 / q - C88645 / q;
    const double C18256 = -(C18240 * C88835 + C88646) / q;
    const double C18696 =
        (3 * C17991) / C52258 - (C18680 * C88836) / q + C57399 / q - C88646 / q;
    const double C18304 = -(C57895 * de + C18336 * C88834 + C57899 * p) / q;
    const double C88656 = C58152 * p;
    const double C89027 = C64952 * p;
    const double C31293 =
        (2 * C31328) / q - (C31327 * C88834) / q - (C65039 * p) / q;
    const double C31294 =
        (3 * C31336) / C52258 - (C31328 * C88834) / q - (C31327 * p) / q;
    const double C31302 = C65068 / q - (C31336 * C88834) / q - (C31328 * p) / q;
    const double C31585 = C89071 - (C53371 * de + C65157 * C88835) / q - C89464;
    const double C32464 = C89148 - (C65590 * C88834) / q - C89464;
    const double C31568 = C89067 - (C65441 * C88834) / q - C89462;
    const double C31976 = C89113 - (C54119 * de + C65142 * C88835) / q - C89462;
    const double C31584 = C89062 - (C53354 * de + C65441 * C88835) / q - C89463;
    const double C33120 = C89203 - (C67255 * C88834) / q - C89463;
    const double C89090 = C35262 / q;
    const double C89055 = C34670 / q;
    const double C32456 = -(C32488 * C88834 + C32480 * p) / q;
    const double C32705 = -(C32737 * C88834 + C33128 * p) / q;
    const double C33112 =
        C32737 / C52258 - (C33128 * C88834) / q - (C68424 * p) / q;
    const double C89185 = C35950 / q;
    const double C89274 = C67128 / C52258;
    const double C89224 = C33536 * p;
    const double C33608 = -(C33640 * C88834 + C33632 * p) / q;
    const double C89277 = C35015 * p;
    const double C89123 = C35015 / q;
    const double C89227 = C33783 * p;
    const double C89228 = C34344 * p;
    const double C89238 = C34472 * p;
    const double C89226 = C34216 * p;
    const double C34097 = -(C34129 * C88834 + C34392 * p) / q;
    const double C89285 = C69257 / C52258;
    const double C33576 =
        C69257 / q - (C33544 * C88836) / q + C69199 / q - (C34033 * p) / q;
    const double C34016 = -(C34032 * C88834 + C89245) / q;
    const double C34360 =
        (3 * C33536) / C52258 - (C34344 * C88836) / q + C69183 / q - C89245 / q;
    const double C34048 = -(C57744 * de + C34032 * C88835 + C89246) / q;
    const double C34488 =
        (3 * C33783) / C52258 - (C34472 * C88836) / q + C69514 / q - C89246 / q;
    const double C34096 = -(C34128 * C88834 + C70000 * p) / q;
    const double C89256 = C70246 * p;
    const double C89624 = C76948 * p;
    const double C47085 =
        (2 * C47120) / q - (C47119 * C88834) / q - (C77035 * p) / q;
    const double C47086 =
        (3 * C47128) / C52258 - (C47120 * C88834) / q - (C47119 * p) / q;
    const double C47094 = C77064 / q - (C47128 * C88834) / q - (C47120 * p) / q;
    const double C47377 = C89668 - (C77153 * C88835) / q - C90061;
    const double C48256 = C89745 - (C77586 * C88834) / q - C90061;
    const double C47360 = C89664 - (C77437 * C88834) / q - C90059;
    const double C47768 = C89710 - (C77138 * C88835) / q - C90059;
    const double C47376 = C89659 - (C77437 * C88835) / q - C90060;
    const double C48912 = C89800 - (C79251 * C88834) / q - C90060;
    const double C89687 = C51054 / q;
    const double C89652 = C50462 / q;
    const double C48248 = -(C48280 * C88834 + C48272 * p) / q;
    const double C48497 = -(C48529 * C88834 + C48920 * p) / q;
    const double C48904 =
        C48529 / C52258 - (C48920 * C88834) / q - (C80420 * p) / q;
    const double C89782 = C51742 / q;
    const double C89871 = C79124 / C52258;
    const double C89821 = C49328 * p;
    const double C49400 = -(C49432 * C88834 + C49424 * p) / q;
    const double C89874 = C50807 * p;
    const double C89720 = C50807 / q;
    const double C89824 = C49575 * p;
    const double C89825 = C50136 * p;
    const double C89835 = C50264 * p;
    const double C89823 = C50008 * p;
    const double C49889 = -(C49921 * C88834 + C50184 * p) / q;
    const double C89882 = C81253 / C52258;
    const double C49368 = C81253 / q - (C57040 * de + C49336 * C88836) / q +
                          C81195 / q - (C49825 * p) / q;
    const double C49808 = -(C49824 * C88834 + C89842) / q;
    const double C50152 = (3 * C49328) / C52258 -
                          (C58342 * de + C50136 * C88836) / q + C81179 / q -
                          C89842 / q;
    const double C49840 = -(C49824 * C88835 + C89843) / q;
    const double C50280 = (3 * C49575) / C52258 -
                          (C58579 * de + C50264 * C88836) / q + C81510 / q -
                          C89843 / q;
    const double C49888 = -(C49920 * C88834 + C81996 * p) / q;
    const double C89853 = C82242 * p;
    const double C15365 = C88399 - (C52426 * C88835) / q - C88837;
    const double C16160 =
        (3 * C52459) / C52258 - (C54088 * de + C52443 * C88834) / q - C88837;
    const double C88444 = C53055 * p;
    const double C15366 = C88400 - (C52442 * C88835) / q - C88838;
    const double C15745 = C88466 - (C53307 * de + C52459 * C88834) / q - C88838;
    const double C15374 = C88401 - (C52458 * C88835) / q - C88839;
    const double C18923 =
        C54791 / C52258 - (C58870 * de + C53311 * C88834) / q - C88839;
    const double C15633 =
        C52458 / C52258 - (C52459 * C88835) / q + C88438 - C88854;
    const double C16640 =
        C54792 / C52258 - (C54980 * de + C53294 * C88834) / q - C88854;
    const double C15632 = C88446 - (C53085 * C88835) / q + C88436 - C88853;
    const double C17312 =
        C54793 / C52258 - (C56257 * de + C54776 * C88834) / q - C88853;
    const double C88445 = C18818 / q;
    const double C15744 = C88464 - (C53290 * de + C53085 * C88834) / q - C88864;
    const double C16104 =
        C52442 / C52258 - (C52443 * C88835) / q + C88503 - C88864;
    const double C15888 = C88476 - (C53577 * C88835) / q - C88872;
    const double C18448 =
        C55746 / C52258 - (C58164 * de + C56941 * C88834) / q - C88872;
    const double C88452 = C53144 * p;
    const double C15889 = C88478 - (C53593 * C88835) / q - C88873;
    const double C19268 =
        C55763 / C52258 - (C59104 * de + C54565 * C88834) / q - C88873;
    const double C16232 = C88514 - (C53805 * C88835) / q - C88886;
    const double C16416 = C88525 - (C54561 * de + C53594 * C88834) / q - C88886;
    const double C16360 =
        C53593 / C52258 - (C53594 * C88835) / q + C88519 - C88890;
    const double C17440 =
        C55764 / C52258 - (C56492 * de + C55974 * C88834) / q - C88890;
    const double C88483 = C19410 / q;
    const double C88535 = C16528 * p;
    const double C88537 = C17256 * p;
    const double C88579 = C17040 * p;
    const double C88539 = C17041 * p;
    const double C88620 = C18392 * p;
    const double C88673 = C19163 * p;
    const double C88520 = C19163 / q;
    const double C88538 = C17384 * p;
    const double C16817 = -(C16785 * C88836 + C88558) / q;
    const double C88573 = C55716 * p;
    const double C88618 = C17680 * p;
    const double C88621 = C17931 * p;
    const double C88636 = C18648 * p;
    const double C88578 = C55809 * p;
    const double C88622 = C18520 * p;
    const double C88577 = C20098 / q;
    const double C88840 = C88415 / q;
    const double C88855 = C88449 / q;
    const double C88871 = C88482 / q;
    const double C88874 = C88486 / q;
    const double C88876 = C88487 / q;
    const double C88887 = C88508 / q;
    const double C16768 = -(C55226 * de + C16784 * C88834 + C88556) / q;
    const double C17264 =
        (3 * C16528) / C52258 - (C17256 * C88835) / q + C54776 / q - C88556 / q;
    const double C16816 = -(C16784 * C88836 + C88557) / q;
    const double C17520 =
        (3 * C17041) / C52258 - (C17512 * C88835) / q + C55765 / q - C88557 / q;
    const double C88910 = C88576 / q;
    const double C17272 = -(C17256 * C88836 + C88599) / q;
    const double C17504 = -(C56613 * de + C17512 * C88834 + C88599) / q;
    const double C18160 = -(C57623 * de + C18176 * C88834 + C88643) / q;
    const double C18536 =
        (3 * C17680) / C52258 - (C18520 * C88836) / q - C88643 / q;
    const double C88932 = C88644 / q;
    const double C88934 = C88653 / q;
    const double C18640 = -(C58521 * de + C18648 * C88834 + C88653) / q;
    const double C89045 = C34610 / q;
    const double C89083 = C35202 / q;
    const double C89135 = C32320 * p;
    const double C89137 = C33048 * p;
    const double C89139 = C32833 * p;
    const double C89273 = C34955 * p;
    const double C89120 = C34955 / q;
    const double C89138 = C33176 * p;
    const double C32609 = -(C32577 * C88836 + C89158) / q;
    const double C89221 = C33723 * p;
    const double C89236 = C34440 * p;
    const double C89177 = C35890 / q;
    const double C32560 = -(C32576 * C88834 + C89156) / q;
    const double C33056 = (3 * C32320) / C52258 -
                          (C56140 * de + C33048 * C88835) / q + C66966 / q -
                          C89156 / q;
    const double C32608 = -(C32576 * C88836 + C89157) / q;
    const double C33312 = (3 * C32833) / C52258 -
                          (C56613 * de + C33304 * C88835) / q + C67927 / q -
                          C89157 / q;
    const double C33064 = -(C33048 * C88836 + C89199) / q;
    const double C33296 = -(C33304 * C88834 + C89199) / q;
    const double C89642 = C50402 / q;
    const double C89680 = C50994 / q;
    const double C89732 = C48112 * p;
    const double C89734 = C48840 * p;
    const double C89736 = C48625 * p;
    const double C89870 = C50747 * p;
    const double C89717 = C50747 / q;
    const double C89735 = C48968 * p;
    const double C48401 = -(C55242 * de + C48369 * C88836 + C89755) / q;
    const double C89818 = C49515 * p;
    const double C89833 = C50232 * p;
    const double C89774 = C51682 / q;
    const double C48352 = -(C48368 * C88834 + C89753) / q;
    const double C48848 =
        (3 * C48112) / C52258 - (C48840 * C88835) / q + C78962 / q - C89753 / q;
    const double C48400 = -(C55226 * de + C48368 * C88836 + C89754) / q;
    const double C49104 =
        (3 * C48625) / C52258 - (C49096 * C88835) / q + C79923 / q - C89754 / q;
    const double C48856 = -(C56140 * de + C48840 * C88836 + C89796) / q;
    const double C49088 = -(C49096 * C88834 + C89796) / q;
    const double C88441 = C15568 * p;
    const double C88406 = C15569 * p;
    const double C88481 = C15824 * p;
    const double C88411 = C15825 * p;
    const double C15315 = -(C15298 * C88835 + C88405) / q;
    const double C15332 = -(C15298 * C88836 + C88410) / q;
    const double C88443 = C16328 * p;
    const double C88894 = C88528 / q;
    const double C88439 = C52996 * p;
    const double C88909 = C88572 / q;
    const double C88442 = C53025 * p;
    const double C16504 = -(C16472 * C88836 + C88533) / q;
    const double C88895 = C88531 / q;
    const double C88906 = C88532 / q;
    const double C16496 = -(C16464 * C88836 + C88532) / q;
    const double C16753 = -(C16721 * C88836 + C88555) / q;
    const double C88925 = C88611 / q;
    const double C88479 = C53488 * p;
    const double C17640 = -(C17624 * C88835 + C88615) / q;
    const double C88480 = C53517 * p;
    const double C88929 = C88614 / q;
    const double C17632 = -(C17616 * C88835 + C88614) / q;
    const double C88926 = C88616 / q;
    const double C18129 = -(C18113 * C88835 + C88635) / q;
    const double C15553 =
        C88434 - (C52941 * de + C15569 * C88834) / q + C52945 / q - C88405 / q;
    const double C20068 = C88667 - (C20038 * C88836) / q - C88615 / q;
    const double C18788 = -(C18758 * C88836 + C88670) / q;
    const double C19365 = -(C19350 * C88835 + C88670) / q;
    const double C20023 =
        C58949 / q - (C59398 * de + C20038 * C88834) / q - C88670 / q;
    const double C16993 = C88570 - (C16977 * C88835) / q - C88555 / q;
    const double C17901 = C88570 - (C17871 * C88836) / q - C88635 / q;
    const double C15809 =
        C88474 - (C53433 * de + C15825 * C88834) / q + C53437 / q - C88410 / q;
    const double C20053 = C88681 - (C20038 * C88835) / q - C88533 / q;
    const double C15314 = -(C15297 * C88835 + C88404) / q;
    const double C16064 = (3 * C15569) / C52258 -
                          (C53910 * de + C16072 * C88834) / q + C52981 / q -
                          C88404 / q;
    const double C15331 = -(C15297 * C88836 + C88409) / q;
    const double C16192 = (3 * C15825) / C52258 -
                          (C54148 * de + C16200 * C88834) / q + C53473 / q -
                          C88409 / q;
    const double C88849 = C88433 / q;
    const double C88868 = C88473 / q;
    const double C16088 = -(C16072 * C88836 + C88505) / q;
    const double C16208 = -(C16200 * C88835 + C88505) / q;
    const double C16320 =
        C88517 - (C54384 * de + C16328 * C88834) / q + C54388 / q - C88505 / q;
    const double C88900 = C88551 / q;
    const double C16752 = -(C16720 * C88836 + C88554) / q;
    const double C17488 =
        (3 * C16977) / C52258 - (C17480 * C88835) / q - C88554 / q;
    const double C88905 = C88566 / q;
    const double C88907 = C88569 / q;
    const double C88908 = C88571 / q;
    const double C88921 = C88597 / q;
    const double C17240 = -(C17224 * C88836 + C88597) / q;
    const double C88931 = C88639 / q;
    const double C18128 = -(C18112 * C88835 + C88642) / q;
    const double C18632 =
        (3 * C17871) / C52258 - (C18616 * C88836) / q - C88642 / q;
    const double C88933 = C88651 / q;
    const double C18496 = -(C18488 * C88835 + C88651) / q;
    const double C89008 = C31361 * p;
    const double C89011 = C31617 * p;
    const double C31107 = -(C52206 * de + C31090 * C88835 + C89007) / q;
    const double C31124 = -(C31090 * C88836 + C89010) / q;
    const double C89043 = C32120 * p;
    const double C31345 =
        C89034 - (C31361 * C88834) / q + C65188 / q - C89007 / q;
    const double C34580 = -(C34550 * C88836 + C89270) / q;
    const double C35157 = -(C59163 * de + C35142 * C88835 + C89270) / q;
    const double C35815 = C71017 / q - (C35830 * C88834) / q - C89270 / q;
    const double C31601 =
        C89074 - (C31617 * C88834) / q + C65666 / q - C89010 / q;
    const double C31106 = -(C52189 * de + C31089 * C88835 + C89006) / q;
    const double C31856 =
        (3 * C31361) / C52258 - (C31864 * C88834) / q + C65222 / q - C89006 / q;
    const double C31123 = -(C31089 * C88836 + C89009) / q;
    const double C31984 =
        (3 * C31617) / C52258 - (C31992 * C88834) / q + C65700 / q - C89009 / q;
    const double C31880 = -(C31864 * C88836 + C89105) / q;
    const double C32000 = -(C54148 * de + C31992 * C88835 + C89105) / q;
    const double C32112 =
        C89117 - (C32120 * C88834) / q + C66590 / q - C89105 / q;
    const double C89605 = C47153 * p;
    const double C89608 = C47409 * p;
    const double C46899 = -(C46882 * C88835 + C89604) / q;
    const double C46916 = -(C52206 * de + C46882 * C88836 + C89607) / q;
    const double C89640 = C47912 * p;
    const double C47137 =
        C89631 - (C47153 * C88834) / q + C77184 / q - C89604 / q;
    const double C50372 = -(C58696 * de + C50342 * C88836 + C89867) / q;
    const double C50949 = -(C50934 * C88835 + C89867) / q;
    const double C51607 = C83013 / q - (C51622 * C88834) / q - C89867 / q;
    const double C47393 =
        C89671 - (C47409 * C88834) / q + C77662 / q - C89607 / q;
    const double C46898 = -(C46881 * C88835 + C89603) / q;
    const double C47648 =
        (3 * C47153) / C52258 - (C47656 * C88834) / q + C77218 / q - C89603 / q;
    const double C46915 = -(C52189 * de + C46881 * C88836 + C89606) / q;
    const double C47776 =
        (3 * C47409) / C52258 - (C47784 * C88834) / q + C77696 / q - C89606 / q;
    const double C47672 = -(C53910 * de + C47656 * C88836 + C89702) / q;
    const double C47792 = -(C47784 * C88835 + C89702) / q;
    const double C47904 =
        C89714 - (C47912 * C88834) / q + C78586 / q - C89702 / q;
    const double C68147 = C89255 - (C74209 * de + C68176 * C88835) / q - C89566;
    const double C68395 =
        C67255 / C52258 - (C68366 * C88836) / q + C89389 - C89566;
    const double C33952 = -(C33968 * C88834 + C89243) / q;
    const double C68000 = C89207 - (C68176 * C88836) / q + C89373 - C89562;
    const double C70733 =
        C69183 / C52258 - (C75216 * de + C70217 * C88835) / q - C89562;
    const double C67524 = C89363 - (C67700 * C88836) / q - C89558;
    const double C68881 =
        (3 * C67083) / C52258 - (C74457 * de + C68366 * C88835) / q - C89558;
    const double C89112 = C66289 * p;
    const double C33920 = -(C57498 * de + C33904 * C88835 + C89242) / q;
    const double C34424 =
        (3 * C33663) / C52258 - (C34408 * C88836) / q - C89242 / q;
    const double C34376 =
        C34129 / C52258 - (C34392 * C88834) / q - (C70504 * p) / q;
    const double C65501 =
        C65441 / C52258 - (C65442 * C88836) / q + C89320 - C89545;
    const double C70275 =
        C65921 / C52258 - (C75102 * de + C66101 * C88835) / q - C89545;
    const double C89473 = C89087 / q;
    const double C89505 = C89171 / q;
    const double C65472 = C89319 - (C65621 * C88836) / q - C89544;
    const double C68652 = C89124 - (C74400 * de + C65442 * C88835) / q - C89544;
    const double C89504 = C89169 / q;
    const double C65412 = C89315 - (C65591 * C88836) / q - C89541;
    const double C66778 =
        C64878 / C52258 - (C73310 * de + C66260 * C88835) / q - C89541;
    const double C89468 = C89082 / q;
    const double C32544 = -(C32512 * C88836 + C89154) / q;
    const double C33280 = (3 * C32769) / C52258 -
                          (C56552 * de + C33272 * C88835) / q - C89154 / q;
    const double C89024 = C64909 * p;
    const double C32992 = C89191 - (C56017 * de + C68029 * C88835) / q - C89515;
    const double C33336 = C89203 - (C67569 * C88836) / q + C89208 - C89515;
    const double C33208 =
        C65590 / C52258 - (C67083 * C88836) / q + C89205 - C89520;
    const double C34264 =
        C66070 / C52258 - (C58195 * de + C69356 * C88835) / q - C89520;
    const double C89222 = C34312 * p;
    const double C89531 = C89253 / q;
    const double C34432 = -(C34440 * C88834 + C89253) / q;
    const double C89220 = C34184 * p;
    const double C33080 = C89196 - (C67255 * C88836) / q - C89516;
    const double C33256 = C89126 - (C56523 * de + C67083 * C88835) / q - C89516;
    const double C89529 = C89244 / q;
    const double C32897 = C89148 - (C67099 * C88836) / q + C89168 - C89511;
    const double C33873 = C89230 - (C57469 * de + C68205 * C88835) / q - C89511;
    const double C89178 = C67971 * p;
    const double C32896 = C89181 - (C68029 * C88836) / q + C89167 - C89510;
    const double C34520 = C89264 - (C58667 * de + C69514 * C88835) / q - C89510;
    const double C89513 = C89186 / q;
    const double C89184 = C68059 * p;
    const double C32641 = C89153 - (C67271 * C88836) / q - C89499;
    const double C32993 = C89193 - (C56033 * de + C67099 * C88835) / q - C89499;
    const double C32640 = C89152 - (C67553 * C88836) / q - C89498;
    const double C33384 =
        (3 * C67099) / C52258 - (C56759 * de + C67569 * C88835) / q - C89498;
    const double C89500 = C89162 / q;
    const double C89507 = C89176 / q;
    const double C32392 = C89130 - (C67098 * C88836) / q - C89494;
    const double C36040 = C89287 - (C59601 * de + C68221 * C88835) / q - C89494;
    const double C89179 = C32832 * p;
    const double C32384 = C89129 - (C65590 * C88836) / q - C89493;
    const double C35105 =
        C66086 / C52258 - (C59134 * de + C66793 * C88835) / q - C89493;
    const double C89173 = C67879 * p;
    const double C89218 = C33472 * p;
    const double C34328 =
        (3 * C33472) / C52258 - (C34312 * C88836) / q - C89243 / q;
    const double C32184 =
        C65157 / C52258 - (C65457 * C88836) / q + C89119 - C89489;
    const double C34256 = C68205 / C52258 - (C69356 * C88834) / q - C89489;
    const double C31808 = C33632 / q - (C31840 * C88834) / q - (C66041 * p) / q;
    const double C33600 =
        C33640 / C52258 - (C33632 * C88834) / q - (C31840 * p) / q;
    const double C33693 = C89170 - (C33663 * C88836) / q - C89235 / q;
    const double C33921 = -(C57515 * de + C33905 * C88835 + C89235) / q;
    const double C89530 = C89251 / q;
    const double C34288 = -(C58224 * de + C34280 * C88835 + C89251) / q;
    const double C31824 = C89099 - (C65921 * C88834) / q - C89480;
    const double C32056 = C89113 - (C64878 * C88836) / q + C89114 - C89480;
    const double C31928 = C89103 - (C65142 * C88836) / q - C89481;
    const double C32224 = C89126 - (C65457 * C88834) / q - C89481;
    const double C89528 = C89239 / q;
    const double C31745 = C89071 - (C64894 * C88836) / q + C89078 - C89477;
    const double C33616 = C89230 - (C66070 * C88834) / q - C89477;
    const double C89080 = C65744 * p;
    const double C89523 = C89216 / q;
    const double C31744 = C89091 - (C65921 * C88836) / q + C89076 - C89476;
    const double C34384 = C89264 - (C69183 * C88834) / q - C89476;
    const double C89478 = C89095 / q;
    const double C32152 =
        C65818 / C52258 - (C54561 * de + C65819 * C88835) / q + C89119 - C89487;
    const double C33232 = C67926 / C52258 - (C68132 * C88834) / q - C89487;
    const double C32545 = -(C32513 * C88836 + C89155) / q;
    const double C32785 =
        C89170 - (C55604 * de + C32769 * C88835) / q - C89155 / q;
    const double C89518 = C89197 / q;
    const double C33032 = -(C33016 * C88836 + C89197) / q;
    const double C32024 = C89114 - (C54323 * de + C66026 * C88835) / q - C89483;
    const double C32208 = C89125 - (C65819 * C88834) / q - C89483;
    const double C89484 = C89108 / q;
    const double C31536 = C89064 - (C65324 * C88834) / q - C89461;
    const double C31896 =
        C64699 / C52258 - (C54088 * de + C64700 * C88835) / q + C89103 - C89461;
    const double C89094 = C65951 * p;
    const double C31489 = C89038 - (C65157 * C88836) / q - C89456;
    const double C35090 = C68221 / C52258 - (C66793 * C88834) / q - C89456;
    const double C31809 = C35352 / q - (C31841 * C88834) / q - (C32104 * p) / q;
    const double C32088 =
        (3 * C31841) / C52258 - (C32104 * C88834) / q - (C66547 * p) / q;
    const double C35322 =
        C71414 / C52258 - (C35352 * C88834) / q - (C31841 * p) / q;
    const double C89079 = C65715 * p;
    const double C33432 = -(C56803 * de + C33416 * C88835 + C89215) / q;
    const double C35860 = C89267 - (C35830 * C88836) / q - C89215 / q;
    const double C89526 = C89214 / q;
    const double C33424 = -(C56788 * de + C33408 * C88835 + C89214) / q;
    const double C31488 = C89036 - (C65441 * C88836) / q - C89455;
    const double C32232 =
        C64894 / C52258 - (C54593 * de + C65457 * C88835) / q - C89455;
    const double C33248 = C67099 / C52258 - (C67083 * C88834) / q - C89455;
    const double C31680 = C89076 - (C53783 * de + C65802 * C88835) / q - C89469;
    const double C34240 = C67908 / C52258 - (C69068 * C88834) / q - C89469;
    const double C89471 = C89086 / q;
    const double C89506 = C89172 / q;
    const double C89502 = C89166 / q;
    const double C89052 = C65383 * p;
    const double C31681 = C89078 - (C53800 * de + C65818 * C88835) / q - C89470;
    const double C35060 = C67925 / C52258 - (C66763 * C88834) / q - C89470;
    const double C89042 = C65266 * p;
    const double C32296 = -(C32264 * C88836 + C89133) / q;
    const double C35845 =
        C89281 - (C59398 * de + C35830 * C88835) / q - C89133 / q;
    const double C89503 = C89132 / q;
    const double C32288 = -(C32256 * C88836 + C89132) / q;
    const double C89497 = C89151 / q;
    const double C31425 =
        C64715 / C52258 - (C53307 * de + C64716 * C88835) / q + C89038 - C89451;
    const double C32432 = C66982 / C52258 - (C65530 * C88834) / q - C89451;
    const double C89039 = C65237 * p;
    const double C89492 = C89131 / q;
    const double C31424 =
        C89046 - (C53290 * de + C65324 * C88835) / q + C89036 - C89450;
    const double C33104 = C66983 / C52258 - (C66966 * C88834) / q - C89450;
    const double C89452 = C89049 / q;
    const double C31234 = C89005 - (C64893 * C88836) / q - C89442;
    const double C35337 = C89287 - (C66086 * C88834) / q - C89442;
    const double C89081 = C31616 * p;
    const double C89089 = C65892 * p;
    const double C31226 = C89004 - (C64877 * C88836) / q - C89441;
    const double C31825 = C89101 - (C64894 * C88834) / q - C89441;
    const double C89522 = C89211 / q;
    const double C31225 = C89003 - (C64861 * C88836) / q - C89440;
    const double C32096 =
        (3 * C64894) / C52258 - (C64878 * C88834) / q - C89440;
    const double C89465 = C89073 / q;
    const double C31166 = C89005 - (C52769 * de + C64715 * C88835) / q - C89436;
    const double C34715 = C66981 / C52258 - (C65546 * C88834) / q - C89436;
    const double C89041 = C31360 * p;
    const double C89044 = C65295 * p;
    const double C31158 = C89004 - (C52754 * de + C64699 * C88835) / q - C89435;
    const double C31537 = C89066 - (C64716 * C88834) / q - C89435;
    const double C89491 = C89128 / q;
    const double C31157 = C89003 - (C52738 * de + C64683 * C88835) / q - C89434;
    const double C31952 =
        (3 * C64716) / C52258 - (C64700 * C88834) / q - C89434;
    const double C89437 = C89015 / q;
    const double C89446 = C89033 / q;
    const double C80143 = C89852 - (C80172 * C88835) / q - C90163;
    const double C80391 =
        C79251 / C52258 - (C74457 * de + C80362 * C88836) / q + C89986 - C90163;
    const double C49744 = -(C49760 * C88834 + C89840) / q;
    const double C79996 =
        C89804 - (C74209 * de + C80172 * C88836) / q + C89970 - C90159;
    const double C82729 = C81179 / C52258 - (C82213 * C88835) / q - C90159;
    const double C79520 = C89960 - (C73824 * de + C79696 * C88836) / q - C90155;
    const double C80877 =
        (3 * C79079) / C52258 - (C80362 * C88835) / q - C90155;
    const double C89709 = C78285 * p;
    const double C49712 = -(C49696 * C88835 + C89839) / q;
    const double C50216 = (3 * C49455) / C52258 -
                          (C58460 * de + C50200 * C88836) / q - C89839 / q;
    const double C50168 =
        C49921 / C52258 - (C50184 * C88834) / q - (C82500 * p) / q;
    const double C77497 =
        C77437 / C52258 - (C74400 * de + C77438 * C88836) / q + C89917 - C90142;
    const double C82271 = C77917 / C52258 - (C78097 * C88835) / q - C90142;
    const double C90070 = C89684 / q;
    const double C90102 = C89768 / q;
    const double C77468 = C89916 - (C74356 * de + C77617 * C88836) / q - C90141;
    const double C80648 = C89721 - (C77438 * C88835) / q - C90141;
    const double C90101 = C89766 / q;
    const double C77408 = C89912 - (C72580 * de + C77587 * C88836) / q - C90138;
    const double C78774 = C76874 / C52258 - (C78256 * C88835) / q - C90138;
    const double C90065 = C89679 / q;
    const double C48336 = -(C55101 * de + C48304 * C88836 + C89751) / q;
    const double C49072 =
        (3 * C48561) / C52258 - (C49064 * C88835) / q - C89751 / q;
    const double C89621 = C76905 * p;
    const double C48784 = C89788 - (C80025 * C88835) / q - C90112;
    const double C49128 =
        C89800 - (C56759 * de + C79565 * C88836) / q + C89805 - C90112;
    const double C49000 =
        C77586 / C52258 - (C56523 * de + C79079 * C88836) / q + C89802 - C90117;
    const double C50056 = C78066 / C52258 - (C81352 * C88835) / q - C90117;
    const double C89819 = C50104 * p;
    const double C90128 = C89850 / q;
    const double C50224 = -(C50232 * C88834 + C89850) / q;
    const double C89817 = C49976 * p;
    const double C48872 = C89793 - (C56288 * de + C79251 * C88836) / q - C90113;
    const double C49048 = C89723 - (C79079 * C88835) / q - C90113;
    const double C90126 = C89841 / q;
    const double C48689 =
        C89745 - (C56033 * de + C79095 * C88836) / q + C89765 - C90108;
    const double C49665 = C89827 - (C80201 * C88835) / q - C90108;
    const double C89775 = C79967 * p;
    const double C48688 =
        C89778 - (C56017 * de + C80025 * C88836) / q + C89764 - C90107;
    const double C50312 = C89861 - (C81510 * C88835) / q - C90107;
    const double C90110 = C89783 / q;
    const double C89781 = C80055 * p;
    const double C48433 = C89750 - (C55543 * de + C79267 * C88836) / q - C90096;
    const double C48785 = C89790 - (C79095 * C88835) / q - C90096;
    const double C48432 = C89749 - (C55527 * de + C79549 * C88836) / q - C90095;
    const double C49176 =
        (3 * C79095) / C52258 - (C79565 * C88835) / q - C90095;
    const double C90097 = C89759 / q;
    const double C90104 = C89773 / q;
    const double C48184 = C89727 - (C55055 * de + C79094 * C88836) / q - C90091;
    const double C51832 = C89884 - (C80217 * C88835) / q - C90091;
    const double C89776 = C48624 * p;
    const double C48176 = C89726 - (C55040 * de + C77586 * C88836) / q - C90090;
    const double C50897 = C78082 / C52258 - (C78789 * C88835) / q - C90090;
    const double C89770 = C79875 * p;
    const double C89815 = C49264 * p;
    const double C50120 = (3 * C49264) / C52258 -
                          (C58284 * de + C50104 * C88836) / q - C89840 / q;
    const double C47976 =
        C77153 / C52258 - (C54593 * de + C77453 * C88836) / q + C89716 - C90086;
    const double C50048 = C80201 / C52258 - (C81352 * C88834) / q - C90086;
    const double C47600 = C49424 / q - (C47632 * C88834) / q - (C78037 * p) / q;
    const double C49392 =
        C49432 / C52258 - (C49424 * C88834) / q - (C47632 * p) / q;
    const double C49485 =
        C89767 - (C57263 * de + C49455 * C88836) / q - C89832 / q;
    const double C49713 = -(C49697 * C88835 + C89832) / q;
    const double C90127 = C89848 / q;
    const double C50080 = -(C50072 * C88835 + C89848) / q;
    const double C47616 = C89696 - (C77917 * C88834) / q - C90077;
    const double C47848 =
        C89710 - (C54355 * de + C76874 * C88836) / q + C89711 - C90077;
    const double C47720 = C89700 - (C54119 * de + C77138 * C88836) / q - C90078;
    const double C48016 = C89723 - (C77453 * C88834) / q - C90078;
    const double C90125 = C89836 / q;
    const double C47537 =
        C89668 - (C53865 * de + C76890 * C88836) / q + C89675 - C90074;
    const double C49408 = C89827 - (C78066 * C88834) / q - C90074;
    const double C89677 = C77740 * p;
    const double C90120 = C89813 / q;
    const double C47536 =
        C89688 - (C53848 * de + C77917 * C88836) / q + C89673 - C90073;
    const double C50176 = C89861 - (C81179 * C88834) / q - C90073;
    const double C90075 = C89692 / q;
    const double C47944 =
        C77814 / C52258 - (C77815 * C88835) / q + C89716 - C90084;
    const double C49024 = C79922 / C52258 - (C80128 * C88834) / q - C90084;
    const double C48337 = -(C55118 * de + C48305 * C88836 + C89752) / q;
    const double C48577 = C89767 - (C48561 * C88835) / q - C89752 / q;
    const double C90115 = C89794 / q;
    const double C48824 = -(C56079 * de + C48808 * C88836 + C89794) / q;
    const double C47816 = C89711 - (C78022 * C88835) / q - C90080;
    const double C48000 = C89722 - (C77815 * C88834) / q - C90080;
    const double C90081 = C89705 / q;
    const double C47328 = C89661 - (C77320 * C88834) / q - C90058;
    const double C47688 =
        C76695 / C52258 - (C76696 * C88835) / q + C89700 - C90058;
    const double C89691 = C77947 * p;
    const double C47281 = C89635 - (C53371 * de + C77153 * C88836) / q - C90053;
    const double C50882 = C80217 / C52258 - (C78789 * C88834) / q - C90053;
    const double C47601 = C51144 / q - (C47633 * C88834) / q - (C47896 * p) / q;
    const double C47880 =
        (3 * C47633) / C52258 - (C47896 * C88834) / q - (C78543 * p) / q;
    const double C51114 =
        C83410 / C52258 - (C51144 * C88834) / q - (C47633 * p) / q;
    const double C89676 = C77711 * p;
    const double C49224 = -(C49208 * C88835 + C89812) / q;
    const double C51652 =
        C89864 - (C59398 * de + C51622 * C88836) / q - C89812 / q;
    const double C90123 = C89811 / q;
    const double C49216 = -(C49200 * C88835 + C89811) / q;
    const double C47280 = C89633 - (C53354 * de + C77437 * C88836) / q - C90052;
    const double C48024 = C76890 / C52258 - (C77453 * C88835) / q - C90052;
    const double C49040 = C79095 / C52258 - (C79079 * C88834) / q - C90052;
    const double C47472 = C89673 - (C77798 * C88835) / q - C90066;
    const double C50032 = C79904 / C52258 - (C81064 * C88834) / q - C90066;
    const double C90068 = C89683 / q;
    const double C90103 = C89769 / q;
    const double C90099 = C89763 / q;
    const double C89649 = C77379 * p;
    const double C47473 = C89675 - (C77814 * C88835) / q - C90067;
    const double C50852 = C79921 / C52258 - (C78759 * C88834) / q - C90067;
    const double C89639 = C77262 * p;
    const double C48088 = -(C54638 * de + C48056 * C88836 + C89730) / q;
    const double C51637 = C89878 - (C51622 * C88835) / q - C89730 / q;
    const double C90100 = C89729 / q;
    const double C48080 = -(C54623 * de + C48048 * C88836 + C89729) / q;
    const double C90094 = C89748 / q;
    const double C47217 =
        C76711 / C52258 - (C76712 * C88835) / q + C89635 - C90048;
    const double C48224 = C78978 / C52258 - (C77526 * C88834) / q - C90048;
    const double C89636 = C77233 * p;
    const double C90089 = C89728 / q;
    const double C47216 = C89643 - (C77320 * C88835) / q + C89633 - C90047;
    const double C48896 = C78979 / C52258 - (C78962 * C88834) / q - C90047;
    const double C90049 = C89646 / q;
    const double C47026 = C89602 - (C52863 * de + C76889 * C88836) / q - C90039;
    const double C51129 = C89884 - (C78082 * C88834) / q - C90039;
    const double C89678 = C47408 * p;
    const double C89686 = C77888 * p;
    const double C47018 = C89601 - (C52848 * de + C76873 * C88836) / q - C90038;
    const double C47617 = C89698 - (C76890 * C88834) / q - C90038;
    const double C90119 = C89808 / q;
    const double C47017 = C89600 - (C52832 * de + C76857 * C88836) / q - C90037;
    const double C47888 =
        (3 * C76890) / C52258 - (C76874 * C88834) / q - C90037;
    const double C90062 = C89670 / q;
    const double C46958 = C89602 - (C76711 * C88835) / q - C90033;
    const double C50507 = C78977 / C52258 - (C77542 * C88834) / q - C90033;
    const double C89638 = C47152 * p;
    const double C89641 = C77291 * p;
    const double C46950 = C89601 - (C76695 * C88835) / q - C90032;
    const double C47329 = C89663 - (C76712 * C88834) / q - C90032;
    const double C90088 = C89725 / q;
    const double C46949 = C89600 - (C76679 * C88835) / q - C90031;
    const double C47744 =
        (3 * C76712) / C52258 - (C76696 * C88834) / q - C90031;
    const double C90034 = C89612 / q;
    const double C90043 = C89630 / q;
    const double C88846 = C88427 / q;
    const double C88878 = C88489 / q;
    const double C88510 = C15434 / C52258;
    const double C15416 = (2 * C15434) / q -
                          (C52557 * de + C15433 * C88834) / q -
                          (C52561 * p) / q;
    const double C88459 = C15442 / C52258;
    const double C15417 = (3 * C15442) / C52258 -
                          (C52573 * de + C15434 * C88834) / q -
                          (C15433 * p) / q;
    const double C15425 =
        C52592 / q - (C52588 * de + C15442 * C88834) / q - (C15434 * p) / q;
    const double C18938 = C58889 / C52258 -
                          (C58885 * de + C18968 * C88834) / q -
                          (C15793 * p) / q;
    const double C88460 = C15696 * p;
    const double C88426 = C15697 * p;
    const double C15761 =
        C18968 / q - (C53339 * de + C15793 * C88834) / q - (C16184 * p) / q;
    const double C16168 = (3 * C15793) / C52258 -
                          (C54103 * de + C16184 * C88834) / q -
                          (C54107 * p) / q;
    const double C15760 =
        C16688 / q - (C53323 * de + C15792 * C88834) / q - (C53327 * p) / q;
    const double C16656 = C16696 / C52258 -
                          (C55010 * de + C16688 * C88834) / q -
                          (C15792 * p) / q;
    const double C88429 = C15953 * p;
    const double C88496 = C15952 * p;
    const double C88428 = C16264 * p;
    const double C88463 = C16392 * p;
    const double C88425 = C16136 * p;
    const double C88541 = C16592 * p;
    const double C88540 = C16600 / C52258;
    const double C19283 = C20248 / C52258 -
                          (C59119 * de + C19313 * C88834) / q -
                          (C16440 * p) / q;
    const double C20218 = -(C59586 * de + C20248 * C88834 + C19313 * p) / q;
    const double C88915 = C88584 / q;
    const double C88600 = C16849 / C52258;
    const double C16616 = C54940 / q - (C16600 * C88835) / q - (C16849 * p) / q;
    const double C16864 =
        (2 * C16849) / q - (C16848 * C88835) / q - (C55410 * p) / q;
    const double C16865 =
        (3 * C16600) / C52258 - (C16849 * C88835) / q - (C16848 * p) / q;
    const double C88546 = C17105 * p;
    const double C88587 = C17104 * p;
    const double C88545 = C17416 * p;
    const double C18051 = -(C57454 * de + C18081 * C88834 + C18472 * p) / q;
    const double C88563 = C17544 * p;
    const double C88544 = C17288 * p;
    const double C17169 = -(C56002 * de + C17201 * C88834 + C17464 * p) / q;
    const double C17736 = -(C57040 * de + C17752 * C88834 + C88624) / q;
    const double C19500 = C88676 - (C19470 * C88836) / q + C88501 - C88624 / q;
    const double C18908 = C88469 - (C18878 * C88836) / q - C88677 / q;
    const double C19485 = -(C19470 * C88835 + C88677) / q;
    const double C20143 = -(C59514 * de + C20158 * C88834 + C88677) / q;
    const double C17768 = -(C17752 * C88835 + C88627) / q;
    const double C20188 = C88674 - (C20158 * C88836) / q + C88593 - C88627 / q;
    const double C17776 = C88490 - (C17744 * C88836) / q + C88499 - C88628 / q;
    const double C18225 = -(C57760 * de + C18241 * C88834 + C88628) / q;
    const double C18021 = C88585 - (C17991 * C88836) / q + C88591 - C88638 / q;
    const double C18257 = -(C18241 * C88835 + C88638) / q;
    const double C17760 = -(C17744 * C88835 + C88626) / q;
    const double C17976 = -(C57381 * de + C17991 * C88834 + C88626) / q;
    const double C19253 =
        C18878 / C52258 - (C19223 * C88836) / q + C88526 - C88626 / q;
    const double C15450 = -(C15433 * C88835 + C88424) / q;
    const double C16128 = (3 * C15697) / C52258 -
                          (C54029 * de + C16136 * C88834) / q - C88424 / q;
    const double C88454 = C53174 * p;
    const double C16424 =
        C19313 / q - (C54577 * de + C16440 * C88834) / q - (C54581 * p) / q;
    const double C88458 = C53235 * p;
    const double C17448 = C17201 / C52258 -
                          (C56507 * de + C17464 * C88834) / q -
                          (C56511 * p) / q;
    const double C88461 = C53264 * p;
    const double C18456 = C18081 / C52258 -
                          (C58179 * de + C18472 * C88834) / q -
                          (C58183 * p) / q;
    const double C88893 = C88494 / q;
    const double C15968 = -(C15952 * C88835 + C88494) / q;
    const double C15984 =
        C15953 / q - (C15952 * C88836) / q + C53698 / q - C88881;
    const double C18544 = C88662 - (C58342 * de + C18552 * C88834) / q - C88881;
    const double C88885 = C88512 / q;
    const double C16272 = -(C16264 * C88835 + C88512) / q;
    const double C88559 = C55349 * p;
    const double C17576 = -(C56743 * de + C17592 * C88834 + C56747 * p) / q;
    const double C16880 = C55379 / q - (C16848 * C88836) / q - C88903;
    const double C17552 =
        (3 * C17105) / C52258 - (C17544 * C88835) / q - C88903;
    const double C88580 = C55839 * p;
    const double C18712 = -(C58651 * de + C18728 * C88834 + C58655 * p) / q;
    const double C17136 =
        C17105 / q - (C17104 * C88836) / q + C55869 / q - C88916;
    const double C18688 = C88662 - (C18680 * C88835) / q - C88916;
    const double C17168 = -(C55986 * de + C17200 * C88834 + C55990 * p) / q;
    const double C88602 = C56245 * p;
    const double C18440 = C88523 - (C18424 * C88836) / q + C88655 - C88656 / q;
    const double C18560 = -(C18552 * C88835 + C88656) / q;
    const double C18672 = -(C58579 * de + C18680 * C88834 + C88656) / q;
    const double C89443 = C89027 / q;
    const double C34730 =
        C70960 / C52258 - (C34760 * C88834) / q - (C31585 * p) / q;
    const double C31553 = C34760 / q - (C31585 * C88834) / q - (C31976 * p) / q;
    const double C31960 =
        (3 * C31585) / C52258 - (C31976 * C88834) / q - (C66318 * p) / q;
    const double C31552 = C32480 / q - (C31584 * C88834) / q - (C65561 * p) / q;
    const double C32448 =
        C32488 / C52258 - (C32480 * C88834) / q - (C31584 * p) / q;
    const double C33528 = -(C33544 * C88834 + C89224) / q;
    const double C35292 = C89276 - (C35262 * C88836) / q + C89101 - C89224 / q;
    const double C34700 = C89069 - (C34670 * C88836) / q - C89277 / q;
    const double C35277 = -(C59280 * de + C35262 * C88835 + C89277) / q;
    const double C35935 = -(C35950 * C88834 + C89277) / q;
    const double C33560 = -(C57040 * de + C33544 * C88835 + C89227) / q;
    const double C35980 = C89274 - (C35950 * C88836) / q + C89193 - C89227 / q;
    const double C33568 = C89090 - (C33536 * C88836) / q + C89099 - C89228 / q;
    const double C34017 = -(C34033 * C88834 + C89228) / q;
    const double C33813 = C89185 - (C33783 * C88836) / q + C89191 - C89238 / q;
    const double C34049 = -(C57760 * de + C34033 * C88835 + C89238) / q;
    const double C33552 = -(C57025 * de + C33536 * C88835 + C89226) / q;
    const double C33768 = -(C33783 * C88834 + C89226) / q;
    const double C35045 =
        C34670 / C52258 - (C35015 * C88836) / q + C89126 - C89226 / q;
    const double C34232 = C89123 - (C34216 * C88836) / q + C89255 - C89256 / q;
    const double C34352 = -(C58342 * de + C34344 * C88835 + C89256) / q;
    const double C34464 = -(C34472 * C88834 + C89256) / q;
    const double C90040 = C89624 / q;
    const double C50522 =
        C82956 / C52258 - (C50552 * C88834) / q - (C47377 * p) / q;
    const double C47345 = C50552 / q - (C47377 * C88834) / q - (C47768 * p) / q;
    const double C47752 =
        (3 * C47377) / C52258 - (C47768 * C88834) / q - (C78314 * p) / q;
    const double C47344 = C48272 / q - (C47376 * C88834) / q - (C77557 * p) / q;
    const double C48240 =
        C48280 / C52258 - (C48272 * C88834) / q - (C47376 * p) / q;
    const double C49320 = -(C49336 * C88834 + C89821) / q;
    const double C51084 =
        C89873 - (C59280 * de + C51054 * C88836) / q + C89698 - C89821 / q;
    const double C50492 =
        C89666 - (C58813 * de + C50462 * C88836) / q - C89874 / q;
    const double C51069 = -(C51054 * C88835 + C89874) / q;
    const double C51727 = -(C51742 * C88834 + C89874) / q;
    const double C49352 = -(C49336 * C88835 + C89824) / q;
    const double C51772 =
        C89871 - (C59514 * de + C51742 * C88836) / q + C89790 - C89824 / q;
    const double C49360 =
        C89687 - (C57025 * de + C49328 * C88836) / q + C89696 - C89825 / q;
    const double C49809 = -(C49825 * C88834 + C89825) / q;
    const double C49605 =
        C89782 - (C57381 * de + C49575 * C88836) / q + C89788 - C89835 / q;
    const double C49841 = -(C49825 * C88835 + C89835) / q;
    const double C49344 = -(C49328 * C88835 + C89823) / q;
    const double C49560 = -(C49575 * C88834 + C89823) / q;
    const double C50837 = C50462 / C52258 -
                          (C59047 * de + C50807 * C88836) / q + C89723 -
                          C89823 / q;
    const double C50024 =
        C89720 - (C58105 * de + C50008 * C88836) / q + C89852 - C89853 / q;
    const double C50144 = -(C50136 * C88835 + C89853) / q;
    const double C50256 = -(C50264 * C88834 + C89853) / q;
    const double C15399 = -(C15365 * C88836 + C88418) / q;
    const double C88852 = C88444 / q;
    const double C88506 = C15366 / C52258;
    const double C15348 = (2 * C15366) / q -
                          (C52376 * de + C15365 * C88834) / q -
                          (C52380 * p) / q;
    const double C88450 = C15374 / C52258;
    const double C15349 = (3 * C15374) / C52258 -
                          (C52392 * de + C15366 * C88834) / q -
                          (C15365 * p) / q;
    const double C15357 =
        C52411 / q - (C52407 * de + C15374 * C88834) / q - (C15366 * p) / q;
    const double C88417 = C15633 * p;
    const double C88451 = C15632 * p;
    const double C88416 = C16104 * p;
    const double C16120 = -(C16104 * C88836 + C88508) / q;
    const double C88488 = C15888 * p;
    const double C88891 = C88452 / q;
    const double C15664 = -(C15632 * C88836 + C88452) / q;
    const double C88420 = C15889 * p;
    const double C88419 = C16232 * p;
    const double C16224 = (3 * C15889) / C52258 -
                          (C54208 * de + C16232 * C88834) / q - C88418 / q;
    const double C88453 = C16360 * p;
    const double C16520 = -(C54758 * de + C16536 * C88834 + C88535) / q;
    const double C18833 = C88672 - (C18818 * C88835) / q + C88466 - C88535 / q;
    const double C16544 = C88445 - (C16528 * C88835) / q + C88464 - C88537 / q;
    const double C16769 = -(C55242 * de + C16785 * C88834 + C88537) / q;
    const double C88912 = C88579 / q;
    const double C16568 = -(C16536 * C88836 + C88539) / q;
    const double C20113 = C88683 - (C20098 * C88835) / q + C88575 - C88539 / q;
    const double C88927 = C88620 / q;
    const double C17916 = -(C57324 * de + C17931 * C88834 + C88620) / q;
    const double C18848 = -(C18818 * C88836 + C88673) / q;
    const double C19425 = C88498 - (C19410 * C88835) / q - C88673 / q;
    const double C20083 = -(C59457 * de + C20098 * C88834 + C88673) / q;
    const double C17392 =
        C88520 - (C17384 * C88835) / q + C55974 / q - C88599 / q;
    const double C16560 = -(C16528 * C88836 + C88538) / q;
    const double C17025 = -(C55728 * de + C17041 * C88834 + C88538) / q;
    const double C19178 =
        C19410 / C52258 - (C19163 * C88835) / q + C88525 - C88538 / q;
    const double C88922 = C88573 / q;
    const double C17024 = -(C55712 * de + C17040 * C88834 + C88573) / q;
    const double C17672 = -(C56923 * de + C17688 * C88834 + C88618) / q;
    const double C19440 = C88672 - (C19410 * C88836) / q - C88618 / q;
    const double C88928 = C88621 / q;
    const double C88930 = C88636 / q;
    const double C88911 = C88578 / q;
    const double C17712 = C88483 - (C17680 * C88836) / q - C88622 / q;
    const double C18161 = -(C57639 * de + C18177 * C88834 + C88622) / q;
    const double C17057 =
        C88577 - (C17041 * C88835) / q + C55764 / q - C88558 / q;
    const double C15382 = C52426 / q - (C15365 * C88835) / q - C88840;
    const double C16096 =
        (3 * C15633) / C52258 - (C53971 * de + C16104 * C88834) / q - C88840;
    const double C15648 =
        C15633 / q - (C15632 * C88835) / q + C53085 / q - C88855;
    const double C17248 = C88598 - (C56140 * de + C17256 * C88834) / q - C88855;
    const double C15872 =
        C17680 / q - (C53543 * de + C15888 * C88834) / q - C88871;
    const double C15904 = C53577 / q - (C15888 * C88835) / q - C88874;
    const double C16376 = C15633 / C52258 - (C16360 * C88836) / q - C88874;
    const double C18384 =
        C17931 / C52258 - (C58047 * de + C18392 * C88834) / q - C88874;
    const double C15920 = C15889 / q - (C15888 * C88836) / q - C88876;
    const double C18512 = C88660 - (C58284 * de + C18520 * C88834) / q - C88876;
    const double C16240 = C53805 / q - (C16232 * C88835) / q - C88887;
    const double C16352 = C88520 - (C54446 * de + C16360 * C88834) / q - C88887;
    const double C17056 =
        C17931 / q - (C17040 * C88835) / q + C55747 / q - C88910;
    const double C17528 = C88598 - (C17512 * C88836) / q - C88910;
    const double C18192 = C57657 / q - (C18176 * C88835) / q - C88932;
    const double C18664 =
        (3 * C17931) / C52258 - (C18648 * C88836) / q - C88932;
    const double C18408 = C88520 - (C18392 * C88836) / q - C88934;
    const double C18528 = C57883 / q - (C18520 * C88835) / q - C88934;
    const double C32312 = -(C32328 * C88834 + C89135) / q;
    const double C34625 =
        C89272 - (C58756 * de + C34610 * C88835) / q + C89066 - C89135 / q;
    const double C32336 =
        C89045 - (C54743 * de + C32320 * C88835) / q + C89064 - C89137 / q;
    const double C32561 = -(C32577 * C88834 + C89137) / q;
    const double C32360 = -(C32328 * C88836 + C89139) / q;
    const double C35905 =
        C89283 - (C59457 * de + C35890 * C88835) / q + C89175 - C89139 / q;
    const double C34640 = -(C34610 * C88836 + C89273) / q;
    const double C35217 =
        C89098 - (C59223 * de + C35202 * C88835) / q - C89273 / q;
    const double C35875 = -(C35890 * C88834 + C89273) / q;
    const double C33184 =
        C89120 - (C56377 * de + C33176 * C88835) / q + C68132 / q - C89199 / q;
    const double C32352 = -(C32320 * C88836 + C89138) / q;
    const double C32817 = -(C32833 * C88834 + C89138) / q;
    const double C34970 = C35202 / C52258 -
                          (C58990 * de + C34955 * C88835) / q + C89125 -
                          C89138 / q;
    const double C89525 = C89221 / q;
    const double C89527 = C89236 / q;
    const double C32849 =
        C89177 - (C55728 * de + C32833 * C88835) / q + C67926 / q - C89158 / q;
    const double C48104 = -(C48120 * C88834 + C89732) / q;
    const double C50417 = C89869 - (C50402 * C88835) / q + C89663 - C89732 / q;
    const double C48128 = C89642 - (C48112 * C88835) / q + C89661 - C89734 / q;
    const double C48353 = -(C48369 * C88834 + C89734) / q;
    const double C48152 = -(C54758 * de + C48120 * C88836 + C89736) / q;
    const double C51697 = C89880 - (C51682 * C88835) / q + C89772 - C89736 / q;
    const double C50432 = -(C58756 * de + C50402 * C88836 + C89870) / q;
    const double C51009 = C89695 - (C50994 * C88835) / q - C89870 / q;
    const double C51667 = -(C51682 * C88834 + C89870) / q;
    const double C48976 =
        C89717 - (C48968 * C88835) / q + C80128 / q - C89796 / q;
    const double C48144 = -(C54743 * de + C48112 * C88836 + C89735) / q;
    const double C48609 = -(C48625 * C88834 + C89735) / q;
    const double C50762 =
        C50994 / C52258 - (C50747 * C88835) / q + C89722 - C89735 / q;
    const double C90122 = C89818 / q;
    const double C90124 = C89833 / q;
    const double C48641 =
        C89774 - (C48625 * C88835) / q + C79922 / q - C89755 / q;
    const double C88851 = C88441 / q;
    const double C15323 = -(C15306 * C88835 + C88406) / q;
    const double C18743 =
        C88667 - (C58696 * de + C18758 * C88834) / q + C88437 - C88406 / q;
    const double C88870 = C88481 / q;
    const double C15340 = -(C15306 * C88836 + C88411) / q;
    const double C19335 =
        C88681 - (C59163 * de + C19350 * C88834) / q + C88477 - C88411 / q;
    const double C15601 = -(C15569 * C88836 + C88443) / q;
    const double C15841 = -(C15825 * C88835 + C88443) / q;
    const double C19088 = C20038 / C52258 -
                          (C58930 * de + C19103 * C88834) / q + C88518 -
                          C88443 / q;
    const double C16456 =
        C54642 / q - (C54638 * de + C16472 * C88834) / q - C88894;
    const double C18773 = C88669 - (C18758 * C88835) / q - C88894;
    const double C88850 = C88439 / q;
    const double C17009 = C88527 - (C16977 * C88836) / q - C88909;
    const double C17886 = C88610 - (C17871 * C88835) / q - C88909;
    const double C88888 = C88442 / q;
    const double C15600 = -(C15568 * C88836 + C88442) / q;
    const double C16480 = C88434 - (C16464 * C88835) / q - C88895;
    const double C16705 =
        C55122 / q - (C55118 * de + C16721 * C88834) / q - C88895;
    const double C16961 =
        C55608 / q - (C55604 * de + C16977 * C88834) / q - C88906;
    const double C19118 = C19350 / C52258 - (C19103 * C88835) / q - C88906;
    const double C17608 =
        C56807 / q - (C56803 * de + C17624 * C88834) / q - C88925;
    const double C19380 = C88669 - (C19350 * C88836) / q - C88925;
    const double C88889 = C88479 / q;
    const double C15840 = -(C15824 * C88835 + C88479) / q;
    const double C88869 = C88480 / q;
    const double C17856 =
        C57267 / q - (C57263 * de + C17871 * C88834) / q - C88929;
    const double C19133 = C18758 / C52258 - (C19103 * C88836) / q - C88929;
    const double C17648 = C88474 - (C17616 * C88836) / q - C88926;
    const double C18097 =
        C57519 / q - (C57515 * de + C18113 * C88834) / q - C88926;
    const double C15552 =
        C16464 / q - (C52924 * de + C15568 * C88834) / q + C52928 / q - C88849;
    const double C16080 = C88504 - (C16072 * C88835) / q - C88849;
    const double C15808 =
        C17616 / q - (C53416 * de + C15824 * C88834) / q + C53420 / q - C88868;
    const double C16216 = C88504 - (C16200 * C88836) / q - C88868;
    const double C16704 =
        C55105 / q - (C55101 * de + C16720 * C88834) / q - C88900;
    const double C17232 =
        (3 * C16464) / C52258 - (C17224 * C88835) / q - C88900;
    const double C16960 =
        C55591 / q - (C55587 * de + C16976 * C88834) / q - C88905;
    const double C17368 = C16464 / C52258 - (C17352 * C88836) / q - C88905;
    const double C18368 = C17616 / C52258 - (C18360 * C88835) / q - C88905;
    const double C16992 = C17871 / q - (C16976 * C88835) / q - C88907;
    const double C17496 = C88594 - (C17480 * C88836) / q - C88907;
    const double C17008 = C16977 / q - (C16976 * C88836) / q - C88908;
    const double C18624 = C88657 - (C18616 * C88835) / q - C88908;
    const double C17360 = C88517 - (C17352 * C88835) / q - C88921;
    const double C17472 =
        C56556 / q - (C56552 * de + C17480 * C88834) / q - C88921;
    const double C18096 =
        C57502 / q - (C57498 * de + C18112 * C88834) / q - C88931;
    const double C18504 =
        (3 * C17616) / C52258 - (C18488 * C88836) / q - C88931;
    const double C18376 = C88517 - (C18360 * C88836) / q - C88933;
    const double C18608 =
        C58464 / q - (C58460 * de + C18616 * C88834) / q - C88933;
    const double C31115 = -(C52222 * de + C31098 * C88835 + C89008) / q;
    const double C34535 = C89267 - (C34550 * C88834) / q + C89037 - C89008 / q;
    const double C31132 = -(C31098 * C88836 + C89011) / q;
    const double C35127 = C89281 - (C35142 * C88834) / q + C89077 - C89011 / q;
    const double C31393 = -(C31361 * C88836 + C89043) / q;
    const double C31633 = -(C53433 * de + C31617 * C88835 + C89043) / q;
    const double C34880 =
        C35830 / C52258 - (C34895 * C88834) / q + C89118 - C89043 / q;
    const double C46907 = -(C46890 * C88835 + C89605) / q;
    const double C50327 = C89864 - (C50342 * C88834) / q + C89634 - C89605 / q;
    const double C46924 = -(C52222 * de + C46890 * C88836 + C89608) / q;
    const double C50919 = C89878 - (C50934 * C88834) / q + C89674 - C89608 / q;
    const double C47185 = -(C52941 * de + C47153 * C88836 + C89640) / q;
    const double C47425 = -(C47409 * C88835 + C89640) / q;
    const double C50672 =
        C51622 / C52258 - (C50687 * C88834) / q + C89715 - C89640 / q;
    const double C89202 = C68395 * p;
    const double C89180 = C68000 * p;
    const double C89159 = C67524 * p;
    const double C89482 = C89112 / q;
    const double C89061 = C65501 * p;
    const double C34304 = C89260 - (C34312 * C88834) / q - C89473;
    const double C32800 = C32769 / q - (C32768 * C88836) / q - C89505;
    const double C34416 = C89257 - (C58460 * de + C34408 * C88835) / q - C89505;
    const double C89058 = C65472 * p;
    const double C32784 =
        C33663 / q - (C55587 * de + C32768 * C88835) / q - C89504;
    const double C33288 = C89194 - (C33272 * C88836) / q - C89504;
    const double C89054 = C65412 * p;
    const double C32960 = -(C32992 * C88834 + C68147 * p) / q;
    const double C89163 = C33336 * p;
    const double C89145 = C33208 * p;
    const double C33504 = C89083 - (C33472 * C88836) / q - C89222 / q;
    const double C33953 = -(C33969 * C88834 + C89222) / q;
    const double C34200 = C89120 - (C34184 * C88836) / q - C89531;
    const double C34320 =
        C69985 / q - (C58284 * de + C34312 * C88835) / q - C89531;
    const double C89524 = C89220 / q;
    const double C33708 = -(C33723 * C88834 + C89220) / q;
    const double C89144 = C33080 * p;
    const double C33984 =
        C69763 / q - (C57623 * de + C33968 * C88835) / q - C89529;
    const double C34456 =
        (3 * C33723) / C52258 - (C34440 * C88836) / q - C89529;
    const double C89146 = C32897 * p;
    const double C33843 = -(C33873 * C88834 + C34264 * p) / q;
    const double C34248 =
        C33873 / C52258 - (C34264 * C88834) / q - (C70275 * p) / q;
    const double C89508 = C89178 / q;
    const double C89187 = C32896 * p;
    const double C34504 = -(C34520 * C88834 + C70733 * p) / q;
    const double C32928 =
        C32897 / q - (C32896 * C88836) / q + C68029 / q - C89513;
    const double C34480 = C89262 - (C58579 * de + C34472 * C88835) / q - C89513;
    const double C89512 = C89184 / q;
    const double C89200 = C32641 / C52258;
    const double C32961 = -(C32993 * C88834 + C33256 * p) / q;
    const double C33240 =
        C32993 / C52258 - (C33256 * C88834) / q - (C68652 * p) / q;
    const double C32656 = (2 * C32641) / q -
                          (C55345 * de + C32640 * C88835) / q -
                          (C67584 * p) / q;
    const double C33368 = -(C33384 * C88834 + C68881 * p) / q;
    const double C32672 = C67553 / q - (C32640 * C88836) / q - C89500;
    const double C33344 =
        (3 * C32897) / C52258 - (C56671 * de + C33336 * C88835) / q - C89500;
    const double C32848 =
        C33723 / q - (C55712 * de + C32832 * C88835) / q + C67909 / q - C89507;
    const double C33320 = C89198 - (C33304 * C88836) / q - C89507;
    const double C89140 = C32392 / C52258;
    const double C32408 =
        C67128 / q - (C54877 * de + C32392 * C88835) / q - (C32641 * p) / q;
    const double C32657 = (3 * C32392) / C52258 -
                          (C55361 * de + C32641 * C88835) / q -
                          (C32640 * p) / q;
    const double C89509 = C89179 / q;
    const double C89141 = C32384 * p;
    const double C36010 = -(C36040 * C88834 + C35105 * p) / q;
    const double C89519 = C89173 / q;
    const double C32816 = -(C32832 * C88834 + C89173) / q;
    const double C33464 = -(C33480 * C88834 + C89218) / q;
    const double C35232 = C89272 - (C35202 * C88836) / q - C89218 / q;
    const double C89063 = C32184 * p;
    const double C34168 = C89117 - (C34152 * C88836) / q - C89530;
    const double C34400 = C70547 / q - (C34408 * C88834) / q - C89530;
    const double C89028 = C32056 * p;
    const double C32064 = -(C54266 * de + C32056 * C88835 + C89112) / q;
    const double C89025 = C31928 * p;
    const double C33888 = C69613 / q - (C33904 * C88834) / q - C89528;
    const double C34296 =
        (3 * C33408) / C52258 - (C34280 * C88836) / q - C89528;
    const double C89029 = C31745 * p;
    const double C89466 = C89080 / q;
    const double C33440 = C89074 - (C33408 * C88836) / q - C89523;
    const double C33889 = C69629 / q - (C33905 * C88834) / q - C89523;
    const double C89096 = C31744 * p;
    const double C31776 =
        C31745 / q - (C31744 * C88836) / q + C65921 / q - C89478;
    const double C34336 = C89262 - (C34344 * C88834) / q - C89478;
    const double C89053 = C32152 * p;
    const double C33152 = C89117 - (C56317 * de + C33144 * C88835) / q - C89518;
    const double C33264 = C68695 / q - (C33272 * C88834) / q - C89518;
    const double C89019 = C32024 * p;
    const double C32032 =
        C66026 / q - (C54208 * de + C32024 * C88835) / q - C89484;
    const double C32144 = C89120 - (C32152 * C88834) / q - C89484;
    const double C89016 = C31896 * p;
    const double C31912 = -(C31896 * C88836 + C89108) / q;
    const double C89490 = C89094 / q;
    const double C31760 = -(C53664 * de + C31744 * C88835 + C89094) / q;
    const double C89026 = C31489 * p;
    const double C31920 =
        (3 * C31489) / C52258 - (C31928 * C88834) / q - C89024 / q;
    const double C89486 = C89079 / q;
    const double C31632 = -(C53416 * de + C31616 * C88835 + C89079) / q;
    const double C33648 = C69385 / q - (C33663 * C88834) / q - C89526;
    const double C34925 = C34550 / C52258 - (C34895 * C88836) / q - C89526;
    const double C89060 = C31488 * p;
    const double C32216 = C35105 / q - (C32232 * C88834) / q - (C66778 * p) / q;
    const double C35075 =
        C36040 / C52258 - (C35105 * C88834) / q - (C32232 * p) / q;
    const double C89088 = C31680 * p;
    const double C31664 = C33472 / q - (C31680 * C88834) / q - C89468;
    const double C31696 =
        C65802 / q - (C53543 * de + C31680 * C88835) / q - C89471;
    const double C34176 = C33723 / C52258 - (C34184 * C88834) / q - C89471;
    const double C32801 = C89127 - (C32769 * C88836) / q - C89506;
    const double C33678 = C89210 - (C57263 * de + C33663 * C88835) / q - C89506;
    const double C32752 = C67758 / q - (C32768 * C88834) / q - C89502;
    const double C33160 = C32256 / C52258 - (C33144 * C88836) / q - C89502;
    const double C34160 =
        C33408 / C52258 - (C57986 * de + C34152 * C88835) / q - C89502;
    const double C89488 = C89052 / q;
    const double C89020 = C31681 * p;
    const double C31712 = C31681 / q - (C31680 * C88836) / q - C89473;
    const double C32016 =
        (3 * C31681) / C52258 - (C32024 * C88834) / q - C89018 / q;
    const double C89485 = C89042 / q;
    const double C31392 = -(C31360 * C88836 + C89042) / q;
    const double C32753 = C67774 / q - (C32769 * C88834) / q - C89503;
    const double C34910 =
        C35142 / C52258 - (C58930 * de + C34895 * C88835) / q - C89503;
    const double C32496 = C67286 / q - (C32512 * C88834) / q - C89497;
    const double C33024 =
        (3 * C32256) / C52258 - (C56079 * de + C33016 * C88835) / q - C89497;
    const double C89017 = C31425 * p;
    const double C32168 = C31425 / C52258 - (C32152 * C88836) / q - C89471;
    const double C89447 = C89039 / q;
    const double C32272 = C89034 - (C54623 * de + C32256 * C88835) / q - C89492;
    const double C32497 = C67302 / q - (C32513 * C88834) / q - C89492;
    const double C89051 = C31424 * p;
    const double C31456 = -(C31424 * C88836 + C89052) / q;
    const double C31440 =
        C31425 / q - (C53051 * de + C31424 * C88835) / q + C65324 / q - C89452;
    const double C33040 = C89198 - (C33048 * C88834) / q - C89452;
    const double C89059 = C31234 / C52258;
    const double C89467 = C89081 / q;
    const double C89475 = C89089 / q;
    const double C89110 = C31226 / C52258;
    const double C31217 = C64846 / q - (C31234 * C88834) / q - (C31226 * p) / q;
    const double C33400 = C68938 / q - (C33416 * C88834) / q - C89522;
    const double C35172 = C89269 - (C35142 * C88836) / q - C89522;
    const double C31208 =
        (2 * C31226) / q - (C31225 * C88834) / q - (C64817 * p) / q;
    const double C31209 =
        (3 * C31234) / C52258 - (C31226 * C88834) / q - (C31225 * p) / q;
    const double C31242 = -(C52557 * de + C31225 * C88835 + C89024) / q;
    const double C31600 =
        C33408 / q - (C31616 * C88834) / q + C65650 / q - C89465;
    const double C32008 = C89104 - (C31992 * C88836) / q - C89465;
    const double C89050 = C31166 / C52258;
    const double C89448 = C89041 / q;
    const double C89449 = C89044 / q;
    const double C89106 = C31158 / C52258;
    const double C31149 = C64668 / q - (C31166 * C88834) / q - (C31158 * p) / q;
    const double C32248 = C66836 / q - (C32264 * C88834) / q - C89491;
    const double C34565 = C89269 - (C58696 * de + C34550 * C88835) / q - C89491;
    const double C31140 =
        (2 * C31158) / q - (C31157 * C88834) / q - (C64639 * p) / q;
    const double C31141 =
        (3 * C31166) / C52258 - (C31158 * C88834) / q - (C31157 * p) / q;
    const double C31191 = -(C31157 * C88836 + C89018) / q;
    const double C31174 =
        C64683 / q - (C52376 * de + C31157 * C88835) / q - C89437;
    const double C31888 =
        (3 * C31425) / C52258 - (C31896 * C88834) / q - C89437;
    const double C31344 =
        C32256 / q - (C31360 * C88834) / q + C65172 / q - C89446;
    const double C31872 = C89104 - (C53910 * de + C31864 * C88835) / q - C89446;
    const double C89799 = C80391 * p;
    const double C89777 = C79996 * p;
    const double C89756 = C79520 * p;
    const double C90079 = C89709 / q;
    const double C89658 = C77497 * p;
    const double C50096 = C89857 - (C50104 * C88834) / q - C90070;
    const double C48592 =
        C48561 / q - (C55587 * de + C48560 * C88836) / q - C90102;
    const double C50208 = C89854 - (C50200 * C88835) / q - C90102;
    const double C89655 = C77468 * p;
    const double C48576 = C49455 / q - (C48560 * C88835) / q - C90101;
    const double C49080 = C89791 - (C56552 * de + C49064 * C88836) / q - C90101;
    const double C89651 = C77408 * p;
    const double C48752 = -(C48784 * C88834 + C80143 * p) / q;
    const double C89760 = C49128 * p;
    const double C89742 = C49000 * p;
    const double C49296 =
        C89680 - (C56908 * de + C49264 * C88836) / q - C89819 / q;
    const double C49745 = -(C49761 * C88834 + C89819) / q;
    const double C49992 = C89717 - (C58047 * de + C49976 * C88836) / q - C90128;
    const double C50112 = C81981 / q - (C50104 * C88835) / q - C90128;
    const double C90121 = C89817 / q;
    const double C49500 = -(C49515 * C88834 + C89817) / q;
    const double C89741 = C48872 * p;
    const double C49776 = C81759 / q - (C49760 * C88835) / q - C90126;
    const double C50248 =
        (3 * C49515) / C52258 - (C58521 * de + C50232 * C88836) / q - C90126;
    const double C89743 = C48689 * p;
    const double C49635 = -(C49665 * C88834 + C50056 * p) / q;
    const double C50040 =
        C49665 / C52258 - (C50056 * C88834) / q - (C82271 * p) / q;
    const double C90105 = C89775 / q;
    const double C89784 = C48688 * p;
    const double C50296 = -(C50312 * C88834 + C82729 * p) / q;
    const double C48720 =
        C48689 / q - (C55835 * de + C48688 * C88836) / q + C80025 / q - C90110;
    const double C50272 = C89859 - (C50264 * C88835) / q - C90110;
    const double C90109 = C89781 / q;
    const double C89797 = C48433 / C52258;
    const double C48753 = -(C48785 * C88834 + C49048 * p) / q;
    const double C49032 =
        C48785 / C52258 - (C49048 * C88834) / q - (C80648 * p) / q;
    const double C48448 =
        (2 * C48433) / q - (C48432 * C88835) / q - (C79580 * p) / q;
    const double C49160 = -(C49176 * C88834 + C80877 * p) / q;
    const double C48464 =
        C79549 / q - (C55345 * de + C48432 * C88836) / q - C90097;
    const double C49136 =
        (3 * C48689) / C52258 - (C49128 * C88835) / q - C90097;
    const double C48640 =
        C49515 / q - (C48624 * C88835) / q + C79905 / q - C90104;
    const double C49112 = C89795 - (C56613 * de + C49096 * C88836) / q - C90104;
    const double C89737 = C48184 / C52258;
    const double C48200 = C79124 / q - (C48184 * C88835) / q - (C48433 * p) / q;
    const double C48449 =
        (3 * C48184) / C52258 - (C48433 * C88835) / q - (C48432 * p) / q;
    const double C90106 = C89776 / q;
    const double C89738 = C48176 * p;
    const double C51802 = -(C51832 * C88834 + C50897 * p) / q;
    const double C90116 = C89770 / q;
    const double C48608 = -(C48624 * C88834 + C89770) / q;
    const double C49256 = -(C49272 * C88834 + C89815) / q;
    const double C51024 =
        C89869 - (C59223 * de + C50994 * C88836) / q - C89815 / q;
    const double C89660 = C47976 * p;
    const double C49960 = C89714 - (C57986 * de + C49944 * C88836) / q - C90127;
    const double C50192 = C82543 / q - (C50200 * C88834) / q - C90127;
    const double C89625 = C47848 * p;
    const double C47856 = -(C47848 * C88835 + C89709) / q;
    const double C89622 = C47720 * p;
    const double C49680 = C81609 / q - (C49696 * C88834) / q - C90125;
    const double C50088 =
        (3 * C49200) / C52258 - (C58224 * de + C50072 * C88836) / q - C90125;
    const double C89626 = C47537 * p;
    const double C90063 = C89677 / q;
    const double C49232 = C89671 - (C56788 * de + C49200 * C88836) / q - C90120;
    const double C49681 = C81625 / q - (C49697 * C88834) / q - C90120;
    const double C89693 = C47536 * p;
    const double C47568 =
        C47537 / q - (C53664 * de + C47536 * C88836) / q + C77917 / q - C90075;
    const double C50128 = C89859 - (C50136 * C88834) / q - C90075;
    const double C89650 = C47944 * p;
    const double C48944 = C89714 - (C48936 * C88835) / q - C90115;
    const double C49056 = C80691 / q - (C49064 * C88834) / q - C90115;
    const double C89616 = C47816 * p;
    const double C47824 = C78022 / q - (C47816 * C88835) / q - C90081;
    const double C47936 = C89717 - (C47944 * C88834) / q - C90081;
    const double C89613 = C47688 * p;
    const double C47704 = -(C53971 * de + C47688 * C88836 + C89705) / q;
    const double C90087 = C89691 / q;
    const double C47552 = -(C47536 * C88835 + C89691) / q;
    const double C89623 = C47281 * p;
    const double C47712 =
        (3 * C47281) / C52258 - (C47720 * C88834) / q - C89621 / q;
    const double C90083 = C89676 / q;
    const double C47424 = -(C47408 * C88835 + C89676) / q;
    const double C49440 = C81381 / q - (C49455 * C88834) / q - C90123;
    const double C50717 =
        C50342 / C52258 - (C58930 * de + C50687 * C88836) / q - C90123;
    const double C89657 = C47280 * p;
    const double C48008 = C50897 / q - (C48024 * C88834) / q - (C78774 * p) / q;
    const double C50867 =
        C51832 / C52258 - (C50897 * C88834) / q - (C48024 * p) / q;
    const double C89685 = C47472 * p;
    const double C47456 = C49264 / q - (C47472 * C88834) / q - C90065;
    const double C47488 = C77798 / q - (C47472 * C88835) / q - C90068;
    const double C49968 = C49515 / C52258 - (C49976 * C88834) / q - C90068;
    const double C48593 = C89724 - (C55604 * de + C48561 * C88836) / q - C90103;
    const double C49470 = C89807 - (C49455 * C88835) / q - C90103;
    const double C48544 = C79754 / q - (C48560 * C88834) / q - C90099;
    const double C48952 =
        C48048 / C52258 - (C56317 * de + C48936 * C88836) / q - C90099;
    const double C49952 = C49200 / C52258 - (C49944 * C88835) / q - C90099;
    const double C90085 = C89649 / q;
    const double C89617 = C47473 * p;
    const double C47504 =
        C47473 / q - (C53543 * de + C47472 * C88836) / q - C90070;
    const double C47808 =
        (3 * C47473) / C52258 - (C47816 * C88834) / q - C89615 / q;
    const double C90082 = C89639 / q;
    const double C47184 = -(C52924 * de + C47152 * C88836 + C89639) / q;
    const double C48545 = C79770 / q - (C48561 * C88834) / q - C90100;
    const double C50702 = C50934 / C52258 - (C50687 * C88835) / q - C90100;
    const double C48288 = C79282 / q - (C48304 * C88834) / q - C90094;
    const double C48816 =
        (3 * C48048) / C52258 - (C48808 * C88835) / q - C90094;
    const double C89614 = C47217 * p;
    const double C47960 =
        C47217 / C52258 - (C54446 * de + C47944 * C88836) / q - C90068;
    const double C90044 = C89636 / q;
    const double C48064 = C89631 - (C48048 * C88835) / q - C90089;
    const double C48289 = C79298 / q - (C48305 * C88834) / q - C90089;
    const double C89648 = C47216 * p;
    const double C47248 = -(C53051 * de + C47216 * C88836 + C89649) / q;
    const double C47232 =
        C47217 / q - (C47216 * C88835) / q + C77320 / q - C90049;
    const double C48832 = C89795 - (C48840 * C88834) / q - C90049;
    const double C89656 = C47026 / C52258;
    const double C90064 = C89678 / q;
    const double C90072 = C89686 / q;
    const double C89707 = C47018 / C52258;
    const double C47009 = C76842 / q - (C47026 * C88834) / q - (C47018 * p) / q;
    const double C49192 = C80934 / q - (C49208 * C88834) / q - C90119;
    const double C50964 = C89866 - (C59163 * de + C50934 * C88836) / q - C90119;
    const double C47000 =
        (2 * C47018) / q - (C47017 * C88834) / q - (C76813 * p) / q;
    const double C47001 =
        (3 * C47026) / C52258 - (C47018 * C88834) / q - (C47017 * p) / q;
    const double C47034 = -(C47017 * C88835 + C89621) / q;
    const double C47392 =
        C49200 / q - (C47408 * C88834) / q + C77646 / q - C90062;
    const double C47800 = C89701 - (C54148 * de + C47784 * C88836) / q - C90062;
    const double C89647 = C46958 / C52258;
    const double C90045 = C89638 / q;
    const double C90046 = C89641 / q;
    const double C89703 = C46950 / C52258;
    const double C46941 = C76664 / q - (C46958 * C88834) / q - (C46950 * p) / q;
    const double C48040 = C78832 / q - (C48056 * C88834) / q - C90088;
    const double C50357 = C89866 - (C50342 * C88835) / q - C90088;
    const double C46932 =
        (2 * C46950) / q - (C46949 * C88834) / q - (C76635 * p) / q;
    const double C46933 =
        (3 * C46958) / C52258 - (C46950 * C88834) / q - (C46949 * p) / q;
    const double C46983 = -(C52376 * de + C46949 * C88836 + C89615) / q;
    const double C46966 = C76679 / q - (C46949 * C88835) / q - C90034;
    const double C47680 =
        (3 * C47217) / C52258 - (C47688 * C88834) / q - C90034;
    const double C47136 =
        C48048 / q - (C47152 * C88834) / q + C77168 / q - C90043;
    const double C47664 = C89701 - (C47656 * C88835) / q - C90043;
    const double C15467 = C52607 / q - (C15433 * C88836) / q - C88846;
    const double C16256 =
        (3 * C15953) / C52258 - (C54266 * de + C16264 * C88834) / q - C88846;
    const double C15936 =
        C17744 / q - (C53664 * de + C15952 * C88834) / q - C88878;
    const double C16280 = C88510 - (C16264 * C88836) / q + C88516 - C88878;
    const double C88861 = C88460 / q;
    const double C15459 = -(C15442 * C88835 + C88426) / q;
    const double C18863 =
        C88674 - (C58813 * de + C18878 * C88834) / q - C88426 / q;
    const double C88848 = C88429 / q;
    const double C88882 = C88496 / q;
    const double C88847 = C88428 / q;
    const double C88863 = C88463 / q;
    const double C15969 = -(C15953 * C88835 + C88463) / q;
    const double C15451 = -(C15434 * C88835 + C88425) / q;
    const double C15681 =
        C88455 - (C53186 * de + C15697 * C88834) / q - C88425 / q;
    const double C16584 = -(C54877 * de + C16600 * C88834 + C88541) / q;
    const double C18893 = C88676 - (C18878 * C88835) / q - C88541 / q;
    const double C17120 = C17991 / q - (C17104 * C88835) / q - C88915;
    const double C17560 = C88600 - (C17544 * C88836) / q + C88609 - C88915;
    const double C88899 = C88546 / q;
    const double C88917 = C88587 / q;
    const double C88898 = C88545 / q;
    const double C17089 = -(C55851 * de + C17105 * C88834 + C88545) / q;
    const double C88904 = C88563 / q;
    const double C16608 = C88455 - (C16592 * C88835) / q - C88544 / q;
    const double C16833 = -(C55361 * de + C16849 * C88834 + C88544) / q;
    const double C88857 = C88454 / q;
    const double C88860 = C88458 / q;
    const double C88862 = C88461 / q;
    const double C16408 =
        C15697 / C52258 - (C16392 * C88836) / q + C88524 - C88893;
    const double C18416 =
        C17991 / C52258 - (C58105 * de + C18424 * C88834) / q - C88893;
    const double C16152 = C88511 - (C16136 * C88836) / q - C88885;
    const double C16384 = C88523 - (C54504 * de + C16392 * C88834) / q - C88885;
    const double C16832 = -(C55345 * de + C16848 * C88834 + C88559) / q;
    const double C17296 =
        (3 * C16592) / C52258 - (C17288 * C88835) / q - C88559 / q;
    const double C88924 = C88580 / q;
    const double C17088 = -(C55835 * de + C17104 * C88834 + C88580) / q;
    const double C88920 = C88602 / q;
    const double C17536 = -(C56671 * de + C17544 * C88834 + C88602) / q;
    const double C31259 = C64861 / q - (C31225 * C88836) / q - C89443;
    const double C32048 =
        (3 * C31745) / C52258 - (C32056 * C88834) / q - C89443;
    const double C47051 =
        C76857 / q - (C52557 * de + C47017 * C88836) / q - C90040;
    const double C47840 =
        (3 * C47537) / C52258 - (C47848 * C88834) / q - C90040;
    const double C15616 =
        C16528 / q - (C53051 * de + C15632 * C88834) / q - C88852;
    const double C16112 = C88506 - (C16104 * C88835) / q + C88507 - C88852;
    const double C16248 = C88506 - (C16232 * C88836) / q - C88871;
    const double C88842 = C88417 / q;
    const double C88856 = C88451 / q;
    const double C88841 = C88416 / q;
    const double C88877 = C88488 / q;
    const double C16368 =
        C15889 / C52258 - (C16360 * C88835) / q + C88522 - C88891;
    const double C17376 =
        C17041 / C52258 - (C56377 * de + C17384 * C88834) / q - C88891;
    const double C15408 = -(C15374 * C88836 + C88420) / q;
    const double C19395 =
        C88683 - (C59223 * de + C19410 * C88834) / q - C88420 / q;
    const double C15400 = -(C15366 * C88836 + C88419) / q;
    const double C15873 =
        C88483 - (C53559 * de + C15889 * C88834) / q - C88419 / q;
    const double C88875 = C88453 / q;
    const double C15665 = -(C15633 * C88836 + C88453) / q;
    const double C17073 = C88534 - (C17041 * C88836) / q - C88912;
    const double C17946 = C88617 - (C17931 * C88835) / q + C88574 - C88912;
    const double C17696 = C88497 - (C17680 * C88835) / q - C88927;
    const double C19193 = C18818 / C52258 - (C19163 * C88836) / q - C88927;
    const double C17400 = C16528 / C52258 - (C17384 * C88836) / q - C88922;
    const double C18400 =
        C17680 / C52258 - (C18392 * C88835) / q + C88652 - C88922;
    const double C17704 = C56956 / q - (C17688 * C88835) / q - C88928;
    const double C20128 = C88671 - (C20098 * C88836) / q - C88928;
    const double C17961 = C88577 - (C17931 * C88836) / q - C88930;
    const double C18193 = C57673 / q - (C18177 * C88835) / q - C88930;
    const double C17072 = C17041 / q - (C17040 * C88836) / q - C88911;
    const double C18656 = C88660 - (C18648 * C88835) / q + C88666 - C88911;
    const double C33496 =
        C69083 / q - (C56923 * de + C33480 * C88835) / q - C89525;
    const double C35920 = C89271 - (C35890 * C88836) / q - C89525;
    const double C33753 = C89177 - (C33723 * C88836) / q - C89527;
    const double C33985 =
        C69779 / q - (C57639 * de + C33969 * C88835) / q - C89527;
    const double C49288 = C81079 / q - (C49272 * C88835) / q - C90122;
    const double C51712 = C89868 - (C59457 * de + C51682 * C88836) / q - C90122;
    const double C49545 = C89774 - (C57324 * de + C49515 * C88836) / q - C90124;
    const double C49777 = C81775 / q - (C49761 * C88835) / q - C90124;
    const double C15585 = C88440 - (C15569 * C88835) / q - C88851;
    const double C16448 =
        C88527 - (C54623 * de + C16464 * C88834) / q + C88435 - C88851;
    const double C15857 = C88440 - (C15825 * C88836) / q - C88870;
    const double C17600 =
        C88610 - (C56788 * de + C17616 * C88834) / q + C88475 - C88870;
    const double C15584 = C15569 / q - (C15568 * C88835) / q - C88850;
    const double C17216 =
        C88594 - (C56079 * de + C17224 * C88834) / q + C88595 - C88850;
    const double C16336 = C15825 / C52258 - (C16328 * C88835) / q - C88888;
    const double C17344 =
        C16977 / C52258 - (C56317 * de + C17352 * C88834) / q + C88604 - C88888;
    const double C16344 = C15569 / C52258 - (C16328 * C88836) / q - C88889;
    const double C18352 =
        C17871 / C52258 - (C57986 * de + C18360 * C88834) / q + C88649 - C88889;
    const double C15856 = C15825 / q - (C15824 * C88836) / q - C88869;
    const double C18480 =
        C88657 - (C58224 * de + C18488 * C88834) / q + C88658 - C88869;
    const double C89517 = C89202 / q;
    const double C33328 = -(C33336 * C88834 + C89202) / q;
    const double C89521 = C89180 / q;
    const double C32880 = -(C32896 * C88834 + C89180) / q;
    const double C32624 = -(C32640 * C88834 + C89159) / q;
    const double C33088 = (3 * C32384) / C52258 -
                          (C56198 * de + C33080 * C88835) / q - C89159 / q;
    const double C31944 = C89111 - (C31928 * C88836) / q - C89482;
    const double C32176 = C89123 - (C32184 * C88834) / q - C89482;
    const double C89459 = C89061 / q;
    const double C89457 = C89058 / q;
    const double C89454 = C89054 / q;
    const double C89501 = C89163 / q;
    const double C89495 = C89145 / q;
    const double C32881 = -(C32897 * C88834 + C89145) / q;
    const double C33488 = C89097 - (C56908 * de + C33472 * C88835) / q - C89524;
    const double C34985 = C34610 / C52258 - (C34955 * C88836) / q - C89524;
    const double C32400 =
        C89055 - (C54862 * de + C32384 * C88835) / q - C89144 / q;
    const double C32625 = -(C32641 * C88834 + C89144) / q;
    const double C89496 = C89146 / q;
    const double C32864 = C32833 / q - (C32832 * C88836) / q - C89508;
    const double C34448 =
        C89260 - (C58521 * de + C34440 * C88835) / q + C89266 - C89508;
    const double C89514 = C89187 / q;
    const double C32912 =
        C33783 / q - (C55835 * de + C32896 * C88835) / q - C89512;
    const double C33352 = C89200 - (C33336 * C88836) / q + C89209 - C89512;
    const double C32865 = C89134 - (C32833 * C88836) / q - C89509;
    const double C33738 =
        C89217 - (C57324 * de + C33723 * C88835) / q + C89174 - C89509;
    const double C32376 = -(C32392 * C88834 + C89141) / q;
    const double C34685 =
        C89276 - (C58813 * de + C34670 * C88835) / q - C89141 / q;
    const double C33192 = C32320 / C52258 - (C33176 * C88836) / q - C89519;
    const double C34192 =
        C33472 / C52258 - (C58047 * de + C34184 * C88835) / q + C89252 - C89519;
    const double C89460 = C89063 / q;
    const double C31761 = -(C53680 * de + C31745 * C88835 + C89063) / q;
    const double C89444 = C89028 / q;
    const double C31243 = -(C52573 * de + C31226 * C88835 + C89025) / q;
    const double C31473 = C89055 - (C31489 * C88834) / q - C89025 / q;
    const double C89445 = C89029 / q;
    const double C31648 = C31617 / q - (C31616 * C88836) / q - C89466;
    const double C34272 = C89257 - (C34280 * C88834) / q + C89258 - C89466;
    const double C89479 = C89096 / q;
    const double C89472 = C89053 / q;
    const double C31457 = -(C31425 * C88836 + C89053) / q;
    const double C31192 = -(C31158 * C88836 + C89019) / q;
    const double C31665 = C89083 - (C31681 * C88834) / q - C89019 / q;
    const double C89438 = C89016 / q;
    const double C32200 =
        C31489 / C52258 - (C32184 * C88836) / q + C89124 - C89490;
    const double C34208 = C33783 / C52258 - (C34216 * C88834) / q - C89490;
    const double C31251 = -(C52588 * de + C31234 * C88835 + C89026) / q;
    const double C34655 = C89274 - (C34670 * C88834) / q - C89026 / q;
    const double C32136 = C31361 / C52258 - (C32120 * C88836) / q - C89486;
    const double C34144 =
        C33663 / C52258 - (C34152 * C88834) / q + C89249 - C89486;
    const double C89458 = C89060 / q;
    const double C89474 = C89088 / q;
    const double C32160 =
        C31681 / C52258 - (C54446 * de + C32152 * C88835) / q + C89122 - C89488;
    const double C33168 = C32833 / C52258 - (C33176 * C88834) / q - C89488;
    const double C31200 = -(C31166 * C88836 + C89020) / q;
    const double C35187 = C89283 - (C35202 * C88834) / q - C89020 / q;
    const double C32128 =
        C31617 / C52258 - (C54384 * de + C32120 * C88835) / q - C89485;
    const double C33136 =
        C32769 / C52258 - (C33144 * C88834) / q + C89204 - C89485;
    const double C89439 = C89017 / q;
    const double C31376 =
        C31361 / q - (C52924 * de + C31360 * C88835) / q - C89447;
    const double C33008 = C89194 - (C33016 * C88834) / q + C89195 - C89447;
    const double C89453 = C89051 / q;
    const double C31649 = C89040 - (C31617 * C88836) / q - C89467;
    const double C33392 = C89210 - (C33408 * C88834) / q + C89075 - C89467;
    const double C31728 = C33536 / q - (C31744 * C88834) / q - C89475;
    const double C32072 = C89110 - (C32056 * C88836) / q + C89116 - C89475;
    const double C31377 = C89040 - (C52941 * de + C31361 * C88835) / q - C89448;
    const double C32240 = C89127 - (C32256 * C88834) / q + C89035 - C89448;
    const double C31408 = C32320 / q - (C31424 * C88834) / q - C89449;
    const double C31904 =
        C89106 - (C53971 * de + C31896 * C88835) / q + C89107 - C89449;
    const double C32040 = C89106 - (C32024 * C88836) / q - C89468;
    const double C90114 = C89799 / q;
    const double C49120 = -(C49128 * C88834 + C89799) / q;
    const double C90118 = C89777 / q;
    const double C48672 = -(C48688 * C88834 + C89777) / q;
    const double C48416 = -(C48432 * C88834 + C89756) / q;
    const double C48880 =
        (3 * C48176) / C52258 - (C48872 * C88835) / q - C89756 / q;
    const double C47736 = C89708 - (C54029 * de + C47720 * C88836) / q - C90079;
    const double C47968 = C89720 - (C47976 * C88834) / q - C90079;
    const double C90056 = C89658 / q;
    const double C90054 = C89655 / q;
    const double C90051 = C89651 / q;
    const double C90098 = C89760 / q;
    const double C90092 = C89742 / q;
    const double C48673 = -(C48689 * C88834 + C89742) / q;
    const double C49280 = C89694 - (C49264 * C88835) / q - C90121;
    const double C50777 =
        C50402 / C52258 - (C58990 * de + C50747 * C88836) / q - C90121;
    const double C48192 = C89652 - (C48176 * C88835) / q - C89741 / q;
    const double C48417 = -(C48433 * C88834 + C89741) / q;
    const double C90093 = C89743 / q;
    const double C48656 =
        C48625 / q - (C55712 * de + C48624 * C88836) / q - C90105;
    const double C50240 = C89857 - (C50232 * C88835) / q + C89863 - C90105;
    const double C90111 = C89784 / q;
    const double C48704 = C49575 / q - (C48688 * C88835) / q - C90109;
    const double C49144 =
        C89797 - (C56671 * de + C49128 * C88836) / q + C89806 - C90109;
    const double C48657 = C89731 - (C55728 * de + C48625 * C88836) / q - C90106;
    const double C49530 = C89814 - (C49515 * C88835) / q + C89771 - C90106;
    const double C48168 = -(C48184 * C88834 + C89738) / q;
    const double C50477 = C89873 - (C50462 * C88835) / q - C89738 / q;
    const double C48984 =
        C48112 / C52258 - (C56377 * de + C48968 * C88836) / q - C90116;
    const double C49984 =
        C49264 / C52258 - (C49976 * C88835) / q + C89849 - C90116;
    const double C90057 = C89660 / q;
    const double C47553 = -(C47537 * C88835 + C89660) / q;
    const double C90041 = C89625 / q;
    const double C47035 = -(C47018 * C88835 + C89622) / q;
    const double C47265 = C89652 - (C47281 * C88834) / q - C89622 / q;
    const double C90042 = C89626 / q;
    const double C47440 =
        C47409 / q - (C53416 * de + C47408 * C88836) / q - C90063;
    const double C50064 = C89854 - (C50072 * C88834) / q + C89855 - C90063;
    const double C90076 = C89693 / q;
    const double C90069 = C89650 / q;
    const double C47249 = -(C53067 * de + C47217 * C88836 + C89650) / q;
    const double C46984 = -(C52392 * de + C46950 * C88836 + C89616) / q;
    const double C47457 = C89680 - (C47473 * C88834) / q - C89616 / q;
    const double C90035 = C89613 / q;
    const double C47992 =
        C47281 / C52258 - (C54504 * de + C47976 * C88836) / q + C89721 - C90087;
    const double C50000 = C49575 / C52258 - (C50008 * C88834) / q - C90087;
    const double C47043 = -(C47026 * C88835 + C89623) / q;
    const double C50447 = C89871 - (C50462 * C88834) / q - C89623 / q;
    const double C47928 =
        C47153 / C52258 - (C54384 * de + C47912 * C88836) / q - C90083;
    const double C49936 =
        C49455 / C52258 - (C49944 * C88834) / q + C89846 - C90083;
    const double C90055 = C89657 / q;
    const double C90071 = C89685 / q;
    const double C47952 =
        C47473 / C52258 - (C47944 * C88835) / q + C89719 - C90085;
    const double C48960 = C48625 / C52258 - (C48968 * C88834) / q - C90085;
    const double C46992 = -(C52407 * de + C46958 * C88836 + C89617) / q;
    const double C50979 = C89880 - (C50994 * C88834) / q - C89617 / q;
    const double C47920 = C47409 / C52258 - (C47912 * C88835) / q - C90082;
    const double C48928 =
        C48561 / C52258 - (C48936 * C88834) / q + C89801 - C90082;
    const double C90036 = C89614 / q;
    const double C47168 = C47153 / q - (C47152 * C88835) / q - C90044;
    const double C48800 = C89791 - (C48808 * C88834) / q + C89792 - C90044;
    const double C90050 = C89648 / q;
    const double C47441 = C89637 - (C53433 * de + C47409 * C88836) / q - C90064;
    const double C49184 = C89807 - (C49200 * C88834) / q + C89672 - C90064;
    const double C47520 = C49328 / q - (C47536 * C88834) / q - C90072;
    const double C47864 =
        C89707 - (C54266 * de + C47848 * C88836) / q + C89713 - C90072;
    const double C47169 = C89637 - (C47153 * C88835) / q - C90045;
    const double C48032 = C89724 - (C48048 * C88834) / q + C89632 - C90045;
    const double C47200 = C48112 / q - (C47216 * C88834) / q - C90046;
    const double C47696 = C89703 - (C47688 * C88835) / q + C89704 - C90046;
    const double C47832 = C89703 - (C54208 * de + C47816 * C88836) / q - C90065;
    const double C15713 = C88459 - (C15697 * C88835) / q - C88861;
    const double C16576 = C88540 - (C54862 * de + C16592 * C88834) / q - C88861;
    const double C15476 = C52639 / q - (C15442 * C88836) / q - C88848;
    const double C19455 = C88685 - (C59280 * de + C19470 * C88834) / q - C88848;
    const double C15985 = C88459 - (C15953 * C88836) / q + C88491 - C88882;
    const double C17728 = C88623 - (C57025 * de + C17744 * C88834) / q - C88882;
    const double C15468 = C52623 / q - (C15434 * C88836) / q - C88847;
    const double C15937 = C88490 - (C53680 * de + C15953 * C88834) / q - C88847;
    const double C15729 = C88462 - (C15697 * C88836) / q - C88863;
    const double C19208 =
        C20158 / C52258 - (C59047 * de + C19223 * C88834) / q - C88863;
    const double C16632 = C54910 / q - (C16600 * C88836) / q - C88899;
    const double C20173 = C88685 - (C20158 * C88835) / q - C88899;
    const double C17137 = C88540 - (C17105 * C88836) / q + C88581 - C88917;
    const double C18006 = C88623 - (C17991 * C88835) / q - C88917;
    const double C16624 = C88467 - (C16592 * C88836) / q - C88898;
    const double C19238 = C19470 / C52258 - (C19223 * C88835) / q - C88898;
    const double C16881 = C55089 / q - (C16849 * C88836) / q - C88904;
    const double C17121 = C88585 - (C17105 * C88835) / q - C88904;
    const double C15680 =
        C16592 / q - (C53170 * de + C15696 * C88834) / q - C88857;
    const double C16144 = C88510 - (C16136 * C88835) / q - C88857;
    const double C15712 = C15697 / q - (C15696 * C88835) / q - C88860;
    const double C17280 = C88600 - (C56198 * de + C17288 * C88834) / q - C88860;
    const double C15728 = C53204 / q - (C15696 * C88836) / q - C88862;
    const double C16400 = C15953 / C52258 - (C16392 * C88835) / q - C88862;
    const double C17408 =
        C17105 / C52258 - (C56435 * de + C17416 * C88834) / q - C88862;
    const double C17432 =
        C16592 / C52258 - (C17416 * C88836) / q + C88607 - C88924;
    const double C18432 = C17744 / C52258 - (C18424 * C88835) / q - C88924;
    const double C17304 = C55073 / q - (C17288 * C88836) / q - C88920;
    const double C17424 = C88523 - (C17416 * C88835) / q - C88920;
    const double C15391 = C52458 / q - (C15374 * C88835) / q - C88842;
    const double C18803 = C88671 - (C58756 * de + C18818 * C88834) / q - C88842;
    const double C15649 = C88450 - (C15633 * C88835) / q + C88446 - C88856;
    const double C16512 = C88534 - (C54743 * de + C16528 * C88834) / q - C88856;
    const double C15383 = C52442 / q - (C15366 * C88835) / q - C88841;
    const double C15617 = C88445 - (C53067 * de + C15633 * C88834) / q - C88841;
    const double C15921 = C88450 - (C15889 * C88836) / q - C88877;
    const double C17664 = C88617 - (C56908 * de + C17680 * C88834) / q - C88877;
    const double C15905 = C53593 / q - (C15889 * C88835) / q - C88875;
    const double C19148 =
        C20098 / C52258 - (C58990 * de + C19163 * C88834) / q - C88875;
    const double C33096 = C67255 / q - (C33080 * C88836) / q - C89517;
    const double C33216 = C89123 - (C56435 * de + C33208 * C88835) / q - C89517;
    const double C33224 =
        C32384 / C52258 - (C33208 * C88836) / q + C89207 - C89521;
    const double C34224 =
        C33536 / C52258 - (C58105 * de + C34216 * C88835) / q - C89521;
    const double C31520 = C65441 / q - (C31488 * C88836) / q - C89459;
    const double C32192 =
        C31745 / C52258 - (C54504 * de + C32184 * C88835) / q - C89459;
    const double C33200 = C32897 / C52258 - (C33208 * C88834) / q - C89459;
    const double C31504 =
        C31489 / q - (C53170 * de + C31488 * C88835) / q - C89457;
    const double C33072 = C89200 - (C33080 * C88834) / q - C89457;
    const double C31472 = C32384 / q - (C31488 * C88834) / q - C89454;
    const double C31936 = C89110 - (C54029 * de + C31928 * C88835) / q - C89454;
    const double C32673 = C67271 / q - (C32641 * C88836) / q - C89501;
    const double C32913 = C89185 - (C55851 * de + C32897 * C88835) / q - C89501;
    const double C32416 = C89067 - (C32384 * C88836) / q - C89495;
    const double C35030 =
        C35262 / C52258 - (C59047 * de + C35015 * C88835) / q - C89495;
    const double C32424 = C67098 / q - (C32392 * C88836) / q - C89496;
    const double C35965 = C89285 - (C59514 * de + C35950 * C88835) / q - C89496;
    const double C32929 = C89140 - (C32897 * C88836) / q + C89181 - C89514;
    const double C33798 = C89223 - (C57381 * de + C33783 * C88835) / q - C89514;
    const double C31521 = C89062 - (C31489 * C88836) / q - C89460;
    const double C35000 = C35950 / C52258 - (C35015 * C88834) / q - C89460;
    const double C31260 = C64877 / q - (C31226 * C88836) / q - C89444;
    const double C31729 = C89090 - (C31745 * C88834) / q - C89444;
    const double C31268 = C64893 / q - (C31234 * C88836) / q - C89445;
    const double C35247 = C89285 - (C35262 * C88834) / q - C89445;
    const double C31777 = C89059 - (C31745 * C88836) / q + C89091 - C89479;
    const double C33520 = C89223 - (C33536 * C88834) / q - C89479;
    const double C31697 =
        C65818 / q - (C53559 * de + C31681 * C88835) / q - C89472;
    const double C34940 = C35890 / C52258 - (C34955 * C88834) / q - C89472;
    const double C31175 =
        C64699 / q - (C52392 * de + C31158 * C88835) / q - C89438;
    const double C31409 = C89045 - (C31425 * C88834) / q - C89438;
    const double C31505 = C89059 - (C53186 * de + C31489 * C88835) / q - C89458;
    const double C32368 = C89140 - (C32384 * C88834) / q - C89458;
    const double C31713 = C89050 - (C31681 * C88836) / q - C89474;
    const double C33456 = C89217 - (C33472 * C88834) / q - C89474;
    const double C31183 =
        C64715 / q - (C52407 * de + C31166 * C88835) / q - C89439;
    const double C34595 = C89271 - (C34610 * C88834) / q - C89439;
    const double C31441 =
        C89050 - (C53067 * de + C31425 * C88835) / q + C89046 - C89453;
    const double C32304 = C89134 - (C32320 * C88834) / q - C89453;
    const double C48888 =
        C79251 / q - (C56198 * de + C48872 * C88836) / q - C90114;
    const double C49008 = C89720 - (C49000 * C88835) / q - C90114;
    const double C49016 =
        C48176 / C52258 - (C56435 * de + C49000 * C88836) / q + C89804 - C90118;
    const double C50016 = C49328 / C52258 - (C50008 * C88835) / q - C90118;
    const double C47312 =
        C77437 / q - (C53170 * de + C47280 * C88836) / q - C90056;
    const double C47984 = C47537 / C52258 - (C47976 * C88835) / q - C90056;
    const double C48992 = C48689 / C52258 - (C49000 * C88834) / q - C90056;
    const double C47296 = C47281 / q - (C47280 * C88835) / q - C90054;
    const double C48864 = C89797 - (C48872 * C88834) / q - C90054;
    const double C47264 = C48176 / q - (C47280 * C88834) / q - C90051;
    const double C47728 = C89707 - (C47720 * C88835) / q - C90051;
    const double C48465 =
        C79267 / q - (C55361 * de + C48433 * C88836) / q - C90098;
    const double C48705 = C89782 - (C48689 * C88835) / q - C90098;
    const double C48208 = C89664 - (C54862 * de + C48176 * C88836) / q - C90092;
    const double C50822 = C51054 / C52258 - (C50807 * C88835) / q - C90092;
    const double C48216 =
        C79094 / q - (C54877 * de + C48184 * C88836) / q - C90093;
    const double C51757 = C89882 - (C51742 * C88835) / q - C90093;
    const double C48721 =
        C89737 - (C55851 * de + C48689 * C88836) / q + C89778 - C90111;
    const double C49590 = C89820 - (C49575 * C88835) / q - C90111;
    const double C47313 = C89659 - (C53186 * de + C47281 * C88836) / q - C90057;
    const double C50792 = C51742 / C52258 - (C50807 * C88834) / q - C90057;
    const double C47052 =
        C76873 / q - (C52573 * de + C47018 * C88836) / q - C90041;
    const double C47521 = C89687 - (C47537 * C88834) / q - C90041;
    const double C47060 =
        C76889 / q - (C52588 * de + C47026 * C88836) / q - C90042;
    const double C51039 = C89882 - (C51054 * C88834) / q - C90042;
    const double C47569 =
        C89656 - (C53680 * de + C47537 * C88836) / q + C89688 - C90076;
    const double C49312 = C89820 - (C49328 * C88834) / q - C90076;
    const double C47489 = C77814 / q - (C47473 * C88835) / q - C90069;
    const double C50732 = C51682 / C52258 - (C50747 * C88834) / q - C90069;
    const double C46967 = C76695 / q - (C46950 * C88835) / q - C90035;
    const double C47201 = C89642 - (C47217 * C88834) / q - C90035;
    const double C47297 = C89656 - (C47281 * C88835) / q - C90055;
    const double C48160 = C89737 - (C48176 * C88834) / q - C90055;
    const double C47505 = C89647 - (C53559 * de + C47473 * C88836) / q - C90071;
    const double C49248 = C89814 - (C49264 * C88834) / q - C90071;
    const double C46975 = C76711 / q - (C46958 * C88835) / q - C90036;
    const double C50387 = C89868 - (C50402 * C88834) / q - C90036;
    const double C47233 = C89647 - (C47217 * C88835) / q + C89643 - C90050;
    const double C48096 = C89731 - (C48112 * C88834) / q - C90050;
    etx[0] = C15280;
    etx[1] = C15281;
    etx[2] = C15289;
    etx[3] = C15297;
    etx[4] = C15298;
    etx[5] = C15306;
    etx[6] = C15314;
    etx[7] = C15315;
    etx[8] = C15323;
    etx[9] = C15331;
    etx[10] = C15332;
    etx[11] = C15340;
    etx[12] = C15348;
    etx[13] = C15349;
    etx[14] = C15357;
    etx[15] = C15365;
    etx[16] = C15366;
    etx[17] = C15374;
    etx[18] = C15382;
    etx[19] = C15383;
    etx[20] = C15391;
    etx[21] = C15399;
    etx[22] = C15400;
    etx[23] = C15408;
    etx[24] = C15416;
    etx[25] = C15417;
    etx[26] = C15425;
    etx[27] = C15433;
    etx[28] = C15434;
    etx[29] = C15442;
    etx[30] = C15450;
    etx[31] = C15451;
    etx[32] = C15459;
    etx[33] = C15467;
    etx[34] = C15468;
    etx[35] = C15476;
    etx[36] = C15484;
    etx[37] = C15485;
    etx[38] = C15493;
    etx[39] = C15501;
    etx[40] = C15502;
    etx[41] = C15510;
    etx[42] = C15518;
    etx[43] = C15519;
    etx[44] = C15527;
    etx[45] = C15535;
    etx[46] = C15536;
    etx[47] = C15544;
    etx[48] = C15552;
    etx[49] = C15553;
    etx[50] = C15568;
    etx[51] = C15569;
    etx[52] = C15584;
    etx[53] = C15585;
    etx[54] = C15600;
    etx[55] = C15601;
    etx[56] = C15616;
    etx[57] = C15617;
    etx[58] = C15632;
    etx[59] = C15633;
    etx[60] = C15648;
    etx[61] = C15649;
    etx[62] = C15664;
    etx[63] = C15665;
    etx[64] = C15680;
    etx[65] = C15681;
    etx[66] = C15696;
    etx[67] = C15697;
    etx[68] = C15712;
    etx[69] = C15713;
    etx[70] = C15728;
    etx[71] = C15729;
    etx[72] = C15744;
    etx[73] = C15745;
    etx[74] = C15760;
    etx[75] = C15761;
    etx[76] = C15776;
    etx[77] = C15777;
    etx[78] = C15792;
    etx[79] = C15793;
    etx[80] = C15808;
    etx[81] = C15809;
    etx[82] = C15824;
    etx[83] = C15825;
    etx[84] = C15840;
    etx[85] = C15841;
    etx[86] = C15856;
    etx[87] = C15857;
    etx[88] = C15872;
    etx[89] = C15873;
    etx[90] = C15888;
    etx[91] = C15889;
    etx[92] = C15904;
    etx[93] = C15905;
    etx[94] = C15920;
    etx[95] = C15921;
    etx[96] = C15936;
    etx[97] = C15937;
    etx[98] = C15952;
    etx[99] = C15953;
    etx[100] = C15968;
    etx[101] = C15969;
    etx[102] = C15984;
    etx[103] = C15985;
    etx[104] = C16000;
    etx[105] = C16001;
    etx[106] = C16016;
    etx[107] = C16017;
    etx[108] = C16032;
    etx[109] = C16033;
    etx[110] = C16048;
    etx[111] = C16049;
    etx[112] = C16064;
    etx[113] = C16072;
    etx[114] = C16080;
    etx[115] = C16088;
    etx[116] = C16096;
    etx[117] = C16104;
    etx[118] = C16112;
    etx[119] = C16120;
    etx[120] = C16128;
    etx[121] = C16136;
    etx[122] = C16144;
    etx[123] = C16152;
    etx[124] = C16160;
    etx[125] = C16168;
    etx[126] = C16176;
    etx[127] = C16184;
    etx[128] = C16192;
    etx[129] = C16200;
    etx[130] = C16208;
    etx[131] = C16216;
    etx[132] = C16224;
    etx[133] = C16232;
    etx[134] = C16240;
    etx[135] = C16248;
    etx[136] = C16256;
    etx[137] = C16264;
    etx[138] = C16272;
    etx[139] = C16280;
    etx[140] = C16288;
    etx[141] = C16296;
    etx[142] = C16304;
    etx[143] = C16312;
    etx[144] = C16320;
    etx[145] = C16328;
    etx[146] = C16336;
    etx[147] = C16344;
    etx[148] = C16352;
    etx[149] = C16360;
    etx[150] = C16368;
    etx[151] = C16376;
    etx[152] = C16384;
    etx[153] = C16392;
    etx[154] = C16400;
    etx[155] = C16408;
    etx[156] = C16416;
    etx[157] = C16424;
    etx[158] = C16432;
    etx[159] = C16440;
    etx[160] = C16448;
    etx[161] = C16456;
    etx[162] = C16464;
    etx[163] = C16472;
    etx[164] = C16480;
    etx[165] = C16488;
    etx[166] = C16496;
    etx[167] = C16504;
    etx[168] = C16512;
    etx[169] = C16520;
    etx[170] = C16528;
    etx[171] = C16536;
    etx[172] = C16544;
    etx[173] = C16552;
    etx[174] = C16560;
    etx[175] = C16568;
    etx[176] = C16576;
    etx[177] = C16584;
    etx[178] = C16592;
    etx[179] = C16600;
    etx[180] = C16608;
    etx[181] = C16616;
    etx[182] = C16624;
    etx[183] = C16632;
    etx[184] = C16640;
    etx[185] = C16648;
    etx[186] = C16656;
    etx[187] = C16664;
    etx[188] = C16672;
    etx[189] = C16680;
    etx[190] = C16688;
    etx[191] = C16696;
    etx[192] = C16704;
    etx[193] = C16705;
    etx[194] = C16720;
    etx[195] = C16721;
    etx[196] = C16736;
    etx[197] = C16737;
    etx[198] = C16752;
    etx[199] = C16753;
    etx[200] = C16768;
    etx[201] = C16769;
    etx[202] = C16784;
    etx[203] = C16785;
    etx[204] = C16800;
    etx[205] = C16801;
    etx[206] = C16816;
    etx[207] = C16817;
    etx[208] = C16832;
    etx[209] = C16833;
    etx[210] = C16848;
    etx[211] = C16849;
    etx[212] = C16864;
    etx[213] = C16865;
    etx[214] = C16880;
    etx[215] = C16881;
    etx[216] = C16896;
    etx[217] = C16897;
    etx[218] = C16912;
    etx[219] = C16913;
    etx[220] = C16928;
    etx[221] = C16929;
    etx[222] = C16944;
    etx[223] = C16945;
    etx[224] = C16960;
    etx[225] = C16961;
    etx[226] = C16976;
    etx[227] = C16977;
    etx[228] = C16992;
    etx[229] = C16993;
    etx[230] = C17008;
    etx[231] = C17009;
    etx[232] = C17024;
    etx[233] = C17025;
    etx[234] = C17040;
    etx[235] = C17041;
    etx[236] = C17056;
    etx[237] = C17057;
    etx[238] = C17072;
    etx[239] = C17073;
    etx[240] = C17088;
    etx[241] = C17089;
    etx[242] = C17104;
    etx[243] = C17105;
    etx[244] = C17120;
    etx[245] = C17121;
    etx[246] = C17136;
    etx[247] = C17137;
    etx[248] = C17152;
    etx[249] = C17153;
    etx[250] = C17168;
    etx[251] = C17169;
    etx[252] = C17184;
    etx[253] = C17185;
    etx[254] = C17200;
    etx[255] = C17201;
    etx[256] = C17216;
    etx[257] = C17224;
    etx[258] = C17232;
    etx[259] = C17240;
    etx[260] = C17248;
    etx[261] = C17256;
    etx[262] = C17264;
    etx[263] = C17272;
    etx[264] = C17280;
    etx[265] = C17288;
    etx[266] = C17296;
    etx[267] = C17304;
    etx[268] = C17312;
    etx[269] = C17320;
    etx[270] = C17328;
    etx[271] = C17336;
    etx[272] = C17344;
    etx[273] = C17352;
    etx[274] = C17360;
    etx[275] = C17368;
    etx[276] = C17376;
    etx[277] = C17384;
    etx[278] = C17392;
    etx[279] = C17400;
    etx[280] = C17408;
    etx[281] = C17416;
    etx[282] = C17424;
    etx[283] = C17432;
    etx[284] = C17440;
    etx[285] = C17448;
    etx[286] = C17456;
    etx[287] = C17464;
    etx[288] = C17472;
    etx[289] = C17480;
    etx[290] = C17488;
    etx[291] = C17496;
    etx[292] = C17504;
    etx[293] = C17512;
    etx[294] = C17520;
    etx[295] = C17528;
    etx[296] = C17536;
    etx[297] = C17544;
    etx[298] = C17552;
    etx[299] = C17560;
    etx[300] = C17568;
    etx[301] = C17576;
    etx[302] = C17584;
    etx[303] = C17592;
    etx[304] = C17600;
    etx[305] = C17608;
    etx[306] = C17616;
    etx[307] = C17624;
    etx[308] = C17632;
    etx[309] = C17640;
    etx[310] = C17648;
    etx[311] = C17656;
    etx[312] = C17664;
    etx[313] = C17672;
    etx[314] = C17680;
    etx[315] = C17688;
    etx[316] = C17696;
    etx[317] = C17704;
    etx[318] = C17712;
    etx[319] = C17720;
    etx[320] = C17728;
    etx[321] = C17736;
    etx[322] = C17744;
    etx[323] = C17752;
    etx[324] = C17760;
    etx[325] = C17768;
    etx[326] = C17776;
    etx[327] = C17784;
    etx[328] = C17792;
    etx[329] = C17800;
    etx[330] = C17808;
    etx[331] = C17816;
    etx[332] = C17824;
    etx[333] = C17832;
    etx[334] = C17840;
    etx[335] = C17848;
    etx[336] = C17856;
    etx[337] = C17871;
    etx[338] = C17886;
    etx[339] = C17901;
    etx[340] = C17916;
    etx[341] = C17931;
    etx[342] = C17946;
    etx[343] = C17961;
    etx[344] = C17976;
    etx[345] = C17991;
    etx[346] = C18006;
    etx[347] = C18021;
    etx[348] = C18036;
    etx[349] = C18051;
    etx[350] = C18066;
    etx[351] = C18081;
    etx[352] = C18096;
    etx[353] = C18097;
    etx[354] = C18112;
    etx[355] = C18113;
    etx[356] = C18128;
    etx[357] = C18129;
    etx[358] = C18144;
    etx[359] = C18145;
    etx[360] = C18160;
    etx[361] = C18161;
    etx[362] = C18176;
    etx[363] = C18177;
    etx[364] = C18192;
    etx[365] = C18193;
    etx[366] = C18208;
    etx[367] = C18209;
    etx[368] = C18224;
    etx[369] = C18225;
    etx[370] = C18240;
    etx[371] = C18241;
    etx[372] = C18256;
    etx[373] = C18257;
    etx[374] = C18272;
    etx[375] = C18273;
    etx[376] = C18288;
    etx[377] = C18289;
    etx[378] = C18304;
    etx[379] = C18305;
    etx[380] = C18320;
    etx[381] = C18321;
    etx[382] = C18336;
    etx[383] = C18337;
    etx[384] = C18352;
    etx[385] = C18360;
    etx[386] = C18368;
    etx[387] = C18376;
    etx[388] = C18384;
    etx[389] = C18392;
    etx[390] = C18400;
    etx[391] = C18408;
    etx[392] = C18416;
    etx[393] = C18424;
    etx[394] = C18432;
    etx[395] = C18440;
    etx[396] = C18448;
    etx[397] = C18456;
    etx[398] = C18464;
    etx[399] = C18472;
    etx[400] = C18480;
    etx[401] = C18488;
    etx[402] = C18496;
    etx[403] = C18504;
    etx[404] = C18512;
    etx[405] = C18520;
    etx[406] = C18528;
    etx[407] = C18536;
    etx[408] = C18544;
    etx[409] = C18552;
    etx[410] = C18560;
    etx[411] = C18568;
    etx[412] = C18576;
    etx[413] = C18584;
    etx[414] = C18592;
    etx[415] = C18600;
    etx[416] = C18608;
    etx[417] = C18616;
    etx[418] = C18624;
    etx[419] = C18632;
    etx[420] = C18640;
    etx[421] = C18648;
    etx[422] = C18656;
    etx[423] = C18664;
    etx[424] = C18672;
    etx[425] = C18680;
    etx[426] = C18688;
    etx[427] = C18696;
    etx[428] = C18704;
    etx[429] = C18712;
    etx[430] = C18720;
    etx[431] = C18728;
    etx[432] = C18743;
    etx[433] = C18758;
    etx[434] = C18773;
    etx[435] = C18788;
    etx[436] = C18803;
    etx[437] = C18818;
    etx[438] = C18833;
    etx[439] = C18848;
    etx[440] = C18863;
    etx[441] = C18878;
    etx[442] = C18893;
    etx[443] = C18908;
    etx[444] = C18923;
    etx[445] = C18938;
    etx[446] = C18953;
    etx[447] = C18968;
    etx[448] = C19088;
    etx[449] = C19103;
    etx[450] = C19118;
    etx[451] = C19133;
    etx[452] = C19148;
    etx[453] = C19163;
    etx[454] = C19178;
    etx[455] = C19193;
    etx[456] = C19208;
    etx[457] = C19223;
    etx[458] = C19238;
    etx[459] = C19253;
    etx[460] = C19268;
    etx[461] = C19283;
    etx[462] = C19298;
    etx[463] = C19313;
    etx[464] = C19335;
    etx[465] = C19350;
    etx[466] = C19365;
    etx[467] = C19380;
    etx[468] = C19395;
    etx[469] = C19410;
    etx[470] = C19425;
    etx[471] = C19440;
    etx[472] = C19455;
    etx[473] = C19470;
    etx[474] = C19485;
    etx[475] = C19500;
    etx[476] = C19515;
    etx[477] = C19530;
    etx[478] = C19545;
    etx[479] = C19560;
    etx[480] = C20023;
    etx[481] = C20038;
    etx[482] = C20053;
    etx[483] = C20068;
    etx[484] = C20083;
    etx[485] = C20098;
    etx[486] = C20113;
    etx[487] = C20128;
    etx[488] = C20143;
    etx[489] = C20158;
    etx[490] = C20173;
    etx[491] = C20188;
    etx[492] = C20203;
    etx[493] = C20218;
    etx[494] = C20233;
    etx[495] = C20248;
    ety[0] = C31072;
    ety[1] = C31073;
    ety[2] = C31081;
    ety[3] = C31089;
    ety[4] = C31090;
    ety[5] = C31098;
    ety[6] = C31106;
    ety[7] = C31107;
    ety[8] = C31115;
    ety[9] = C31123;
    ety[10] = C31124;
    ety[11] = C31132;
    ety[12] = C31140;
    ety[13] = C31141;
    ety[14] = C31149;
    ety[15] = C31157;
    ety[16] = C31158;
    ety[17] = C31166;
    ety[18] = C31174;
    ety[19] = C31175;
    ety[20] = C31183;
    ety[21] = C31191;
    ety[22] = C31192;
    ety[23] = C31200;
    ety[24] = C31208;
    ety[25] = C31209;
    ety[26] = C31217;
    ety[27] = C31225;
    ety[28] = C31226;
    ety[29] = C31234;
    ety[30] = C31242;
    ety[31] = C31243;
    ety[32] = C31251;
    ety[33] = C31259;
    ety[34] = C31260;
    ety[35] = C31268;
    ety[36] = C31276;
    ety[37] = C31277;
    ety[38] = C31285;
    ety[39] = C31293;
    ety[40] = C31294;
    ety[41] = C31302;
    ety[42] = C31310;
    ety[43] = C31311;
    ety[44] = C31319;
    ety[45] = C31327;
    ety[46] = C31328;
    ety[47] = C31336;
    ety[48] = C31344;
    ety[49] = C31345;
    ety[50] = C31360;
    ety[51] = C31361;
    ety[52] = C31376;
    ety[53] = C31377;
    ety[54] = C31392;
    ety[55] = C31393;
    ety[56] = C31408;
    ety[57] = C31409;
    ety[58] = C31424;
    ety[59] = C31425;
    ety[60] = C31440;
    ety[61] = C31441;
    ety[62] = C31456;
    ety[63] = C31457;
    ety[64] = C31472;
    ety[65] = C31473;
    ety[66] = C31488;
    ety[67] = C31489;
    ety[68] = C31504;
    ety[69] = C31505;
    ety[70] = C31520;
    ety[71] = C31521;
    ety[72] = C31536;
    ety[73] = C31537;
    ety[74] = C31552;
    ety[75] = C31553;
    ety[76] = C31568;
    ety[77] = C31569;
    ety[78] = C31584;
    ety[79] = C31585;
    ety[80] = C31600;
    ety[81] = C31601;
    ety[82] = C31616;
    ety[83] = C31617;
    ety[84] = C31632;
    ety[85] = C31633;
    ety[86] = C31648;
    ety[87] = C31649;
    ety[88] = C31664;
    ety[89] = C31665;
    ety[90] = C31680;
    ety[91] = C31681;
    ety[92] = C31696;
    ety[93] = C31697;
    ety[94] = C31712;
    ety[95] = C31713;
    ety[96] = C31728;
    ety[97] = C31729;
    ety[98] = C31744;
    ety[99] = C31745;
    ety[100] = C31760;
    ety[101] = C31761;
    ety[102] = C31776;
    ety[103] = C31777;
    ety[104] = C31792;
    ety[105] = C31793;
    ety[106] = C31808;
    ety[107] = C31809;
    ety[108] = C31824;
    ety[109] = C31825;
    ety[110] = C31840;
    ety[111] = C31841;
    ety[112] = C31856;
    ety[113] = C31864;
    ety[114] = C31872;
    ety[115] = C31880;
    ety[116] = C31888;
    ety[117] = C31896;
    ety[118] = C31904;
    ety[119] = C31912;
    ety[120] = C31920;
    ety[121] = C31928;
    ety[122] = C31936;
    ety[123] = C31944;
    ety[124] = C31952;
    ety[125] = C31960;
    ety[126] = C31968;
    ety[127] = C31976;
    ety[128] = C31984;
    ety[129] = C31992;
    ety[130] = C32000;
    ety[131] = C32008;
    ety[132] = C32016;
    ety[133] = C32024;
    ety[134] = C32032;
    ety[135] = C32040;
    ety[136] = C32048;
    ety[137] = C32056;
    ety[138] = C32064;
    ety[139] = C32072;
    ety[140] = C32080;
    ety[141] = C32088;
    ety[142] = C32096;
    ety[143] = C32104;
    ety[144] = C32112;
    ety[145] = C32120;
    ety[146] = C32128;
    ety[147] = C32136;
    ety[148] = C32144;
    ety[149] = C32152;
    ety[150] = C32160;
    ety[151] = C32168;
    ety[152] = C32176;
    ety[153] = C32184;
    ety[154] = C32192;
    ety[155] = C32200;
    ety[156] = C32208;
    ety[157] = C32216;
    ety[158] = C32224;
    ety[159] = C32232;
    ety[160] = C32240;
    ety[161] = C32248;
    ety[162] = C32256;
    ety[163] = C32264;
    ety[164] = C32272;
    ety[165] = C32280;
    ety[166] = C32288;
    ety[167] = C32296;
    ety[168] = C32304;
    ety[169] = C32312;
    ety[170] = C32320;
    ety[171] = C32328;
    ety[172] = C32336;
    ety[173] = C32344;
    ety[174] = C32352;
    ety[175] = C32360;
    ety[176] = C32368;
    ety[177] = C32376;
    ety[178] = C32384;
    ety[179] = C32392;
    ety[180] = C32400;
    ety[181] = C32408;
    ety[182] = C32416;
    ety[183] = C32424;
    ety[184] = C32432;
    ety[185] = C32440;
    ety[186] = C32448;
    ety[187] = C32456;
    ety[188] = C32464;
    ety[189] = C32472;
    ety[190] = C32480;
    ety[191] = C32488;
    ety[192] = C32496;
    ety[193] = C32497;
    ety[194] = C32512;
    ety[195] = C32513;
    ety[196] = C32528;
    ety[197] = C32529;
    ety[198] = C32544;
    ety[199] = C32545;
    ety[200] = C32560;
    ety[201] = C32561;
    ety[202] = C32576;
    ety[203] = C32577;
    ety[204] = C32592;
    ety[205] = C32593;
    ety[206] = C32608;
    ety[207] = C32609;
    ety[208] = C32624;
    ety[209] = C32625;
    ety[210] = C32640;
    ety[211] = C32641;
    ety[212] = C32656;
    ety[213] = C32657;
    ety[214] = C32672;
    ety[215] = C32673;
    ety[216] = C32688;
    ety[217] = C32689;
    ety[218] = C32704;
    ety[219] = C32705;
    ety[220] = C32720;
    ety[221] = C32721;
    ety[222] = C32736;
    ety[223] = C32737;
    ety[224] = C32752;
    ety[225] = C32753;
    ety[226] = C32768;
    ety[227] = C32769;
    ety[228] = C32784;
    ety[229] = C32785;
    ety[230] = C32800;
    ety[231] = C32801;
    ety[232] = C32816;
    ety[233] = C32817;
    ety[234] = C32832;
    ety[235] = C32833;
    ety[236] = C32848;
    ety[237] = C32849;
    ety[238] = C32864;
    ety[239] = C32865;
    ety[240] = C32880;
    ety[241] = C32881;
    ety[242] = C32896;
    ety[243] = C32897;
    ety[244] = C32912;
    ety[245] = C32913;
    ety[246] = C32928;
    ety[247] = C32929;
    ety[248] = C32944;
    ety[249] = C32945;
    ety[250] = C32960;
    ety[251] = C32961;
    ety[252] = C32976;
    ety[253] = C32977;
    ety[254] = C32992;
    ety[255] = C32993;
    ety[256] = C33008;
    ety[257] = C33016;
    ety[258] = C33024;
    ety[259] = C33032;
    ety[260] = C33040;
    ety[261] = C33048;
    ety[262] = C33056;
    ety[263] = C33064;
    ety[264] = C33072;
    ety[265] = C33080;
    ety[266] = C33088;
    ety[267] = C33096;
    ety[268] = C33104;
    ety[269] = C33112;
    ety[270] = C33120;
    ety[271] = C33128;
    ety[272] = C33136;
    ety[273] = C33144;
    ety[274] = C33152;
    ety[275] = C33160;
    ety[276] = C33168;
    ety[277] = C33176;
    ety[278] = C33184;
    ety[279] = C33192;
    ety[280] = C33200;
    ety[281] = C33208;
    ety[282] = C33216;
    ety[283] = C33224;
    ety[284] = C33232;
    ety[285] = C33240;
    ety[286] = C33248;
    ety[287] = C33256;
    ety[288] = C33264;
    ety[289] = C33272;
    ety[290] = C33280;
    ety[291] = C33288;
    ety[292] = C33296;
    ety[293] = C33304;
    ety[294] = C33312;
    ety[295] = C33320;
    ety[296] = C33328;
    ety[297] = C33336;
    ety[298] = C33344;
    ety[299] = C33352;
    ety[300] = C33360;
    ety[301] = C33368;
    ety[302] = C33376;
    ety[303] = C33384;
    ety[304] = C33392;
    ety[305] = C33400;
    ety[306] = C33408;
    ety[307] = C33416;
    ety[308] = C33424;
    ety[309] = C33432;
    ety[310] = C33440;
    ety[311] = C33448;
    ety[312] = C33456;
    ety[313] = C33464;
    ety[314] = C33472;
    ety[315] = C33480;
    ety[316] = C33488;
    ety[317] = C33496;
    ety[318] = C33504;
    ety[319] = C33512;
    ety[320] = C33520;
    ety[321] = C33528;
    ety[322] = C33536;
    ety[323] = C33544;
    ety[324] = C33552;
    ety[325] = C33560;
    ety[326] = C33568;
    ety[327] = C33576;
    ety[328] = C33584;
    ety[329] = C33592;
    ety[330] = C33600;
    ety[331] = C33608;
    ety[332] = C33616;
    ety[333] = C33624;
    ety[334] = C33632;
    ety[335] = C33640;
    ety[336] = C33648;
    ety[337] = C33663;
    ety[338] = C33678;
    ety[339] = C33693;
    ety[340] = C33708;
    ety[341] = C33723;
    ety[342] = C33738;
    ety[343] = C33753;
    ety[344] = C33768;
    ety[345] = C33783;
    ety[346] = C33798;
    ety[347] = C33813;
    ety[348] = C33828;
    ety[349] = C33843;
    ety[350] = C33858;
    ety[351] = C33873;
    ety[352] = C33888;
    ety[353] = C33889;
    ety[354] = C33904;
    ety[355] = C33905;
    ety[356] = C33920;
    ety[357] = C33921;
    ety[358] = C33936;
    ety[359] = C33937;
    ety[360] = C33952;
    ety[361] = C33953;
    ety[362] = C33968;
    ety[363] = C33969;
    ety[364] = C33984;
    ety[365] = C33985;
    ety[366] = C34000;
    ety[367] = C34001;
    ety[368] = C34016;
    ety[369] = C34017;
    ety[370] = C34032;
    ety[371] = C34033;
    ety[372] = C34048;
    ety[373] = C34049;
    ety[374] = C34064;
    ety[375] = C34065;
    ety[376] = C34080;
    ety[377] = C34081;
    ety[378] = C34096;
    ety[379] = C34097;
    ety[380] = C34112;
    ety[381] = C34113;
    ety[382] = C34128;
    ety[383] = C34129;
    ety[384] = C34144;
    ety[385] = C34152;
    ety[386] = C34160;
    ety[387] = C34168;
    ety[388] = C34176;
    ety[389] = C34184;
    ety[390] = C34192;
    ety[391] = C34200;
    ety[392] = C34208;
    ety[393] = C34216;
    ety[394] = C34224;
    ety[395] = C34232;
    ety[396] = C34240;
    ety[397] = C34248;
    ety[398] = C34256;
    ety[399] = C34264;
    ety[400] = C34272;
    ety[401] = C34280;
    ety[402] = C34288;
    ety[403] = C34296;
    ety[404] = C34304;
    ety[405] = C34312;
    ety[406] = C34320;
    ety[407] = C34328;
    ety[408] = C34336;
    ety[409] = C34344;
    ety[410] = C34352;
    ety[411] = C34360;
    ety[412] = C34368;
    ety[413] = C34376;
    ety[414] = C34384;
    ety[415] = C34392;
    ety[416] = C34400;
    ety[417] = C34408;
    ety[418] = C34416;
    ety[419] = C34424;
    ety[420] = C34432;
    ety[421] = C34440;
    ety[422] = C34448;
    ety[423] = C34456;
    ety[424] = C34464;
    ety[425] = C34472;
    ety[426] = C34480;
    ety[427] = C34488;
    ety[428] = C34496;
    ety[429] = C34504;
    ety[430] = C34512;
    ety[431] = C34520;
    ety[432] = C34535;
    ety[433] = C34550;
    ety[434] = C34565;
    ety[435] = C34580;
    ety[436] = C34595;
    ety[437] = C34610;
    ety[438] = C34625;
    ety[439] = C34640;
    ety[440] = C34655;
    ety[441] = C34670;
    ety[442] = C34685;
    ety[443] = C34700;
    ety[444] = C34715;
    ety[445] = C34730;
    ety[446] = C34745;
    ety[447] = C34760;
    ety[448] = C34880;
    ety[449] = C34895;
    ety[450] = C34910;
    ety[451] = C34925;
    ety[452] = C34940;
    ety[453] = C34955;
    ety[454] = C34970;
    ety[455] = C34985;
    ety[456] = C35000;
    ety[457] = C35015;
    ety[458] = C35030;
    ety[459] = C35045;
    ety[460] = C35060;
    ety[461] = C35075;
    ety[462] = C35090;
    ety[463] = C35105;
    ety[464] = C35127;
    ety[465] = C35142;
    ety[466] = C35157;
    ety[467] = C35172;
    ety[468] = C35187;
    ety[469] = C35202;
    ety[470] = C35217;
    ety[471] = C35232;
    ety[472] = C35247;
    ety[473] = C35262;
    ety[474] = C35277;
    ety[475] = C35292;
    ety[476] = C35307;
    ety[477] = C35322;
    ety[478] = C35337;
    ety[479] = C35352;
    ety[480] = C35815;
    ety[481] = C35830;
    ety[482] = C35845;
    ety[483] = C35860;
    ety[484] = C35875;
    ety[485] = C35890;
    ety[486] = C35905;
    ety[487] = C35920;
    ety[488] = C35935;
    ety[489] = C35950;
    ety[490] = C35965;
    ety[491] = C35980;
    ety[492] = C35995;
    ety[493] = C36010;
    ety[494] = C36025;
    ety[495] = C36040;
    etz[0] = C46864;
    etz[1] = C46865;
    etz[2] = C46873;
    etz[3] = C46881;
    etz[4] = C46882;
    etz[5] = C46890;
    etz[6] = C46898;
    etz[7] = C46899;
    etz[8] = C46907;
    etz[9] = C46915;
    etz[10] = C46916;
    etz[11] = C46924;
    etz[12] = C46932;
    etz[13] = C46933;
    etz[14] = C46941;
    etz[15] = C46949;
    etz[16] = C46950;
    etz[17] = C46958;
    etz[18] = C46966;
    etz[19] = C46967;
    etz[20] = C46975;
    etz[21] = C46983;
    etz[22] = C46984;
    etz[23] = C46992;
    etz[24] = C47000;
    etz[25] = C47001;
    etz[26] = C47009;
    etz[27] = C47017;
    etz[28] = C47018;
    etz[29] = C47026;
    etz[30] = C47034;
    etz[31] = C47035;
    etz[32] = C47043;
    etz[33] = C47051;
    etz[34] = C47052;
    etz[35] = C47060;
    etz[36] = C47068;
    etz[37] = C47069;
    etz[38] = C47077;
    etz[39] = C47085;
    etz[40] = C47086;
    etz[41] = C47094;
    etz[42] = C47102;
    etz[43] = C47103;
    etz[44] = C47111;
    etz[45] = C47119;
    etz[46] = C47120;
    etz[47] = C47128;
    etz[48] = C47136;
    etz[49] = C47137;
    etz[50] = C47152;
    etz[51] = C47153;
    etz[52] = C47168;
    etz[53] = C47169;
    etz[54] = C47184;
    etz[55] = C47185;
    etz[56] = C47200;
    etz[57] = C47201;
    etz[58] = C47216;
    etz[59] = C47217;
    etz[60] = C47232;
    etz[61] = C47233;
    etz[62] = C47248;
    etz[63] = C47249;
    etz[64] = C47264;
    etz[65] = C47265;
    etz[66] = C47280;
    etz[67] = C47281;
    etz[68] = C47296;
    etz[69] = C47297;
    etz[70] = C47312;
    etz[71] = C47313;
    etz[72] = C47328;
    etz[73] = C47329;
    etz[74] = C47344;
    etz[75] = C47345;
    etz[76] = C47360;
    etz[77] = C47361;
    etz[78] = C47376;
    etz[79] = C47377;
    etz[80] = C47392;
    etz[81] = C47393;
    etz[82] = C47408;
    etz[83] = C47409;
    etz[84] = C47424;
    etz[85] = C47425;
    etz[86] = C47440;
    etz[87] = C47441;
    etz[88] = C47456;
    etz[89] = C47457;
    etz[90] = C47472;
    etz[91] = C47473;
    etz[92] = C47488;
    etz[93] = C47489;
    etz[94] = C47504;
    etz[95] = C47505;
    etz[96] = C47520;
    etz[97] = C47521;
    etz[98] = C47536;
    etz[99] = C47537;
    etz[100] = C47552;
    etz[101] = C47553;
    etz[102] = C47568;
    etz[103] = C47569;
    etz[104] = C47584;
    etz[105] = C47585;
    etz[106] = C47600;
    etz[107] = C47601;
    etz[108] = C47616;
    etz[109] = C47617;
    etz[110] = C47632;
    etz[111] = C47633;
    etz[112] = C47648;
    etz[113] = C47656;
    etz[114] = C47664;
    etz[115] = C47672;
    etz[116] = C47680;
    etz[117] = C47688;
    etz[118] = C47696;
    etz[119] = C47704;
    etz[120] = C47712;
    etz[121] = C47720;
    etz[122] = C47728;
    etz[123] = C47736;
    etz[124] = C47744;
    etz[125] = C47752;
    etz[126] = C47760;
    etz[127] = C47768;
    etz[128] = C47776;
    etz[129] = C47784;
    etz[130] = C47792;
    etz[131] = C47800;
    etz[132] = C47808;
    etz[133] = C47816;
    etz[134] = C47824;
    etz[135] = C47832;
    etz[136] = C47840;
    etz[137] = C47848;
    etz[138] = C47856;
    etz[139] = C47864;
    etz[140] = C47872;
    etz[141] = C47880;
    etz[142] = C47888;
    etz[143] = C47896;
    etz[144] = C47904;
    etz[145] = C47912;
    etz[146] = C47920;
    etz[147] = C47928;
    etz[148] = C47936;
    etz[149] = C47944;
    etz[150] = C47952;
    etz[151] = C47960;
    etz[152] = C47968;
    etz[153] = C47976;
    etz[154] = C47984;
    etz[155] = C47992;
    etz[156] = C48000;
    etz[157] = C48008;
    etz[158] = C48016;
    etz[159] = C48024;
    etz[160] = C48032;
    etz[161] = C48040;
    etz[162] = C48048;
    etz[163] = C48056;
    etz[164] = C48064;
    etz[165] = C48072;
    etz[166] = C48080;
    etz[167] = C48088;
    etz[168] = C48096;
    etz[169] = C48104;
    etz[170] = C48112;
    etz[171] = C48120;
    etz[172] = C48128;
    etz[173] = C48136;
    etz[174] = C48144;
    etz[175] = C48152;
    etz[176] = C48160;
    etz[177] = C48168;
    etz[178] = C48176;
    etz[179] = C48184;
    etz[180] = C48192;
    etz[181] = C48200;
    etz[182] = C48208;
    etz[183] = C48216;
    etz[184] = C48224;
    etz[185] = C48232;
    etz[186] = C48240;
    etz[187] = C48248;
    etz[188] = C48256;
    etz[189] = C48264;
    etz[190] = C48272;
    etz[191] = C48280;
    etz[192] = C48288;
    etz[193] = C48289;
    etz[194] = C48304;
    etz[195] = C48305;
    etz[196] = C48320;
    etz[197] = C48321;
    etz[198] = C48336;
    etz[199] = C48337;
    etz[200] = C48352;
    etz[201] = C48353;
    etz[202] = C48368;
    etz[203] = C48369;
    etz[204] = C48384;
    etz[205] = C48385;
    etz[206] = C48400;
    etz[207] = C48401;
    etz[208] = C48416;
    etz[209] = C48417;
    etz[210] = C48432;
    etz[211] = C48433;
    etz[212] = C48448;
    etz[213] = C48449;
    etz[214] = C48464;
    etz[215] = C48465;
    etz[216] = C48480;
    etz[217] = C48481;
    etz[218] = C48496;
    etz[219] = C48497;
    etz[220] = C48512;
    etz[221] = C48513;
    etz[222] = C48528;
    etz[223] = C48529;
    etz[224] = C48544;
    etz[225] = C48545;
    etz[226] = C48560;
    etz[227] = C48561;
    etz[228] = C48576;
    etz[229] = C48577;
    etz[230] = C48592;
    etz[231] = C48593;
    etz[232] = C48608;
    etz[233] = C48609;
    etz[234] = C48624;
    etz[235] = C48625;
    etz[236] = C48640;
    etz[237] = C48641;
    etz[238] = C48656;
    etz[239] = C48657;
    etz[240] = C48672;
    etz[241] = C48673;
    etz[242] = C48688;
    etz[243] = C48689;
    etz[244] = C48704;
    etz[245] = C48705;
    etz[246] = C48720;
    etz[247] = C48721;
    etz[248] = C48736;
    etz[249] = C48737;
    etz[250] = C48752;
    etz[251] = C48753;
    etz[252] = C48768;
    etz[253] = C48769;
    etz[254] = C48784;
    etz[255] = C48785;
    etz[256] = C48800;
    etz[257] = C48808;
    etz[258] = C48816;
    etz[259] = C48824;
    etz[260] = C48832;
    etz[261] = C48840;
    etz[262] = C48848;
    etz[263] = C48856;
    etz[264] = C48864;
    etz[265] = C48872;
    etz[266] = C48880;
    etz[267] = C48888;
    etz[268] = C48896;
    etz[269] = C48904;
    etz[270] = C48912;
    etz[271] = C48920;
    etz[272] = C48928;
    etz[273] = C48936;
    etz[274] = C48944;
    etz[275] = C48952;
    etz[276] = C48960;
    etz[277] = C48968;
    etz[278] = C48976;
    etz[279] = C48984;
    etz[280] = C48992;
    etz[281] = C49000;
    etz[282] = C49008;
    etz[283] = C49016;
    etz[284] = C49024;
    etz[285] = C49032;
    etz[286] = C49040;
    etz[287] = C49048;
    etz[288] = C49056;
    etz[289] = C49064;
    etz[290] = C49072;
    etz[291] = C49080;
    etz[292] = C49088;
    etz[293] = C49096;
    etz[294] = C49104;
    etz[295] = C49112;
    etz[296] = C49120;
    etz[297] = C49128;
    etz[298] = C49136;
    etz[299] = C49144;
    etz[300] = C49152;
    etz[301] = C49160;
    etz[302] = C49168;
    etz[303] = C49176;
    etz[304] = C49184;
    etz[305] = C49192;
    etz[306] = C49200;
    etz[307] = C49208;
    etz[308] = C49216;
    etz[309] = C49224;
    etz[310] = C49232;
    etz[311] = C49240;
    etz[312] = C49248;
    etz[313] = C49256;
    etz[314] = C49264;
    etz[315] = C49272;
    etz[316] = C49280;
    etz[317] = C49288;
    etz[318] = C49296;
    etz[319] = C49304;
    etz[320] = C49312;
    etz[321] = C49320;
    etz[322] = C49328;
    etz[323] = C49336;
    etz[324] = C49344;
    etz[325] = C49352;
    etz[326] = C49360;
    etz[327] = C49368;
    etz[328] = C49376;
    etz[329] = C49384;
    etz[330] = C49392;
    etz[331] = C49400;
    etz[332] = C49408;
    etz[333] = C49416;
    etz[334] = C49424;
    etz[335] = C49432;
    etz[336] = C49440;
    etz[337] = C49455;
    etz[338] = C49470;
    etz[339] = C49485;
    etz[340] = C49500;
    etz[341] = C49515;
    etz[342] = C49530;
    etz[343] = C49545;
    etz[344] = C49560;
    etz[345] = C49575;
    etz[346] = C49590;
    etz[347] = C49605;
    etz[348] = C49620;
    etz[349] = C49635;
    etz[350] = C49650;
    etz[351] = C49665;
    etz[352] = C49680;
    etz[353] = C49681;
    etz[354] = C49696;
    etz[355] = C49697;
    etz[356] = C49712;
    etz[357] = C49713;
    etz[358] = C49728;
    etz[359] = C49729;
    etz[360] = C49744;
    etz[361] = C49745;
    etz[362] = C49760;
    etz[363] = C49761;
    etz[364] = C49776;
    etz[365] = C49777;
    etz[366] = C49792;
    etz[367] = C49793;
    etz[368] = C49808;
    etz[369] = C49809;
    etz[370] = C49824;
    etz[371] = C49825;
    etz[372] = C49840;
    etz[373] = C49841;
    etz[374] = C49856;
    etz[375] = C49857;
    etz[376] = C49872;
    etz[377] = C49873;
    etz[378] = C49888;
    etz[379] = C49889;
    etz[380] = C49904;
    etz[381] = C49905;
    etz[382] = C49920;
    etz[383] = C49921;
    etz[384] = C49936;
    etz[385] = C49944;
    etz[386] = C49952;
    etz[387] = C49960;
    etz[388] = C49968;
    etz[389] = C49976;
    etz[390] = C49984;
    etz[391] = C49992;
    etz[392] = C50000;
    etz[393] = C50008;
    etz[394] = C50016;
    etz[395] = C50024;
    etz[396] = C50032;
    etz[397] = C50040;
    etz[398] = C50048;
    etz[399] = C50056;
    etz[400] = C50064;
    etz[401] = C50072;
    etz[402] = C50080;
    etz[403] = C50088;
    etz[404] = C50096;
    etz[405] = C50104;
    etz[406] = C50112;
    etz[407] = C50120;
    etz[408] = C50128;
    etz[409] = C50136;
    etz[410] = C50144;
    etz[411] = C50152;
    etz[412] = C50160;
    etz[413] = C50168;
    etz[414] = C50176;
    etz[415] = C50184;
    etz[416] = C50192;
    etz[417] = C50200;
    etz[418] = C50208;
    etz[419] = C50216;
    etz[420] = C50224;
    etz[421] = C50232;
    etz[422] = C50240;
    etz[423] = C50248;
    etz[424] = C50256;
    etz[425] = C50264;
    etz[426] = C50272;
    etz[427] = C50280;
    etz[428] = C50288;
    etz[429] = C50296;
    etz[430] = C50304;
    etz[431] = C50312;
    etz[432] = C50327;
    etz[433] = C50342;
    etz[434] = C50357;
    etz[435] = C50372;
    etz[436] = C50387;
    etz[437] = C50402;
    etz[438] = C50417;
    etz[439] = C50432;
    etz[440] = C50447;
    etz[441] = C50462;
    etz[442] = C50477;
    etz[443] = C50492;
    etz[444] = C50507;
    etz[445] = C50522;
    etz[446] = C50537;
    etz[447] = C50552;
    etz[448] = C50672;
    etz[449] = C50687;
    etz[450] = C50702;
    etz[451] = C50717;
    etz[452] = C50732;
    etz[453] = C50747;
    etz[454] = C50762;
    etz[455] = C50777;
    etz[456] = C50792;
    etz[457] = C50807;
    etz[458] = C50822;
    etz[459] = C50837;
    etz[460] = C50852;
    etz[461] = C50867;
    etz[462] = C50882;
    etz[463] = C50897;
    etz[464] = C50919;
    etz[465] = C50934;
    etz[466] = C50949;
    etz[467] = C50964;
    etz[468] = C50979;
    etz[469] = C50994;
    etz[470] = C51009;
    etz[471] = C51024;
    etz[472] = C51039;
    etz[473] = C51054;
    etz[474] = C51069;
    etz[475] = C51084;
    etz[476] = C51099;
    etz[477] = C51114;
    etz[478] = C51129;
    etz[479] = C51144;
    etz[480] = C51607;
    etz[481] = C51622;
    etz[482] = C51637;
    etz[483] = C51652;
    etz[484] = C51667;
    etz[485] = C51682;
    etz[486] = C51697;
    etz[487] = C51712;
    etz[488] = C51727;
    etz[489] = C51742;
    etz[490] = C51757;
    etz[491] = C51772;
    etz[492] = C51787;
    etz[493] = C51802;
    etz[494] = C51817;
    etz[495] = C51832;
}
