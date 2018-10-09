import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsuhfvwnccpvtz(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-methods-uhfvwn-cc-pvtz")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -1071.5404916942, 2)

if __name__ == '__main__':
    unittest.main()
