"""
    Write a class Square with two methods perimeter() = perimeter calculation
    area() - area calculation
    
    Calculate the perimeter and area of square with side = 2.56
"""

class Square:
        def __init__(self, perimether):
            self.perimeter = perimether
            
        def perimeter_calculation(self):
            return 4 * self.perimeter
        
        def area_calculation(self):
            return self.perimeter **2
        
my_square = Square(2.56)

print("The result of perimeter calculation is:", my_square.perimeter_calculation())
print("The result of area calculation is:", my_square.area_calculation())