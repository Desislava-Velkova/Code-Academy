"""
    unit test's - decorators
"""

import unittest
import sys

class SkipTests(unittest.TestCase):
    
    @unittest.expectedFailure
    def test_fails(self):
        self.assertEqual(False, True)
    
    @unittest.skip("Test is useless")
    def test_fail(self):
        self.assertEqual(False, True)
        
    @unittest.skipIf(sys.version_info.minor == 9, "broken on 3.9.5")
    def test_skipif(self):
        self.assertEqual(False, True)
        
    @unittest.skipUnless(sys.platform.startswith("linux"), "broken unless linux")
    def test_skipunless(self):
        self.assertEqual(False, True)
        
if __name__ == "__main__":
    unittest.main()
        