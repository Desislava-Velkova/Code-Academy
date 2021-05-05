"""
    Write a class cylinder with twho methods volume() and area()
    
    Calculate the volume and area of the cylinder with radius = 5 and high = 10
"""

from math import pi

class Cylinder:
    
    def __init__(self, radius, high):
        self.radius = radius
        self.high = high
        
    def volume_calculate(self):
        return (pi * (self.radius**2 * self.high))
    
    def area_calculate(self):
        return (pi * (self.radius**2))
    
my_cylinder = Cylinder(5, 10)

print("The volume of the cylinder is:", my_cylinder.volume_calculate())
print("The area of the cylinder is:", my_cylinder.area_calculate())