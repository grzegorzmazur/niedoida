import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsmpw2plyp631g(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-methods-mpw2plyp-6-31g")

    def test_energy(self):
        self.assertAlmostEqual(self.data.mpenergies[0][0], -2076.0836, 2)

if __name__ == '__main__':
    unittest.main()
