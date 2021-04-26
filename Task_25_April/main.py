# TODO: One method for overloading and one for overriding
# Method for overloading needs to do:
#    if he receives arguments str and int = multiplication
#    if he receives arguments str and str = concatenation
#    if he receives arguments int and int = add



#overloading method example

print('\n Overloading method example: \n')

class calculate:
    def __init__(self):
            self.data = []

    def sum(self, a, b):
        
        if type(a) == str and type(b) == str:
            result = a + b
    
            return result
        
        elif type(a) == int and type(b) == int:
            result = a + b
            
            return result
        
        else:
            result = a * b
            
            return result
        
test_object = calculate()

print('Result of arguments str and str:', test_object.sum( '10', '2'))
print('Result of arguments int and int:',test_object.sum( 10, 2))
print('Result of arguments str and int:',test_object.sum( '10', 3))


# overriding method example

print('\n Overriding method example: \n')

class parent:
    def __init__(self):
            self.data = []
    
    def message(self):
        print('You are in parent class')
        
class child:
    def __init__(self):
            self.data = []
            
    def message(self):
        print('You are in child class')
    
    

class_object = parent()
class_object.message()


class_object = child()
class_object.message()

