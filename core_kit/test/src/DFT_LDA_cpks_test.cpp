/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include <boost/test/unit_test.hpp>
#include <boost/filesystem.hpp>
#include "core_kit/core_kit.hpp"
#include "core_kit/system.hpp"
#include "core_kit/hessian_engine.hpp"
#include "scf_kit/scf_kit.hpp"
#include "test_systems.hpp"
#include "test_Fock_Matrices.hpp"
#include "gto_kit/os1_integral_engine_factory.hpp"
#include <string>
#include <sstream>
#include <petsctao.h>

 using namespace boost::unit_test; 
 using namespace niedoida;

void test_Slater_H2O_3_21g_cpks( ) {
    std::shared_ptr<core::System> system  = create_system_H2O_3_21G();

    std::shared_ptr<const core::FockMatrixGeneratorFactory> fm_gen = create_simple_LDA_KS_Matrix_Generator( system );
    std::unique_ptr<core::FockMatrixGenerator> FMG = fm_gen->make( system );
    const std::size_t lumo_idx = system->no_electrons( core::SPIN_ALPHA );
    arma::mat C = {{  2.68201450e-03,  1.16396163e-01, -2.19412707e-01,  1.25516270e-01,
            2.29254420e-11, -9.66705641e-02,  1.06462832e-01, -9.32978961e-01,
            9.22928323e-01,  3.55736331e-10, -3.42003935e-01,  2.16470891e-01,
            2.74353562e-01},
         {  7.16397997e-03,  4.11909253e-02, -2.29695853e-01,  1.51016049e-01,
            2.45422205e-10, -7.85525459e-01,  1.00840877e+00,  8.54482568e-01,
           -5.92043543e-01, -9.33950881e-11, -4.69964642e-02,  4.36474303e-01,
            3.31132407e-01},
         {  2.68201451e-03,  1.16396163e-01,  2.19412707e-01,  1.25516270e-01,
            4.10121286e-11, -9.66705642e-02, -1.06462832e-01,  9.32978960e-01,
            9.22928324e-01,  3.52573989e-10, -3.42003935e-01, -2.16470891e-01,
            2.74353562e-01},
         {  7.16397996e-03,  4.11909253e-02,  2.29695853e-01,  1.51016049e-01,
            3.10860226e-10, -7.85525459e-01, -1.00840877e+00, -8.54482567e-01,
           -5.92043544e-01,  2.32331914e-11, -4.69964642e-02, -4.36474303e-01,
            3.31132407e-01},
         {  9.81029759e-01, -2.25323903e-01, -1.75724117e-11,  1.12607921e-01,
            9.33600932e-11, -1.08733573e-01, -5.41706049e-12, -4.14014328e-11,
            4.93724532e-02,  4.60486201e-11, -5.31744289e-02,  4.01893980e-12,
           -9.51944376e-02},
         {  1.07611811e-01,  2.08119680e-01,  2.64883498e-12, -9.00503609e-02,
           -5.24505058e-11,  6.16191562e-02,  2.52016506e-12,  6.28167897e-11,
           -9.81701559e-02, -1.51337747e-10,  1.43739735e-01, -3.60468732e-12,
            1.62335540e+00},
         { -3.58152232e-13,  2.66833017e-11, -4.07706232e-01,  2.50965947e-11,
           -6.82144919e-13,  1.63762068e-11, -3.88588188e-01,  2.12662387e-01,
            9.66893701e-11, -7.41790985e-11,  9.36315909e-11,  1.02773849e+00,
           -9.74895376e-12},
         {  3.57083436e-03,  1.27245027e-01,  2.95362249e-11,  4.27937688e-01,
            1.36175509e-10,  2.85234413e-01,  3.01689119e-11,  1.90706619e-10,
           -3.33711632e-01,  7.67298215e-10, -9.78568496e-01,  8.73360393e-11,
            1.50086763e-01},
         {  2.58159385e-13,  4.48102372e-11, -1.01195865e-11, -2.30801195e-10,
            5.24284245e-01,  1.04063325e-10,  2.48031430e-11,  1.94714601e-11,
           -6.84329900e-11,  1.02775204e+00,  8.39195699e-10,  7.58620922e-11,
            1.17923368e-11},
         { -4.26962336e-02,  6.76400102e-01,  5.92847376e-11, -5.08141989e-01,
           -5.16068613e-10,  9.19481054e-01,  5.88514470e-11,  6.77999826e-12,
            9.62978287e-02, -7.44680987e-11,  1.58271648e-01, -1.69421558e-11,
           -1.89887970e+00},
         { -9.74112237e-13,  2.11990842e-11, -3.45131491e-01,  3.87232476e-11,
            1.83312506e-11,  6.89679232e-11, -7.14109914e-01,  1.87857357e-01,
            1.29722595e-10,  1.05807244e-10, -1.25990865e-10, -1.42089301e+00,
            7.12530328e-12},
         { -7.07786868e-03,  1.22781062e-01,  3.31211454e-11,  4.67055839e-01,
            8.55368320e-11,  4.74442417e-01,  6.02213296e-11,  7.98437976e-11,
           -9.47546391e-02, -9.48959423e-10,  1.17070613e+00, -1.04983028e-10,
           -4.71619340e-01},
         { -3.76279087e-12,  4.31793015e-11, -1.21595833e-11, -2.87398135e-10,
            6.29294204e-01,  1.64324038e-10,  7.49989378e-12, -1.96392690e-11,
            1.15289678e-10, -9.67024229e-01, -7.85360938e-10, -6.73027333e-11,
           -2.07731467e-11}};

    arma::mat P = scf::density_matrix( C, lumo_idx );

    std::vector<unsigned> atoms;
    atoms.push_back( 0 );
    atoms.push_back( 1 );
	atoms.push_back( 2 );
    
    std::shared_ptr<const core::TwoElectronIntegralEngineFactory> two_e_ie_factory;
    two_e_ie_factory.reset( new gto::OS1TwoElectronIntegralEngineFactory( 1e-6 ) );
    std::vector< arma::mat> dS_x_occ_occ;
	std::vector< arma::mat> dS_y_occ_occ;
	std::vector< arma::mat> dS_z_occ_occ;

	std::vector< arma::mat> dFock_x_occ_occ;
	std::vector< arma::mat> dFock_y_occ_occ;
	std::vector< arma::mat> dFock_z_occ_occ;

	std::vector< arma::mat> dS_x_occ_virt;
	std::vector< arma::mat> dS_y_occ_virt;
	std::vector< arma::mat> dS_z_occ_virt;

	std::vector< arma::mat> dFock_x_occ_virt;
	std::vector< arma::mat> dFock_y_occ_virt;
	std::vector< arma::mat> dFock_z_occ_virt;

	std::vector< arma::mat> u_x_occ_virt;
	std::vector< arma::mat> u_y_occ_virt;
	std::vector< arma::mat> u_z_occ_virt;
	
	unsigned no_occ = lumo_idx;
	unsigned no_virt = C.n_rows - no_occ;
	
	std::vector< arma::mat> u_x_occ_virt_true;
	u_x_occ_virt_true.push_back( {{  3.51122060e-02,  4.43504761e-02, -1.48650522e-02,  2.43178828e-02,
    1.27011523e-11,  1.96240388e-02, -2.81692959e-02,  2.70100178e-02},
 {  1.29199283e-01,  2.03498282e-01, -1.31418649e-01,  1.52455855e-01,
    4.66885096e-11,  9.62337040e-02, -1.64204043e-01,  1.27591515e-01},
 {  2.74679387e-01,  2.39134685e-01,  1.97670170e-01, -9.76273741e-02,
   -9.45004101e-12,  2.00712707e-02, -3.05952510e-02,  7.31931736e-02},
 { -1.06540202e-01, -4.37879122e-02, -1.34197593e-01,  8.73944960e-02,
    4.48993776e-12,  8.02251638e-03, -3.10248873e-02, -1.95546374e-03},
 { -8.04330410e-10,  4.50671940e-11, -1.21710975e-11,  3.14720754e-11,
   -4.69017353e-03, -6.97711042e-11,  6.53612252e-12, -4.31467288e-11}}
 );
	u_x_occ_virt_true.push_back({{ -3.51058675e-02,  4.43605910e-02, -1.48652774e-02, -2.43384533e-02,
   -2.06375398e-11, -1.96324193e-02, -2.81702385e-02, -2.70170099e-02},
 { -1.29144665e-01,  2.03533872e-01, -1.31378882e-01, -1.52551368e-01,
   -9.32623380e-11, -9.62690188e-02, -1.64202822e-01, -1.27625691e-01},
 {  2.74667772e-01, -2.39258313e-01, -1.97589163e-01, -9.76798093e-02,
    9.61369109e-12,  2.00891597e-02,  3.06128083e-02,  7.32131994e-02},
 {  1.06574159e-01, -4.38080156e-02, -1.34163565e-01, -8.74578462e-02,
   -2.19777563e-11, -8.04198054e-03, -3.10220308e-02,  1.95073151e-03},
 {  1.52277624e-10, -1.57238948e-10,  1.75689766e-11,  3.96256526e-11,
    4.67441782e-03,  3.50467274e-11,  3.83209502e-11,  4.33129518e-11}}
);
	u_x_occ_virt_true.push_back({{ -1.34502165e-05, -8.87109107e-02,  2.97299316e-02, -2.81646971e-05,
   -7.87697771e-12, -9.42735604e-06,  5.63395964e-02,  6.65345387e-06},
 { -1.02078020e-04, -4.07030823e-01,  2.62799704e-01, -1.59397808e-04,
   -4.66322606e-11, -4.15848227e-05,  3.28407964e-01,  3.78386338e-05},
 {  5.49349896e-01, -2.01439649e-04,  1.42389216e-04,  1.95301372e-01,
    2.83509234e-12, -4.01616714e-02, -1.32434090e-06,  1.46406279e-01},
 { -6.66157848e-05,  8.76031933e-02,  2.68363862e-01, -1.23705384e-04,
   -1.69330064e-11, -2.73483560e-05,  6.20470610e-02, -1.78981523e-07},
 { -6.02757326e-10,  1.08900954e-10,  3.10541100e-12, -6.67343691e-11,
    2.94812132e-05,  2.35346978e-11, -3.30063159e-11, -3.71530056e-12}}

);
	std::vector< arma::mat> u_y_occ_virt_true;
	u_y_occ_virt_true.push_back({{  2.76338828e-02,  3.45674885e-02,  1.15471659e-02,  1.91990410e-02,
   -1.24949428e-11, -1.54063340e-02,  2.25138215e-02,  2.12363015e-02},
 {  7.60317004e-02,  6.33723521e-02,  6.98510999e-02,  1.15416111e-01,
   -4.67109631e-11, -8.47902387e-02,  6.86041581e-02,  7.42944121e-02},
 {  9.43119453e-03,  3.51910629e-02, -1.36386929e-01, -1.81041663e-01,
    1.11516288e-10,  1.11254413e-01, -1.84853828e-02, -4.91501240e-02},
 { -3.07948774e-01, -3.28206120e-01,  2.15198432e-03, -3.19746260e-02,
    1.37727785e-11,  3.84530968e-02, -1.33902930e-01, -1.07385353e-01},
 { -7.03602882e-10, -8.18270893e-11, -3.19820895e-11, -1.91047416e-11,
    8.64254289e-03,  5.23979354e-11, -8.09513373e-11, -7.29387275e-11}}
);
	u_y_occ_virt_true.push_back({{ -2.76338827e-02, -3.45673136e-02,  1.15467378e-02, -1.91990411e-02,
    1.40555455e-11, -1.54063340e-02,  2.25138368e-02, -2.12363014e-02},
 { -7.60317009e-02, -6.33707559e-02,  6.98534598e-02, -1.15416111e-01,
    8.14798542e-11, -8.47902388e-02,  6.86047418e-02, -7.42944122e-02},
 {  9.42973363e-03,  3.51910628e-02,  1.36386929e-01, -1.81038018e-01,
    1.05685317e-10, -1.11253433e-01,  1.84853827e-02, -4.91501293e-02},
 {  3.07948774e-01,  3.28207203e-01,  2.15558225e-03,  3.19746259e-02,
   -4.05032473e-11,  3.84530968e-02, -1.33902515e-01,  1.07385353e-01},
 {  2.05851000e-10,  1.64520106e-10, -4.19747751e-11,  4.60912750e-11,
   -8.64254291e-03,  1.81833625e-11, -9.48004760e-11,  8.39666015e-11}}
);
	u_y_occ_virt_true.push_back({{  5.52645211e-02, -1.61213928e-10, -3.32357244e-10, -3.84173808e-02,
   -2.93630777e-11,  3.08154160e-02, -2.10145847e-10,  4.24764622e-02},
 {  1.52041522e-01,  7.16373698e-10,  1.31284849e-09, -2.30875277e-01,
   -1.16744404e-10,  1.69573999e-01,  5.17813080e-10,  1.48590951e-01},
 {  3.03652276e-09, -7.04340597e-02, -2.72697909e-01, -3.09493686e-10,
   -7.12224354e-11,  4.09151143e-10,  3.69728550e-02, -2.55765280e-10},
 { -6.15910975e-01, -1.01540563e-09, -5.14057964e-10,  6.40408279e-02,
    6.59266284e-11, -7.69278958e-02, -2.78092783e-10, -2.14809288e-01},
 { -1.07097933e-09,  1.19940316e-10,  1.43996642e-10,  1.05317136e-10,
    1.72750123e-02, -9.87601959e-11,  3.46634526e-11, -1.65748632e-10}}

);
	std::vector< arma::mat> u_z_occ_virt_true;
	u_z_occ_virt_true.push_back({{  1.17675484e-06, -1.47851917e-06, -4.64044954e-07, -8.17718480e-07,
   -5.38589812e-04,  6.43761798e-07, -8.62213188e-07,  8.99927678e-07},
 {  5.54790091e-06, -6.78413974e-06, -3.79821362e-06, -5.88970977e-06,
    2.18337717e-02,  4.48478816e-06, -5.16357672e-06,  4.61898937e-06},
 {  3.99276740e-07,  2.96913298e-07,  7.92478936e-06,  7.67273719e-06,
   -5.50073353e-02, -4.71428310e-06,  3.05826103e-06, -2.08262643e-06},
 { -2.87134823e-06,  1.46027860e-06, -3.15887855e-06, -3.62754642e-06,
    3.81917574e-02,  1.99206658e-06, -1.13437973e-06,  3.25165770e-07},
 { -2.80379053e-01,  3.20604819e-01,  1.15194591e-01,  1.54280803e-01,
   -2.61600700e-07, -9.43480877e-02,  1.34771303e-01, -1.24711357e-01}}
);
	u_z_occ_virt_true.push_back({{ -1.17674249e-06,  1.30364476e-06,  3.59682488e-08, -8.17712392e-07,
    5.38488152e-04,  6.43754087e-07,  8.77583371e-07, -8.99899662e-07},
 { -5.54795855e-06,  5.18771599e-06,  6.15846574e-06, -5.88972255e-06,
   -2.18346656e-02,  4.48482399e-06,  5.74733308e-06, -4.61892532e-06},
 { -1.06118572e-06,  2.96872919e-07,  7.92478118e-06, -4.02706790e-06,
   -5.50073686e-02,  3.73439295e-06,  3.05825384e-06, -2.08801550e-06},
 {  2.87139033e-06, -2.54389275e-06,  6.75668559e-06, -3.62755007e-06,
   -3.81919877e-02,  1.99213473e-06,  1.54922407e-06, -3.25190725e-07},
 {  2.80379053e-01, -3.20605368e-01, -1.15194614e-01,  1.54280803e-01,
    2.61562232e-07, -9.43480877e-02, -1.34771376e-01,  1.24711357e-01}}
);
	u_z_occ_virt_true.push_back({{ -2.36640121e-06,  1.13089925e-11,  7.75746605e-12,  1.64898107e-06,
    1.07497451e-03, -1.26644193e-06, -3.61125611e-12,  1.79857028e-06},
 { -1.35798001e-05, -9.07020305e-12, -1.35883639e-11,  1.33916564e-05,
   -4.36788737e-02, -1.15224399e-05,  2.43785519e-11,  9.96901347e-06},
 {  3.37919446e-11,  2.98398001e-06, -1.15556252e-05, -1.40560905e-11,
    1.82669937e-07,  9.61155189e-13,  1.56664650e-06, -9.17060538e-12},
 {  4.38179707e-06,  5.51338230e-11,  1.28844899e-11,  8.68139112e-06,
   -7.63918932e-02, -7.43279877e-06, -2.44792903e-12,  1.43035439e-06},
 { -5.60753432e-01, -5.46736522e-11,  1.79675389e-10,  3.08564569e-01,
   -7.32786358e-07, -1.88696025e-01, -2.21353994e-11,  2.49422542e-01}}
);

	arma::vec eps = {-18.38362731, -0.81731845, -0.38085042, -0.20783405, -0.13270241,
       0.09702211,  0.18315118,  0.92433665,  0.97612789,  1.41403116,
       1.50208121,  1.60478263,  2.69591184};
    
    core::calc_dS_dFock( system, fm_gen, C, atoms,
			    dS_x_occ_occ, dS_y_occ_occ, dS_z_occ_occ,
			    dFock_x_occ_occ, dFock_y_occ_occ, dFock_z_occ_occ,
			    dS_x_occ_virt, dS_y_occ_virt, dS_z_occ_virt,
			    dFock_x_occ_virt, dFock_y_occ_virt, dFock_z_occ_virt);
    
	core::energy_hessian_from_cphf( system, C, eps, atoms,
							  dS_x_occ_occ, dS_y_occ_occ, dS_z_occ_occ,
							  dS_x_occ_virt, dS_y_occ_virt, dS_z_occ_virt,
							  dFock_x_occ_virt, dFock_y_occ_virt, dFock_z_occ_virt,
							  u_x_occ_virt, u_y_occ_virt, u_z_occ_virt,
							  two_e_ie_factory, fm_gen );
	unsigned no_atoms = atoms.size();
    
	for ( unsigned atom_ind = 0; atom_ind < no_atoms ; atom_ind++ ) {
		for( unsigned row = 0; row < no_occ; row++ )
			for( unsigned col = 0; col < no_virt; col++ )
                if ( std::abs(u_x_occ_virt[atom_ind]( row, col )) > 0.001 && std::abs(u_x_occ_virt_true[atom_ind]( row, col )) > 0.001 ) 
				    BOOST_CHECK_CLOSE( std::abs(u_x_occ_virt[atom_ind]( row, col )), std::abs(u_x_occ_virt_true[atom_ind]( row, col )), 2.5 );

		for( unsigned row = 0; row < no_occ; row++ )
			for( unsigned col = 0; col < no_virt; col++ )
                if ( std::abs(u_y_occ_virt[atom_ind]( row, col )) > 0.001 && std::abs(u_x_occ_virt_true[atom_ind]( row, col )) > 0.001 ) 
				    BOOST_CHECK_CLOSE( std::abs(u_y_occ_virt[atom_ind]( row, col )), std::abs(u_y_occ_virt_true[atom_ind]( row, col )), 2.5 );

		for( unsigned row = 0; row < no_occ; row++ )
			for( unsigned col = 0; col < no_virt; col++ )
                if ( std::abs(u_z_occ_virt[atom_ind]( row, col )) > 0.001 && std::abs(u_x_occ_virt_true[atom_ind]( row, col )) > 0.001) 
				    BOOST_CHECK_CLOSE( std::abs(u_z_occ_virt[atom_ind]( row, col )), std::abs(u_z_occ_virt_true[atom_ind]( row, col )), 2.5 );
	}
}

test_suite* test_DFT_LDA_CPKS() {
    test_suite * ts=BOOST_TEST_SUITE( "CORE_KIT DFT LDA CPKS test" );
    ts->add( BOOST_TEST_CASE( & test_Slater_H2O_3_21g_cpks ) );
    return ts;
}
