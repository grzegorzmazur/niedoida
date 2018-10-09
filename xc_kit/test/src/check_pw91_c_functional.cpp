/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include <boost/test/floating_point_comparison.hpp>
#include <boost/test/test_tools.hpp>    
#include <boost/test/unit_test.hpp>

#include "xc_kit/xc_functionals.hpp"
    
void check_pw91_c_functional()
{
    const double eps = 1e-7;
    XCFunctionalData xc;
    xc = pw91_c_functional(0.17E+01, 0.17E+01, 0.81E-11, 0.81E-11, 0.81E-11, 2);
    BOOST_CHECK_CLOSE(xc.e, -0.277344423214E+00, eps);
    BOOST_CHECK_CLOSE(xc.de_dra, -0.902549628505E-01, eps);
    BOOST_CHECK_CLOSE(xc.de_drb, -0.902549628505E-01, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, 0.973880560793E-03, eps);
    BOOST_CHECK_CLOSE(xc.de_dgab, 0.194776112159E-02, eps);
    BOOST_CHECK_CLOSE(xc.de_dgbb, 0.973880560793E-03, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drara, 0.129726626281E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drarb, -0.182704041173E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbrb, 0.129726626281E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragaa, -0.381075641669E-03, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragab, -0.762151283338E-03, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragbb, -0.381075641669E-03, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgaa, -0.381075641669E-03, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgab, -0.762151283338E-03, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgbb, -0.381075641669E-03, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, -0.372455307820E-04, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_dgaagab, -0.744910615639E-04, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_dgaagbb, -0.372455307820E-04, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_dgabgab, -0.148982123128E-03, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_dgbbgab, -0.744910615639E-04, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_dgbbgbb, -0.372455307820E-04, eps);
    xc = pw91_c_functional(0.17E+01, 0.17E+01, 0.17E+01, 0.17E+01, 0.17E+01, 2);
    BOOST_CHECK_CLOSE(xc.e, -0.271390707917E+00, eps);
    BOOST_CHECK_CLOSE(xc.de_dra, -0.922007758201E-01, eps);
    BOOST_CHECK_CLOSE(xc.de_drb, -0.922007758201E-01, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, 0.799975378309E-03, eps);
    BOOST_CHECK_CLOSE(xc.de_dgab, 0.159995075662E-02, eps);
    BOOST_CHECK_CLOSE(xc.de_dgbb, 0.799975378309E-03, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drara, 0.139081741919E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drarb, -0.171188952520E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbrb, 0.139081741919E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragaa, -0.228201504472E-03, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragab, -0.456403008945E-03, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragbb, -0.228201504472E-03, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgaa, -0.228201504472E-03, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgab, -0.456403008945E-03, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgbb, -0.228201504472E-03, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, -0.169041710688E-04, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagab, -0.338083421376E-04, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagbb, -0.169041710688E-04, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgabgab, -0.676166842752E-04, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgab, -0.338083421376E-04, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgbb, -0.169041710688E-04, eps);
    xc = pw91_c_functional(0.15E+01, 0.15E+01, 0.36E+02, 0.36E+02, 0.36E+02, 2);
    BOOST_CHECK_CLOSE(xc.e, -0.162732206486E+00, eps);
    BOOST_CHECK_CLOSE(xc.de_dra, -0.100173083518E+00, eps);
    BOOST_CHECK_CLOSE(xc.de_drb, -0.100173083518E+00, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, 0.333461786516E-03, eps);
    BOOST_CHECK_CLOSE(xc.de_dgab, 0.666923573033E-03, eps);
    BOOST_CHECK_CLOSE(xc.de_dgbb, 0.333461786516E-03, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drara, 0.777007069028E-02, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drarb, -0.203064959581E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbrb, 0.777007069028E-02, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragaa, 0.283860923411E-04, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragab, 0.567721846822E-04, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragbb, 0.283860923411E-04, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgaa, 0.283860923411E-04, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgab, 0.567721846822E-04, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgbb, 0.283860923411E-04, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, -0.156828317366E-05, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagab, -0.313656634732E-05, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagbb, -0.156828317366E-05, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgabgab, -0.627313269464E-05, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgab, -0.313656634732E-05, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgbb, -0.156828317366E-05, eps);
    xc = pw91_c_functional(0.88E-01, 0.88E-01, 0.87E-01, 0.87E-01, 0.87E-01, 2);
    BOOST_CHECK_CLOSE(xc.e, -0.395121494518E-02, eps);
    BOOST_CHECK_CLOSE(xc.de_dra, -0.657432879667E-01, eps);
    BOOST_CHECK_CLOSE(xc.de_drb, -0.657432879667E-01, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, 0.796497509469E-02, eps);
    BOOST_CHECK_CLOSE(xc.de_dgab, 0.159299501894E-01, eps);
    BOOST_CHECK_CLOSE(xc.de_dgbb, 0.796497509469E-02, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drara, -0.202034475850E+00, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drarb, -0.457757341212E+00, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbrb, -0.202034475850E+00, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragaa, 0.575363016683E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragab, 0.115072603337E+00, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragbb, 0.575363016683E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgaa, 0.575363016683E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgab, 0.115072603337E+00, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgbb, 0.575363016683E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, -0.245078603329E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagab, -0.490157206657E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagbb, -0.245078603329E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgabgab, -0.980314413314E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgab, -0.490157206657E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgbb, -0.245078603329E-01, eps);
    xc = pw91_c_functional(0.18E+04, 0.18E+04, 0.55E+00, 0.55E+00, 0.55E+00, 2);
    BOOST_CHECK_CLOSE(xc.e, -0.531561314188E+03, eps);
    BOOST_CHECK_CLOSE(xc.de_dra, -0.157671673276E+00, eps);
    BOOST_CHECK_CLOSE(xc.de_drb, -0.157671673276E+00, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, 0.901476672206E-07, eps);
    BOOST_CHECK_CLOSE(xc.de_dgab, 0.180295334441E-06, eps);
    BOOST_CHECK_CLOSE(xc.de_dgbb, 0.901476672206E-07, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drara, 0.222159132794E-04, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drarb, -0.278289909468E-04, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbrb, 0.222159132794E-04, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragaa, -0.334157735379E-10, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragab, -0.668315470758E-10, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragbb, -0.334157735379E-10, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgaa, -0.334157735379E-10, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgab, -0.668315470758E-10, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgbb, -0.334157735379E-10, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, -0.891425333515E-16, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_dgaagab, -0.178285066703E-15, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_dgaagbb, -0.891425333515E-16, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_dgabgab, -0.356570133406E-15, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_dgbbgab, -0.178285066703E-15, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_dgbbgbb, -0.891425333515E-16, eps);
    xc = pw91_c_functional(0.18E+04, 0.18E+04, 0.86E+04, 0.86E+04, 0.86E+04, 2);
    BOOST_CHECK_CLOSE(xc.e, -0.531558213359E+03, eps);
    BOOST_CHECK_CLOSE(xc.de_dra, -0.157672822650E+00, eps);
    BOOST_CHECK_CLOSE(xc.de_drb, -0.157672822650E+00, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, 0.901446009986E-07, eps);
    BOOST_CHECK_CLOSE(xc.de_dgab, 0.180289201997E-06, eps);
    BOOST_CHECK_CLOSE(xc.de_dgbb, 0.901446009986E-07, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drara, 0.222166054165E-04, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drarb, -0.278281924696E-04, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbrb, 0.222166054165E-04, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragaa, -0.334125757620E-10, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragab, -0.668251515239E-10, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragbb, -0.334125757620E-10, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgaa, -0.334125757620E-10, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgab, -0.668251515239E-10, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgbb, -0.334125757620E-10, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, -0.891375928080E-16, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagab, -0.178275185616E-15, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagbb, -0.891375928080E-16, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgabgab, -0.356550371232E-15, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgab, -0.178275185616E-15, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgbb, -0.891375928080E-16, eps);
    xc = pw91_c_functional(0.16E+04, 0.16E+04, 0.37E+10, 0.37E+10, 0.37E+10, 2);
    BOOST_CHECK_CLOSE(xc.e, -0.241006114605E+03, eps);
    BOOST_CHECK_CLOSE(xc.de_dra, -0.139542676620E+00, eps);
    BOOST_CHECK_CLOSE(xc.de_drb, -0.139542676620E+00, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, 0.502786520924E-08, eps);
    BOOST_CHECK_CLOSE(xc.de_dgab, 0.100557304185E-07, eps);
    BOOST_CHECK_CLOSE(xc.de_dgbb, 0.502786520924E-08, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drara, -0.192326293278E-05, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drarb, -0.346455045398E-04, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbrb, -0.192326293278E-05, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragaa, 0.139737398346E-11, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragab, 0.279474796692E-11, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragbb, 0.139737398346E-11, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgaa, 0.139737398346E-11, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgab, 0.279474796692E-11, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgbb, 0.139737398346E-11, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, -0.323165021063E-18, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagab, -0.646330042125E-18, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagbb, -0.323165021063E-18, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgabgab, -0.129266008425E-17, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgab, -0.646330042125E-18, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgbb, -0.323165021063E-18, eps);
    xc = pw91_c_functional(0.26E+00, 0.26E+00, 0.28E+00, 0.28E+00, 0.28E+00, 2);
    BOOST_CHECK_CLOSE(xc.e, -0.261508836674E-01, eps);
    BOOST_CHECK_CLOSE(xc.de_dra, -0.850380343594E-01, eps);
    BOOST_CHECK_CLOSE(xc.de_drb, -0.850380343594E-01, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, 0.532761830491E-02, eps);
    BOOST_CHECK_CLOSE(xc.de_dgab, 0.106552366098E-01, eps);
    BOOST_CHECK_CLOSE(xc.de_dgbb, 0.532761830491E-02, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drara, 0.676821789787E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drarb, -0.810397979031E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbrb, 0.676821789787E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragaa, -0.195075654625E-02, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragab, -0.390151309250E-02, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragbb, -0.195075654625E-02, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgaa, -0.195075654625E-02, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgab, -0.390151309250E-02, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgbb, -0.195075654625E-02, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, -0.231629271760E-02, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagab, -0.463258543520E-02, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagbb, -0.231629271760E-02, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgabgab, -0.926517087040E-02, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgab, -0.463258543520E-02, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgbb, -0.231629271760E-02, eps);
    xc = pw91_c_functional(0.53E+05, 0.53E+05, 0.96E+05, 0.96E+05, 0.96E+05, 2);
    BOOST_CHECK_CLOSE(xc.e, -0.192841197359E+05, eps);
    BOOST_CHECK_CLOSE(xc.de_dra, -0.192145308961E+00, eps);
    BOOST_CHECK_CLOSE(xc.de_drb, -0.192145308961E+00, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, 0.988605615947E-09, eps);
    BOOST_CHECK_CLOSE(xc.de_dgab, 0.197721123189E-08, eps);
    BOOST_CHECK_CLOSE(xc.de_dgbb, 0.988605615947E-09, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drara, 0.930082983575E-06, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drarb, -0.112363497767E-05, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbrb, 0.930082983575E-06, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragaa, -0.124407912518E-13, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragab, -0.248815825037E-13, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragbb, -0.124407912518E-13, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgaa, -0.124407912518E-13, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgab, -0.248815825037E-13, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgbb, -0.124407912518E-13, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, -0.301785816720E-21, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagab, -0.603571633439E-21, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagbb, -0.301785816720E-21, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgabgab, -0.120714326688E-20, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgab, -0.603571633439E-21, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgbb, -0.301785816720E-21, eps);
    xc = pw91_c_functional(0.47E+05, 0.47E+05, 0.29E+14, 0.29E+14, 0.29E+14, 2);
    BOOST_CHECK_CLOSE(xc.e, -0.787195454507E+04, eps);
    BOOST_CHECK_CLOSE(xc.de_dra, -0.150389301122E+00, eps);
    BOOST_CHECK_CLOSE(xc.de_drb, -0.150389301122E+00, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, 0.196050117191E-10, eps);
    BOOST_CHECK_CLOSE(xc.de_dgab, 0.392100234383E-10, eps);
    BOOST_CHECK_CLOSE(xc.de_dgbb, 0.196050117191E-10, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drara, -0.111565513161E-06, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drarb, -0.126728935652E-05, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbrb, -0.111565513161E-06, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragaa, 0.201213149017E-15, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragab, 0.402426298035E-15, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragbb, 0.201213149017E-15, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgaa, 0.201213149017E-15, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgab, 0.402426298035E-15, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgbb, 0.201213149017E-15, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, -0.166334791796E-24, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagab, -0.332669583592E-24, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagbb, -0.166334791796E-24, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgabgab, -0.665339167185E-24, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgab, -0.332669583592E-24, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgbb, -0.166334791796E-24, eps);
    xc = pw91_c_functional(0.15E+00, 0.15E+00, 0.16E+00, 0.16E+00, 0.16E+00, 2);
    BOOST_CHECK_CLOSE(xc.e, -0.108821457516E-01, eps);
    BOOST_CHECK_CLOSE(xc.de_dra, -0.791955558902E-01, eps);
    BOOST_CHECK_CLOSE(xc.de_drb, -0.791955558902E-01, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, 0.710572162850E-02, eps);
    BOOST_CHECK_CLOSE(xc.de_dgab, 0.142114432570E-01, eps);
    BOOST_CHECK_CLOSE(xc.de_dgbb, 0.710572162850E-02, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drara, 0.253769163609E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drarb, -0.183037140984E+00, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbrb, 0.253769163609E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragaa, 0.965999714364E-02, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragab, 0.193199942873E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragbb, 0.965999714364E-02, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgaa, 0.965999714364E-02, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgab, 0.193199942873E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgbb, 0.965999714364E-02, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, -0.813375887491E-02, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagab, -0.162675177498E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagbb, -0.813375887491E-02, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgabgab, -0.325350354996E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgab, -0.162675177498E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgbb, -0.813375887491E-02, eps);
    xc = pw91_c_functional(0.35E+01, 0.00E+00, 0.46E-10, 0.00E+00, 0.00E+00, 2);
    BOOST_CHECK_CLOSE(xc.e, -0.149928973101E+00, eps);
    BOOST_CHECK_CLOSE(xc.de_dra, -0.472554998259E-01, eps);
    BOOST_CHECK_SMALL(xc.de_drb, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, 0.743726718647E-03, eps);
    BOOST_CHECK_SMALL(xc.de_dgab, eps);
    BOOST_CHECK_SMALL(xc.de_dgbb, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drara, -0.130588545113E-02, eps);
    BOOST_CHECK_SMALL(xc.d2e_drarb, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbrb, eps);
    //BOOST_CHECK_SMALL(xc.d2e_dragaa, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgaa, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgbb, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, -0.222014011291E-04, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgabgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgbbgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgbbgbb, eps);
    xc = pw91_c_functional(0.35E+01, 0.00E+00, 0.34E+01, 0.00E+00, 0.00E+00, 2);
    BOOST_CHECK_CLOSE(xc.e, -0.147519972501E+00, eps);
    BOOST_CHECK_CLOSE(xc.de_dra, -0.480913103300E-01, eps);
    BOOST_CHECK_SMALL(xc.de_drb, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, 0.675729187591E-03, eps);
    BOOST_CHECK_SMALL(xc.de_dgab, eps);
    BOOST_CHECK_SMALL(xc.de_dgbb, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drara, -0.829116659026E-03, eps);
    BOOST_CHECK_SMALL(xc.d2e_drarb, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbrb, eps);
    //BOOST_CHECK_SMALL(xc.d2e_dragaa, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgaa, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgbb, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, -0.179677466496E-04, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgabgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgbbgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgbbgbb, eps);
    xc = pw91_c_functional(0.30E+01, 0.00E+00, 0.20E+03, 0.00E+00, 0.00E+00, 2);
    BOOST_CHECK_CLOSE(xc.e, -0.659226012199E-01, eps);
    BOOST_CHECK_CLOSE(xc.de_dra, -0.486953252341E-01, eps);
    BOOST_CHECK_SMALL(xc.de_drb, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, 0.144302755913E-03, eps);
    BOOST_CHECK_SMALL(xc.de_dgab, eps);
    BOOST_CHECK_SMALL(xc.de_dgbb, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drara, -0.711870564589E-02, eps);
    BOOST_CHECK_SMALL(xc.d2e_drarb, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbrb, eps);
    //BOOST_CHECK_SMALL(xc.d2e_dragaa, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgaa, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgbb, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, -0.629087409192E-06, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgabgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgbbgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgbbgbb, eps);
    xc = pw91_c_functional(0.58E-01, 0.00E+00, 0.47E-01, 0.00E+00, 0.00E+00, 2);
    BOOST_CHECK_CLOSE(xc.e, -0.172759428017E-03, eps);
    BOOST_CHECK_CLOSE(xc.de_dra, -0.137874762962E-01, eps);
    BOOST_CHECK_SMALL(xc.de_drb, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, 0.494345568222E-02, eps);
    BOOST_CHECK_SMALL(xc.de_dgab, eps);
    BOOST_CHECK_SMALL(xc.de_dgbb, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drara, -0.683493680484E+00, eps);
    BOOST_CHECK_SMALL(xc.d2e_drarb, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbrb, eps);
    //BOOST_CHECK_SMALL(xc.d2e_dragaa, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgaa, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgbb, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, -0.207774437982E+00, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgabgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgbbgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgbbgbb, eps);
    xc = pw91_c_functional(0.82E+02, 0.81E+02, 0.49E+07, 0.49E+07, 0.49E+07, 2);
    BOOST_CHECK_CLOSE(xc.e, -0.640006961124E+01, eps);
    BOOST_CHECK_CLOSE(xc.de_dra, -0.999866513511E-01, eps);
    BOOST_CHECK_CLOSE(xc.de_drb, -0.100372571062E+00, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, 0.184826494395E-06, eps);
    BOOST_CHECK_CLOSE(xc.de_dgab, 0.369652988790E-06, eps);
    BOOST_CHECK_CLOSE(xc.de_dgbb, 0.184826494395E-06, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drara, -0.263846884982E-03, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drarb, -0.650432018513E-03, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbrb, -0.265180694533E-03, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragaa, 0.136557309627E-08, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragab, 0.273114619254E-08, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragbb, 0.136557309627E-08, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgaa, 0.137496927033E-08, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgab, 0.274993854066E-08, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgbb, 0.137496927033E-08, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, -0.100927632053E-13, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagab, -0.201855264106E-13, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagbb, -0.100927632053E-13, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgabgab, -0.403710528212E-13, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgab, -0.201855264106E-13, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgbb, -0.100927632053E-13, eps);
    xc = pw91_c_functional(0.39E+02, 0.38E+02, 0.81E+06, 0.82E+06, 0.82E+06, 2);
    BOOST_CHECK_CLOSE(xc.e, -0.258051271460E+01, eps);
    BOOST_CHECK_CLOSE(xc.de_dra, -0.917654870253E-01, eps);
    BOOST_CHECK_CLOSE(xc.de_drb, -0.924958459953E-01, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, 0.504340587823E-06, eps);
    BOOST_CHECK_CLOSE(xc.de_dgab, 0.100868117565E-05, eps);
    BOOST_CHECK_CLOSE(xc.de_dgbb, 0.504340587823E-06, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drara, -0.673510067892E-03, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drarb, -0.140781632726E-02, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbrb, -0.681437355666E-03, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragaa, 0.880806595654E-08, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragab, 0.176161319131E-07, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragbb, 0.880806595654E-08, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgaa, 0.892599758143E-08, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgab, 0.178519951629E-07, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgbb, 0.892599758143E-08, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, -0.173276860156E-12, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagab, -0.346553720312E-12, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagbb, -0.173276860156E-12, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgabgab, -0.693107440625E-12, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgab, -0.346553720312E-12, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgbb, -0.173276860156E-12, eps);
    xc = pw91_c_functional(0.13E+00, 0.95E-01, 0.15E+00, 0.18E+00, 0.22E+00, 2);
    BOOST_CHECK_CLOSE(xc.e, -0.475398805591E-02, eps);
    BOOST_CHECK_CLOSE(xc.de_dra, -0.614930812180E-01, eps);
    BOOST_CHECK_CLOSE(xc.de_drb, -0.682665101239E-01, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, 0.486210103008E-02, eps);
    BOOST_CHECK_CLOSE(xc.de_dgab, 0.972420206015E-02, eps);
    BOOST_CHECK_CLOSE(xc.de_dgbb, 0.486210103008E-02, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drara, -0.180150058142E+00, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drarb, -0.388435750226E+00, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbrb, -0.208827666674E+00, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragaa, 0.288797891283E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragab, 0.577595782566E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragbb, 0.288797891283E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgaa, 0.338842245007E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgab, 0.677684490015E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgbb, 0.338842245007E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, -0.755929074438E-02, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagab, -0.151185814888E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagbb, -0.755929074438E-02, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgabgab, -0.302371629775E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgab, -0.151185814888E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgbb, -0.755929074438E-02, eps);
    xc = pw91_c_functional(0.78E-01, 0.31E-01, 0.41E-02, 0.38E-02, 0.36E-02, 2);
    BOOST_CHECK_CLOSE(xc.e, -0.450106022368E-02, eps);
    BOOST_CHECK_CLOSE(xc.de_dra, -0.568426120793E-01, eps);
    BOOST_CHECK_CLOSE(xc.de_drb, -0.876498238182E-01, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, 0.531751834129E-01, eps);
    BOOST_CHECK_CLOSE(xc.de_dgab, 0.106350366826E+00, eps);
    BOOST_CHECK_CLOSE(xc.de_dgbb, 0.531751834129E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drara, 0.192611490688E+00, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drarb, -0.331153469676E+00, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbrb, 0.645433404561E+00, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragaa, -0.308498888708E+00, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragab, -0.616997777417E+00, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragbb, -0.308498888708E+00, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgaa, -0.129198778272E+00, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgab, -0.258397556545E+00, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgbb, -0.129198778272E+00, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, -0.119074508391E+01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagab, -0.238149016782E+01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagbb, -0.119074508391E+01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgabgab, -0.476298033563E+01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgab, -0.238149016782E+01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgbb, -0.119074508391E+01, eps);
    xc = pw91_c_functional(0.50E+02, 0.49E+02, 0.11E+06, 0.11E+06, 0.11E+06, 2);
    BOOST_CHECK_CLOSE(xc.e, -0.872911626818E+01, eps);
    BOOST_CHECK_CLOSE(xc.de_dra, -0.132719827372E+00, eps);
    BOOST_CHECK_CLOSE(xc.de_drb, -0.133959465417E+00, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, 0.344083560595E-05, eps);
    BOOST_CHECK_CLOSE(xc.de_dgab, 0.688167121190E-05, eps);
    BOOST_CHECK_CLOSE(xc.de_dgbb, 0.344083560595E-05, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drara, 0.505964577930E-03, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drarb, -0.726078033783E-03, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbrb, 0.521227370759E-03, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragaa, 0.115106405575E-08, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragab, 0.230212811151E-08, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragbb, 0.115106405575E-08, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgaa, 0.151586408760E-08, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgab, 0.303172817520E-08, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgbb, 0.151586408760E-08, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, -0.463769328565E-11, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagab, -0.927538657130E-11, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagbb, -0.463769328565E-11, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgabgab, -0.185507731426E-10, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgab, -0.927538657130E-11, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgbb, -0.463769328565E-11, eps);
    xc = pw91_c_functional(0.40E+02, 0.40E+02, 0.99E+05, 0.98E+05, 0.98E+05, 2);
    BOOST_CHECK_CLOSE(xc.e, -0.638715240205E+01, eps);
    BOOST_CHECK_CLOSE(xc.de_dra, -0.130151243760E+00, eps);
    BOOST_CHECK_CLOSE(xc.de_drb, -0.130151243760E+00, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, 0.356214344775E-05, eps);
    BOOST_CHECK_CLOSE(xc.de_dgab, 0.712428689549E-05, eps);
    BOOST_CHECK_CLOSE(xc.de_dgbb, 0.356214344775E-05, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drara, 0.429350078205E-03, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drarb, -0.992413954431E-03, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbrb, 0.429350078205E-03, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragaa, 0.140483701399E-07, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragab, 0.280967402798E-07, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragbb, 0.140483701399E-07, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgaa, 0.140483701399E-07, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgab, 0.280967402798E-07, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgbb, 0.140483701399E-07, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, -0.640783905442E-11, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagab, -0.128156781088E-10, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagbb, -0.640783905442E-11, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgabgab, -0.256313562177E-10, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgab, -0.128156781088E-10, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgbb, -0.640783905442E-11, eps);
    xc = pw91_c_functional(0.12E+00, 0.10E+00, 0.12E+00, 0.13E+00, 0.14E+00, 2);
    BOOST_CHECK_CLOSE(xc.e, -0.566491852414E-02, eps);
    BOOST_CHECK_CLOSE(xc.de_dra, -0.681082463225E-01, eps);
    BOOST_CHECK_CLOSE(xc.de_drb, -0.726308333024E-01, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, 0.680369403563E-02, eps);
    BOOST_CHECK_CLOSE(xc.de_dgab, 0.136073880713E-01, eps);
    BOOST_CHECK_CLOSE(xc.de_dgbb, 0.680369403563E-02, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drara, -0.109303945624E+00, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drarb, -0.339659817865E+00, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbrb, -0.117365761801E+00, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragaa, 0.302762854212E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragab, 0.605525708424E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragbb, 0.302762854212E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgaa, 0.340221664665E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgab, 0.680443329331E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgbb, 0.340221664665E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, -0.128174817765E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagab, -0.256349635531E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagbb, -0.128174817765E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgabgab, -0.512699271061E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgab, -0.256349635531E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgbb, -0.128174817765E-01, eps);
    xc = pw91_c_functional(0.48E-01, 0.25E-01, 0.46E-02, 0.44E-02, 0.41E-02, 2);
    BOOST_CHECK_CLOSE(xc.e, -0.211597767436E-02, eps);
    BOOST_CHECK_CLOSE(xc.de_dra, -0.596711649572E-01, eps);
    BOOST_CHECK_CLOSE(xc.de_drb, -0.769843756564E-01, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, 0.535412730241E-01, eps);
    BOOST_CHECK_CLOSE(xc.de_dgab, 0.107082546048E+00, eps);
    BOOST_CHECK_CLOSE(xc.de_dgbb, 0.535412730241E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drara, 0.507933219381E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drarb, -0.677294674321E+00, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbrb, 0.167846055847E+00, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragaa, 0.169155786052E+00, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragab, 0.338311572103E+00, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragbb, 0.169155786052E+00, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgaa, 0.435630247613E+00, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgab, 0.871260495226E+00, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgbb, 0.435630247613E+00, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, -0.215562112877E+01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagab, -0.431124225755E+01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagbb, -0.215562112877E+01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgabgab, -0.862248451509E+01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgab, -0.431124225755E+01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgbb, -0.215562112877E+01, eps);
}

