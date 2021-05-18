from Task1 import StatsList
import unittest

class TestValidInputs(unittest.TestCase):
    
    def setUp(self):
        self.Task1 = StatsList([1,2,2,3,3,4])
        
    def test_mean(self):
        self.assertEqual(self.Task1.mean(), 2.5)
        
    def test_median(self):
        self.assertEqual(self.Task1.median(), 2.5)
        self.Task1.append(4)
        self.assertEqual(self.Task1.median(), 3)
        
    def test_mode(self):
        self.assertEqual(self.Task1.median(),[2,3])
        self.Task1.remove(2)
        self.assertEqual(self.Task1.mode(),3)
        
if __name__ == "__main__":
    unittest.main()