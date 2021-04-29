"""
    Overloading method:
"""

class A:
    def __init__(self, a):
        self.a = a
        
    def __add__(self, o):
        return self.a + o.a
        
ob1 = A(1)
ob2 = A(2)
ob3 = A("CodeAcademy")
ob4 = A("is")

print(ob1 + ob2)
print(ob3 + ob4)

