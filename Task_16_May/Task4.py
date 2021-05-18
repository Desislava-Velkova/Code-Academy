import calc
import unittest

class TestCalculation(unittest.TestCase):
    
    def test_addition(self):
        self.assertEqual(calc.addition(10, 5), 15)
        self.assertEqual(calc.addition(-10, 5), -5)
        self.assertEqual(calc.addition(-3, 3), 0)
        
    def test_substraction(self):
        self.assertEqual(calc.substraction(10, 5), 5)
        self.assertEqual(calc.substraction(10, -5), 15)
        self.assertEqual(calc.substraction(-10, -5), -5)
        self.assertEqual(calc.substraction(-10, 5), -15)
        
    def test_division(self):
        self.assertEqual(calc.division(10, 5), 2)
    
    def test_multiplication(self):
        self.assertEqual(calc.multiplication(5, 5), 25)
        
        
if __name__ == "__main__":
    unittest.main()