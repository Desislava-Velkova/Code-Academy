#Test the method display() by patching perimether()

from unittest import TestCase
from unittest.mock import patch
from Rectangle_module import Rectangle

class TestRectangle(TestCase):
    
    def setUp(self):
        self.rect = Rectangle(2,4)

    
    @patch('Rectangle_module.Rectangle.perimether', return_value = 2)
    def test_perimether(self,param):
        print(param)
        
        self.assertEqual(self.rect.perimether(), 2)

    
    def test_display(self):
        
        output = {'Length': 2, 'Width': 4, 'SideA': 4, 'SideB': 8, 'Area': 8}

        
        self.assertEqual(self.rect.display() , output, "Enter wrong width or length")