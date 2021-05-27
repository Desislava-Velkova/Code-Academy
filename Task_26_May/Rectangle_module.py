'''
    Write a Rectangle class, alowing you to build a rectangle with length and width attributes.
    
    Create a perimeter() method to calculate the perimether of the rectangle and a area() method to 
    calculate the area of the rectangle.
    
    Create a method display() that display the length, widht, perimether and area of an
    object created using a instantion of rectangle class.
    
    Test the method display() by mocking area() method.
    Test the method display() by patching perimether()
'''



class Rectangle():
    
    def __init__(self, length, width):
        self.length = length
        self.width = width
    
    def perimether(self,param):
        return param * 2
        
    def area(self):
        return self.length * self.width
    
    def display(self):
        paramethers = {}
        
        paramethers["Length"] = self.length
        paramethers["Width"] = self.width
        paramethers["SideA"] = self.perimether(self.length)
        paramethers["SideB"] = self.perimether(self.width)
        paramethers["Area"] = self.area()
        
        return paramethers
        
        

        
        
        
        