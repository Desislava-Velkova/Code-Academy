"""
    unit test's
"""

import unittest

class CheckIntFloat(unittest.TestCase):

    def test_init_float(self):
        self.assertEqual(1,1.0)
        
if __name__ == "main":
    unittest.main()