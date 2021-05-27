"""
    Erasing symbols from character
"""

    #erasing symbols for space
s = '     hello there \n'

print("Original: ",s)
print("After strip(): ",s.strip()) #delete in both ends
print("After lstrip(): ",s.lstrip()) #delete it from left
print("After rstrip(): ",s.rstrip()) #delete it from right

    
    #erasing user defined symbols 
t = "--------------hello+++++++"

print("Original: ",t)
print("After strip(-+): ",t.strip('-+'))


    #!!!strip() CAN'T fix the text in the middle of the string
    
    #erasing in the middle of the text
ss = "hello there"

print("Original: ",ss)
print("After ss.replace(' ', ''): ",ss.replace(' ', ''))