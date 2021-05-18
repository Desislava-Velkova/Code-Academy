from stats import Data
import unittest

class TestData(unittest.TestCase):
    
    def test_average(self):
        self.assertEqual(Data.average([5,10]),7.5)


if __name__ == "__main__":
    unittest.main()
                