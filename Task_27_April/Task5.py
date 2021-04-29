"""
    Function overloading:
"""

class Word:
    
    def hello(self, name=None):
        if name is not None:
            print("Hi", name)
        else:
            print("Hello")
            
obj = Word()
obj.hello()
obj.hello("Ann")