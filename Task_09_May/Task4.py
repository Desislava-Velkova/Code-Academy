def no_return():
    print("I'm about to raise exception")
    
    raise Exception("This is always raised")

    print("This will never be printed")
    
    return("bla bla")

try:
    no_return()
except:
    print("I caught an exception")
print("Executed after the exception")