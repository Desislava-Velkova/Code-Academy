import math

class Point:
    
    def __init__(self, x=0, y=0):
        self.move(x, y)
        
    def move(self, x, y):
        self.x = x
        self.y = y
        
    def reset(self):
        self.move(0, 0)
        
    def calculate(self, other_point):
        return math.sqrt((self.x - other_point.x)**2 + (self.y - other_point.y)**2)
        

a = Point()
b = Point()

a.reset()

b.move(5, 0)

print(b.calculate(a))

assert b.calculate(a) == a.calculate(b) 

a.move(3, 4)

print(b.calculate(a))

print(a.calculate(a))












































































    

