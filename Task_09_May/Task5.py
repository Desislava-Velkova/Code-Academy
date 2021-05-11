def any_division(number):
    
    try:
        if number == 13:
            raise ValueError("13 is not a lucky number")
        return 100/number
    except ZeroDivisionError:
        return "\tException: zero division"
    except TypeError:
        return "\tException: wrong type"
    except ValueError:
        return "\tNo way"
        raise

for val in (20,0,"String",13):
    print("Testing %s" %val, "output:", end="\n")
    print(any_division(val))

#print(any_division(0))
#print(any_division(20.0))
#print(any_division("Some text"))