def no_return():
    print("I'm about to raise exception")
    
    raise Exception("This is always raised")

    print("This will never be printed")
    
    return("bla bla")

def call_exception():
    print("call_exception start here")
    
    no_return()
    
    print("an exception was raised")
    print("...won't run")
    
call_exception()