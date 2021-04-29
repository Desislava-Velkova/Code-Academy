"""
    Classes:
    
"""

class dog:
    def __init__(self):
        self.legs = 4

class human:
    def __init__(self):
        self.legs = 2
        self.arms = 2


ivan = human()
sharo = dog()

print("Ivan have " ,ivan.legs, "legs")
print("Sharo have " ,sharo.legs, "legs")