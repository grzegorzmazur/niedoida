import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodssvwnccpvtz(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test05")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -2065.30074144725, 2)

if __name__ == '__main__':
    unittest.main()
