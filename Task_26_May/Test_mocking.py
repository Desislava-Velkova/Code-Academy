#Test the method display() by mocking area() method.

from unittest import TestCase
from unittest.mock import Mock
from Rectangle_module import Rectangle

class TestRectangle(TestCase):
    
    def setUp(self):
        self.rect = Rectangle(2,4)


    def test_area(self):
        
        area = Mock(return_value = 8)
        
        self.assertEqual(area(2,4), 8)
        print("The mock result is: ", area.return_value)
        
    

    def test_display(self):
        
        output = {'Length': 2, 'Width': 4, 'SideA': 4, 'SideB': 8, 'Area': 8}

        
        self.assertEqual(self.rect.display() , output, "Enter wrong width or length")
        
        


