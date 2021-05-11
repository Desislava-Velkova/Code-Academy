import random

some_exception = [ValueError, TypeError, IndexError, None]

try:
    choise = random.choice(some_exception)
    print("raising{}".format(choise))
    
    if choise:
        raise choise("An error")
except ValueError:
    print("Chaught a Value error")
except TypeError:
    print("Chaught a Type error")
except Exception as b:
    print("Chaught some other error: %s" %b.__class__.__name__)
else:
    print("This code called if there is no exception")
finally:
    print("This cleanup code is always called")