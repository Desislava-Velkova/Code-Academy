"""
    Union of strings
        
"""

    #using join() - it is used when the string we want to join are consistent or iterable
first_text = ['How', 'are', 'you']

print(" " .join(first_text))
print(", " .join(first_text))


    #using + - this method is super uneffectuve when it is used in big projects, becouse it 
    #makes copies in the memory and garbage collection have to clear it
second_text = ['today', '?']

print(first_text + second_text)
print(" {} {}" .format(first_text, second_text))