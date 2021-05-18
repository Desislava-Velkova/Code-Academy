def addition(x,y):
    return x + y
    
def substraction(x,y):
    return x - y

def division(x,y):
    if x == 0 or y == 0:
        raise ZeroDivisionError("You can't pass 0 as a parameter to the division function")
    return x / y

def multiplication(x,y):
    return x * y