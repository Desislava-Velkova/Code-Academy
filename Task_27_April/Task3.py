class A:
    def __init__(self, a):
        self.a = a
        
    def __gt__(self, other):
        if (self.a > other.a):
            return True
        else:
            return False
        

ob1 = A(5)
ob2 = A(6)
        
        
if (ob1 > ob2):
    print('Ob1 is greater than ob2')
else:
    print('Ob2 is greater than ob1')
        
