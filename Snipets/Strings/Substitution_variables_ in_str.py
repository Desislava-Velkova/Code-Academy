"""
    Zamestvane na stoinostite na promenlivite v string
"""

    #using .format
s = "User {name}: {n} new message"
    
print("Original: ",s)
print("After .format: ",s.format(name = 'Des', n = 55 ))


    #using .format_map() and vars()
name = 'Ana'
n = 34

print("After .format_map: ",s.format_map(vars()))


    #!!! vars() works with instanton, for example:
class Info:
    def __init__(self, name, n):
        self.name = name
        self.n = n
        
        
a = Info('John', 87)
print("After: ",s.format_map(vars(a)))

print("This is a {s}" .format(s = "string"))

    





