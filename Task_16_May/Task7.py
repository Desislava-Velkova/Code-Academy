from Example1 import EvenNumber
import unittest


class TestEvenNumbers(unittest.TestCase):
    result = []
    output = [x  for x in range(200,241) if x%2 == 0]
    func = checkEvenNumber()
    
    def test_even_number(self):
        for i in func:
            if self.assertEqual(i%2 , 0):
                result.append(i)
        
        self.assertEqual(result, output)
    
if __name__ == "__main__":
    unittest.main()
                