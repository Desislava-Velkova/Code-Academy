"""
    Text aligment
"""

text = "Hello world"

print(text) #original
print(text.ljust(20)) #left alifnment
print(text.rjust(20)) #right alifnment
print(text.center(20)) #center alifnment


    #all this methods take space as filler of the empty space and that can be changed
    
print(text.ljust(20, '+')) #left alifnment
print(text.rjust(20,'-')) #right alifnment
print(text.center(20,'*')) #center alifnment


    #using formath function

print(format(text, '<20')) #left alifnment
print(format(text, '>20')) #right alifnment
print(format(text, '^20')) #center alifnment


    #using formath function and filling spaces with symbols
print(format(text, '=<20')) #left alifnment
print(format(text, '*>20')) #right alifnment
print(format(text, '+^20')) #center alifnment
  
