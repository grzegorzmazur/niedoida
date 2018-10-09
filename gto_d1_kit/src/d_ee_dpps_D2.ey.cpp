/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2110_4_et(const double ae,
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
    const double C1717 = g[0];
    const double C1735 = g[1];
    const double C1811 = g[2];
    const double C1857 = g[3];
    const double C1902 = g[4];
    const double C1919 = g[5];
    const double C1995 = g[6];
    const double C2040 = g[7];
    const double C2085 = g[8];
    const double C2102 = g[9];
    const double C2178 = g[10];
    const double C2222 = g[11];
    const double C2266 = g[12];
    const double C2310 = g[13];
    const double C2353 = g[14];
    const double C2396 = g[15];
    const double C1721 = vrx[0];
    const double C1722 = vrx[1];
    const double C1723 = vrx[2];
    const double C1739 = vrx[3];
    const double C1754 = vrx[4];
    const double C1769 = vrx[5];
    const double C1784 = vrx[6];
    const double C1799 = vrx[7];
    const double C1815 = vrx[8];
    const double C1830 = vrx[9];
    const double C1845 = vrx[10];
    const double C1861 = vrx[11];
    const double C1890 = vrx[12];
    const double C1906 = vrx[13];
    const double C1907 = vrx[14];
    const double C1937 = vrx[15];
    const double C1952 = vrx[16];
    const double C1953 = vrx[17];
    const double C1968 = vrx[18];
    const double C1983 = vrx[19];
    const double C2013 = vrx[20];
    const double C2028 = vrx[21];
    const double C2058 = vrx[22];
    const double C2073 = vrx[23];
    const double C2089 = vrx[24];
    const double C2090 = vrx[25];
    const double C2120 = vrx[26];
    const double C2135 = vrx[27];
    const double C2150 = vrx[28];
    const double C2165 = vrx[29];
    const double C2166 = vrx[30];
    const double C2210 = vrx[31];
    const double C2254 = vrx[32];
    const double C2298 = vrx[33];
    const double C2443 = vry[0];
    const double C2444 = vry[1];
    const double C2445 = vry[2];
    const double C2460 = vry[3];
    const double C2475 = vry[4];
    const double C2490 = vry[5];
    const double C2505 = vry[6];
    const double C2520 = vry[7];
    const double C2535 = vry[8];
    const double C2550 = vry[9];
    const double C2565 = vry[10];
    const double C2580 = vry[11];
    const double C2609 = vry[12];
    const double C2624 = vry[13];
    const double C2625 = vry[14];
    const double C2654 = vry[15];
    const double C2669 = vry[16];
    const double C2670 = vry[17];
    const double C2685 = vry[18];
    const double C2700 = vry[19];
    const double C2729 = vry[20];
    const double C2744 = vry[21];
    const double C2773 = vry[22];
    const double C2788 = vry[23];
    const double C2803 = vry[24];
    const double C2804 = vry[25];
    const double C2833 = vry[26];
    const double C2848 = vry[27];
    const double C2863 = vry[28];
    const double C2878 = vry[29];
    const double C2879 = vry[30];
    const double C2922 = vry[31];
    const double C2965 = vry[32];
    const double C3008 = vry[33];
    const double C3150 = vrz[0];
    const double C3151 = vrz[1];
    const double C3152 = vrz[2];
    const double C3167 = vrz[3];
    const double C3182 = vrz[4];
    const double C3197 = vrz[5];
    const double C3212 = vrz[6];
    const double C3227 = vrz[7];
    const double C3242 = vrz[8];
    const double C3257 = vrz[9];
    const double C3272 = vrz[10];
    const double C3287 = vrz[11];
    const double C3316 = vrz[12];
    const double C3331 = vrz[13];
    const double C3332 = vrz[14];
    const double C3361 = vrz[15];
    const double C3376 = vrz[16];
    const double C3377 = vrz[17];
    const double C3392 = vrz[18];
    const double C3407 = vrz[19];
    const double C3436 = vrz[20];
    const double C3451 = vrz[21];
    const double C3480 = vrz[22];
    const double C3495 = vrz[23];
    const double C3510 = vrz[24];
    const double C3511 = vrz[25];
    const double C3540 = vrz[26];
    const double C3555 = vrz[27];
    const double C3570 = vrz[28];
    const double C3585 = vrz[29];
    const double C3586 = vrz[30];
    const double C3629 = vrz[31];
    const double C3672 = vrz[32];
    const double C3715 = vrz[33];
    const double C3872 = C2298 * p;
    const double C3871 = C2210 * p;
    const double C3870 = C2150 * p;
    const double C3869 = C2135 * p;
    const double C3868 = C2120 * p;
    const double C3867 = C2089 * p;
    const double C3866 = C2073 * p;
    const double C3865 = C2058 / q;
    const double C3864 = C2028 * p;
    const double C3863 = C1983 * p;
    const double C3862 = C1968 * p;
    const double C3861 = C1937 * p;
    const double C3860 = C1906 * p;
    const double C3859 = C1890 * p;
    const double C3858 = C1861 / q;
    const double C3857 = C1845 * p;
    const double C3856 = C1830 * p;
    const double C3855 = C1815 / q;
    const double C3854 = C1799 * p;
    const double C3853 = C1784 * p;
    const double C3852 = de * zCD;
    const double C3851 = be * zAB;
    const double C3850 = C1769 * p;
    const double C3849 = C1754 * p;
    const double C3848 = de * yCD;
    const double C3847 = be * yAB;
    const double C3846 = 2 * q;
    const double C3845 = de * xCD;
    const double C3844 = be * xAB;
    const double C3921 = C3008 * p;
    const double C3918 = C2922 * p;
    const double C3917 = C2863 * p;
    const double C3916 = C2848 * p;
    const double C3915 = C2833 * p;
    const double C3914 = C2804 * p;
    const double C3912 = C2788 * p;
    const double C3911 = C2773 / q;
    const double C3910 = C2744 * p;
    const double C3909 = C2700 * p;
    const double C3908 = C2685 * p;
    const double C3907 = C2654 * p;
    const double C3906 = C2625 * p;
    const double C3904 = C2609 * p;
    const double C3903 = C2580 / q;
    const double C3902 = C2565 * p;
    const double C3901 = C2550 * p;
    const double C3899 = C2535 / q;
    const double C3898 = C2520 * p;
    const double C3897 = C2505 * p;
    const double C3896 = C2490 * p;
    const double C3895 = C2475 * p;
    const double C3962 = C3715 * p;
    const double C3959 = C3629 * p;
    const double C3958 = C3570 * p;
    const double C3957 = C3555 * p;
    const double C3956 = C3540 * p;
    const double C3955 = C3511 * p;
    const double C3953 = C3495 * p;
    const double C3952 = C3480 / q;
    const double C3951 = C3451 * p;
    const double C3950 = C3407 * p;
    const double C3949 = C3392 * p;
    const double C3948 = C3361 * p;
    const double C3947 = C3332 * p;
    const double C3945 = C3316 * p;
    const double C3944 = C3287 / q;
    const double C3943 = C3272 * p;
    const double C3942 = C3257 * p;
    const double C3940 = C3242 / q;
    const double C3939 = C3227 * p;
    const double C3938 = C3212 * p;
    const double C3937 = C3197 * p;
    const double C3936 = C3182 * p;
    const double C3886 = C3870 / q;
    const double C3887 = C3868 / q;
    const double C3885 = C3867 / q;
    const double C3883 = C3866 / q;
    const double C3882 = C3862 / q;
    const double C3881 = C3861 / q;
    const double C3880 = C3860 / q;
    const double C3878 = C3859 / q;
    const double C3877 = C3856 / q;
    const double C3875 = C3851 + C3852;
    const double C3874 = C3847 + C3848;
    const double C3890 = C2165 / C3846;
    const double C3889 = C1739 / C3846;
    const double C3888 = C1952 / C3846;
    const double C3884 = C2090 / C3846;
    const double C3879 = C1907 / C3846;
    const double C3876 = C1722 / C3846;
    const double C3922 = C2878 / C3846;
    const double C3920 = C2460 / C3846;
    const double C3919 = C2669 / C3846;
    const double C3913 = C2803 / C3846;
    const double C3905 = C2624 / C3846;
    const double C3900 = C2443 / C3846;
    const double C3963 = C3585 / C3846;
    const double C3961 = C3167 / C3846;
    const double C3960 = C3376 / C3846;
    const double C3954 = C3510 / C3846;
    const double C3946 = C3331 / C3846;
    const double C3941 = C3150 / C3846;
    const double C3873 = C3844 + C3845;
    const double C3931 = C3918 / q;
    const double C3930 = C3916 / q;
    const double C3929 = C3915 / q;
    const double C3928 = C3912 / q;
    const double C3927 = C3904 / q;
    const double C3926 = C3902 / q;
    const double C3925 = C3901 / q;
    const double C3924 = C3896 / q;
    const double C3923 = C3895 / q;
    const double C3972 = C3953 / q;
    const double C3971 = C3951 / q;
    const double C3970 = C3950 / q;
    const double C3969 = C3949 / q;
    const double C3968 = C3945 / q;
    const double C3967 = C3943 / q;
    const double C3966 = C3942 / q;
    const double C3965 = C3939 / q;
    const double C3964 = C3938 / q;
    const double C444 = -(C1721 * C3875 + C3853) / q;
    const double C445 = -(C1722 * C3875 + C3854) / q;
    const double C469 = -(C1769 * C3875 + C3857) / q;
    const double C519 = -(C1906 * C3875 + C3862) / q;
    const double C520 = -(C1907 * C3875 + C3863) / q;
    const double C544 = -(C1953 * C3875 + C3864) / q;
    const double C594 = C3858 - (C2089 * C3875) / q - C3886;
    const double C595 = C2165 / q - (C2090 * C3875) / q - (C2166 * p) / q;
    const double C619 = C3865 - (C2135 * C3875) / q - C3871 / q;
    const double C643 =
        (3 * C2090) / C3846 - (C2166 * C3875) / q - (C2254 * p) / q;
    const double C667 = -(C1815 * C3875 + C3872) / q;
    const double C712 = C1815 / C3846 - (C2298 * C3875) / q - C3887;
    const double C870 = -(C2444 * C3875 + C3897) / q;
    const double C871 = -(C2443 * C3875 + C3898) / q;
    const double C895 = -(C2490 * C3875 + C3902) / q;
    const double C945 = -(C2625 * C3875 + C3908) / q;
    const double C946 = -(C2624 * C3875 + C3909) / q;
    const double C970 = -(C2670 * C3875 + C3910) / q;
    const double C1020 = C3903 - (C2804 * C3875) / q - C3917 / q;
    const double C1021 = C2878 / q - (C2803 * C3875) / q - (C2879 * p) / q;
    const double C1069 =
        (3 * C2803) / C3846 - (C2879 * C3875) / q - (C2965 * p) / q;
    const double C1093 = -(C2535 * C3875 + C3921) / q;
    const double C1446 =
        (C2085 * de) / q - (C3511 * C3875) / q + C3944 - C3958 / q;
    const double C1447 =
        (C2102 * de) / q - (C3510 * C3875) / q + C3585 / q - (C3586 * p) / q;
    const double C1471 =
        (C2178 * de) / q - (C3555 * C3875) / q + C3952 - C3959 / q;
    const double C1495 = (C2222 * de) / q - (C3586 * C3875) / q +
                         (3 * C3510) / C3846 - (C3672 * p) / q;
    const double C1519 = (C2266 * de) / q - (C3242 * C3875) / q - C3962 / q;
    const double C1564 =
        (C2310 * de) / q - (C3715 * C3875) / q + C3242 / C3846 - C3956 / q;
    const double C435 = -(C1721 * C3874 + C3849) / q;
    const double C436 = -(C1722 * C3874 + C3850) / q;
    const double C485 = -(C1799 * C3874 + C3857) / q;
    const double C510 = C3855 - (C1906 * C3874) / q - C3881;
    const double C511 = C1952 / q - (C1907 * C3874) / q - (C1953 * p) / q;
    const double C536 =
        (3 * C1907) / C3846 - (C1953 * C3874) / q - (C2013 * p) / q;
    const double C560 = C3865 - (C1983 * C3874) / q - C3864 / q;
    const double C585 = -(C2089 * C3874 + C3868) / q;
    const double C586 = -(C2090 * C3874 + C3869) / q;
    const double C635 = -(C2166 * C3874 + C3871) / q;
    const double C704 = C1861 / C3846 - (C2298 * C3874) / q - C3882;
    const double C728 = -(C1861 * C3874 + C3872) / q;
    const double C936 =
        (C1902 * de) / q - (C2625 * C3874) / q + C3899 - C3907 / q;
    const double C937 =
        (C1919 * de) / q - (C2624 * C3874) / q + C2669 / q - (C2670 * p) / q;
    const double C962 = (C1995 * de) / q - (C2670 * C3874) / q +
                        (3 * C2624) / C3846 - (C2729 * p) / q;
    const double C986 =
        (C2040 * de) / q - (C2700 * C3874) / q + C3911 - C3910 / q;
    const double C1130 =
        (C2310 * de) / q - (C3008 * C3874) / q + C2580 / C3846 - C3908 / q;
    const double C1154 = (C2353 * de) / q - (C2580 * C3874) / q - C3921 / q;
    const double C1287 = -(C3151 * C3874 + C3936) / q;
    const double C1288 = -(C3150 * C3874 + C3937) / q;
    const double C1337 = -(C3227 * C3874 + C3943) / q;
    const double C1362 = C3940 - (C3332 * C3874) / q - C3948 / q;
    const double C1363 = C3376 / q - (C3331 * C3874) / q - (C3377 * p) / q;
    const double C1388 =
        (3 * C3331) / C3846 - (C3377 * C3874) / q - (C3436 * p) / q;
    const double C1437 = -(C3511 * C3874 + C3956) / q;
    const double C1438 = -(C3510 * C3874 + C3957) / q;
    const double C1487 = -(C3586 * C3874 + C3959) / q;
    const double C1580 = -(C3287 * C3874 + C3962) / q;
    const double C794 = C3890 - (C2058 * C3874) / q - C3863 / q;
    const double C659 = C3889 - (C1815 * C3874) / q - C3880;
    const double C736 = C3889 - (C1861 * C3875) / q - C3885;
    const double C802 = C3888 - (C2058 * C3875) / q - C3869 / q;
    const double C611 = C3884 - (C2135 * C3874) / q - C3883;
    const double C568 = C3879 - (C1983 * C3875) / q - C3883;
    const double C461 = C3876 - (C1769 * C3874) / q - C3877;
    const double C493 = C3876 - (C1799 * C3875) / q - C3878;
    const double C1220 =
        (C2396 * de) / q - (C2773 * C3874) / q + C3922 - C3909 / q;
    const double C1085 =
        (C2266 * de) / q - (C2535 * C3874) / q + C3920 - C3906 / q;
    const double C1162 = C3920 - (C2580 * C3875) / q - C3914 / q;
    const double C1511 = C3961 - (C3242 * C3874) / q - C3947 / q;
    const double C1588 =
        (C2353 * de) / q - (C3287 * C3875) / q + C3961 - C3955 / q;
    const double C1654 =
        (C2396 * de) / q - (C3480 * C3875) / q + C3960 - C3957 / q;
    const double C426 = (C1717 * de) / q - (C1721 * C3873) / q +
                        (3 * C1722) / C3846 - (C1723 * p) / q;
    const double C427 =
        (C1735 * de) / q - (C1722 * C3873) / q + C1739 / q - (C1721 * p) / q;
    const double C453 =
        (C1811 * de) / q - (C1769 * C3873) / q + C3855 - C3849 / q;
    const double C477 =
        (C1857 * de) / q - (C1799 * C3873) / q + C3858 - C3853 / q;
    const double C501 = (C1902 * de) / q - (C1906 * C3873) / q + C3879 - C3877;
    const double C502 = (C1919 * de) / q - (C1907 * C3873) / q - C3880;
    const double C528 = (C1995 * de) / q - (C1953 * C3873) / q - C3881;
    const double C552 = (C2040 * de) / q - (C1983 * C3873) / q - C3882;
    const double C576 = (C2085 * de) / q - (C2089 * C3873) / q + C3884 - C3878;
    const double C577 = (C2102 * de) / q - (C2090 * C3873) / q - C3885;
    const double C603 = (C2178 * de) / q - (C2135 * C3873) / q - C3887;
    const double C627 = (C2222 * de) / q - (C2166 * C3873) / q - C3886;
    const double C651 =
        (C2266 * de) / q - (C1815 * C3873) / q + C3888 - C3850 / q;
    const double C696 =
        (C2310 * de) / q - (C2298 * C3873) / q + C2058 / C3846 - C3857 / q;
    const double C720 =
        (C2353 * de) / q - (C1861 * C3873) / q + C3890 - C3854 / q;
    const double C786 = (C2396 * de) / q - (C2058 * C3873) / q - C3872 / q;
    const double C852 =
        (3 * C2443) / C3846 - (C2444 * C3873) / q - (C2445 * p) / q;
    const double C853 = C2460 / q - (C2443 * C3873) / q - (C2444 * p) / q;
    const double C903 = C3903 - (C2520 * C3873) / q - C3897 / q;
    const double C928 = -(C2624 * C3873 + C3906) / q;
    const double C954 = -(C2670 * C3873 + C3907) / q;
    const double C978 = -(C2700 * C3873 + C3908) / q;
    const double C1003 = -(C2803 * C3873 + C3914) / q;
    const double C1029 = -(C2848 * C3873 + C3915) / q;
    const double C1053 = -(C2879 * C3873 + C3917) / q;
    const double C1146 = C3922 - (C2580 * C3873) / q - C3898 / q;
    const double C1212 = -(C2773 * C3873 + C3921) / q;
    const double C1278 =
        (3 * C3150) / C3846 - (C3151 * C3873) / q - (C3152 * p) / q;
    const double C1279 = C3167 / q - (C3150 * C3873) / q - (C3151 * p) / q;
    const double C1305 = C3940 - (C3197 * C3873) / q - C3936 / q;
    const double C1354 = -(C3331 * C3873 + C3947) / q;
    const double C1380 = -(C3377 * C3873 + C3948) / q;
    const double C1404 = -(C3407 * C3873 + C3949) / q;
    const double C1429 = -(C3510 * C3873 + C3955) / q;
    const double C1455 = -(C3555 * C3873 + C3956) / q;
    const double C1479 = -(C3586 * C3873 + C3958) / q;
    const double C1503 = C3960 - (C3242 * C3873) / q - C3937 / q;
    const double C1638 = -(C3480 * C3873 + C3962) / q;
    const double C1045 = C3911 - (C2848 * C3875) / q - C3931;
    const double C1061 = (C2222 * de) / q - (C2879 * C3874) / q - C3931;
    const double C1012 = (C2102 * de) / q - (C2803 * C3874) / q - C3930;
    const double C1228 = C3919 - (C2773 * C3875) / q - C3930;
    const double C1011 = (C2085 * de) / q - (C2804 * C3874) / q - C3929;
    const double C1138 = C2535 / C3846 - (C3008 * C3875) / q - C3929;
    const double C994 = C3905 - (C2700 * C3875) / q - C3928;
    const double C1037 = (C2178 * de) / q - (C2848 * C3874) / q + C3913 - C3928;
    const double C919 = C3900 - (C2520 * C3875) / q - C3927;
    const double C1002 = C3913 - (C2804 * C3873) / q - C3927;
    const double C911 = (C1857 * de) / q - (C2520 * C3874) / q - C3926;
    const double C1122 = C2773 / C3846 - (C3008 * C3873) / q - C3926;
    const double C887 = (C1811 * de) / q - (C2490 * C3874) / q + C3900 - C3925;
    const double C927 = C3905 - (C2625 * C3873) / q - C3925;
    const double C862 = (C1735 * de) / q - (C2443 * C3874) / q - C3924;
    const double C1077 = C3919 - (C2535 * C3873) / q - C3924;
    const double C861 = (C1717 * de) / q - (C2444 * C3874) / q - C3923;
    const double C879 = C3899 - (C2490 * C3873) / q - C3923;
    const double C1420 = (C2040 * de) / q - (C3407 * C3875) / q + C3946 - C3972;
    const double C1463 = C3954 - (C3555 * C3874) / q - C3972;
    const double C1396 = (C1995 * de) / q - (C3377 * C3875) / q - C3971;
    const double C1412 = C3952 - (C3407 * C3874) / q - C3971;
    const double C1372 = (C1919 * de) / q - (C3331 * C3875) / q - C3970;
    const double C1646 = C3963 - (C3480 * C3874) / q - C3970;
    const double C1371 = (C1902 * de) / q - (C3332 * C3875) / q - C3969;
    const double C1556 = C3287 / C3846 - (C3715 * C3874) / q - C3969;
    const double C1345 = (C1857 * de) / q - (C3227 * C3875) / q + C3941 - C3968;
    const double C1428 = C3954 - (C3511 * C3873) / q - C3968;
    const double C1321 = (C1811 * de) / q - (C3197 * C3875) / q - C3967;
    const double C1548 = C3480 / C3846 - (C3715 * C3873) / q - C3967;
    const double C1313 = C3941 - (C3197 * C3874) / q - C3966;
    const double C1353 = C3946 - (C3332 * C3873) / q - C3966;
    const double C1297 = (C1735 * de) / q - (C3150 * C3875) / q - C3965;
    const double C1572 = C3963 - (C3287 * C3873) / q - C3965;
    const double C1296 = (C1717 * de) / q - (C3151 * C3875) / q - C3964;
    const double C1329 = C3944 - (C3227 * C3873) / q - C3964;
    etx[0] = C426;
    etx[1] = C427;
    etx[2] = C435;
    etx[3] = C436;
    etx[4] = C444;
    etx[5] = C445;
    etx[6] = C453;
    etx[7] = C461;
    etx[8] = C469;
    etx[9] = C477;
    etx[10] = C485;
    etx[11] = C493;
    etx[12] = C501;
    etx[13] = C502;
    etx[14] = C510;
    etx[15] = C511;
    etx[16] = C519;
    etx[17] = C520;
    etx[18] = C528;
    etx[19] = C536;
    etx[20] = C544;
    etx[21] = C552;
    etx[22] = C560;
    etx[23] = C568;
    etx[24] = C576;
    etx[25] = C577;
    etx[26] = C585;
    etx[27] = C586;
    etx[28] = C594;
    etx[29] = C595;
    etx[30] = C603;
    etx[31] = C611;
    etx[32] = C619;
    etx[33] = C627;
    etx[34] = C635;
    etx[35] = C643;
    etx[36] = C651;
    etx[37] = C659;
    etx[38] = C667;
    etx[39] = C696;
    etx[40] = C704;
    etx[41] = C712;
    etx[42] = C720;
    etx[43] = C728;
    etx[44] = C736;
    etx[45] = C786;
    etx[46] = C794;
    etx[47] = C802;
    ety[0] = C852;
    ety[1] = C853;
    ety[2] = C861;
    ety[3] = C862;
    ety[4] = C870;
    ety[5] = C871;
    ety[6] = C879;
    ety[7] = C887;
    ety[8] = C895;
    ety[9] = C903;
    ety[10] = C911;
    ety[11] = C919;
    ety[12] = C927;
    ety[13] = C928;
    ety[14] = C936;
    ety[15] = C937;
    ety[16] = C945;
    ety[17] = C946;
    ety[18] = C954;
    ety[19] = C962;
    ety[20] = C970;
    ety[21] = C978;
    ety[22] = C986;
    ety[23] = C994;
    ety[24] = C1002;
    ety[25] = C1003;
    ety[26] = C1011;
    ety[27] = C1012;
    ety[28] = C1020;
    ety[29] = C1021;
    ety[30] = C1029;
    ety[31] = C1037;
    ety[32] = C1045;
    ety[33] = C1053;
    ety[34] = C1061;
    ety[35] = C1069;
    ety[36] = C1077;
    ety[37] = C1085;
    ety[38] = C1093;
    ety[39] = C1122;
    ety[40] = C1130;
    ety[41] = C1138;
    ety[42] = C1146;
    ety[43] = C1154;
    ety[44] = C1162;
    ety[45] = C1212;
    ety[46] = C1220;
    ety[47] = C1228;
    etz[0] = C1278;
    etz[1] = C1279;
    etz[2] = C1287;
    etz[3] = C1288;
    etz[4] = C1296;
    etz[5] = C1297;
    etz[6] = C1305;
    etz[7] = C1313;
    etz[8] = C1321;
    etz[9] = C1329;
    etz[10] = C1337;
    etz[11] = C1345;
    etz[12] = C1353;
    etz[13] = C1354;
    etz[14] = C1362;
    etz[15] = C1363;
    etz[16] = C1371;
    etz[17] = C1372;
    etz[18] = C1380;
    etz[19] = C1388;
    etz[20] = C1396;
    etz[21] = C1404;
    etz[22] = C1412;
    etz[23] = C1420;
    etz[24] = C1428;
    etz[25] = C1429;
    etz[26] = C1437;
    etz[27] = C1438;
    etz[28] = C1446;
    etz[29] = C1447;
    etz[30] = C1455;
    etz[31] = C1463;
    etz[32] = C1471;
    etz[33] = C1479;
    etz[34] = C1487;
    etz[35] = C1495;
    etz[36] = C1503;
    etz[37] = C1511;
    etz[38] = C1519;
    etz[39] = C1548;
    etz[40] = C1556;
    etz[41] = C1564;
    etz[42] = C1572;
    etz[43] = C1580;
    etz[44] = C1588;
    etz[45] = C1638;
    etz[46] = C1646;
    etz[47] = C1654;
}
