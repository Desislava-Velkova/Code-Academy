class LowerCaseEx(Exception):
    def __init__(self, lower):
        self.lower = lower
        
    def message(self):
        print("You need to have at least 2 lower case, and you input %s\n" %self.lower)
    
class UpperCaseEx(Exception):
    def __init__(self, upper):
        self.upper = upper
        
    def message(self):
        print("You need to have at least 1 upper case, and you input  %s\n" %self.upper)
        
class DigitEx(Exception):
    def __init__(self, digit):
        self.digit = digit
        
    def message(self):
        print("You need to have at least 3 digits, and you input %s\n" %self.digit)
        
class LengthEx(Exception):
    def __init__(self, length):
        self.length = length
        
    def message(self):
        if self.length < 8:
            print("You password need's to be at least from 8 symbols and you input %s\n" %self.length)
        elif self.length > 15:
            print("You password need's to be max from 15 symbols and you input %s\n" %self.length)
