'''
    test driven developer (TDD)
'''
from calculator import Calculator
import unittest


class TestTDDSum(unittest.TestCase):
    
    def test_tdd_sum(self):
        calc = Calculator()
        result = calc.add(10,10)
        self.assertEqual(20, result)