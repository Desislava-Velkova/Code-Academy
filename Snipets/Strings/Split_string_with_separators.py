"""
    Split string with a separator
        module re have more powerfull tool split than the basic split (it takes spaces and different
        separators in one time)
"""
import re

line = 'str1 str2; str3, str4,str5, str6'
print("Using re.split:  ", re.split(r'[ ; ,\s]\s*',line))


    # takes separator
fields = re.split(r'(;|,|\s)\s*',line)

values = fields[::2]
delimeters = fields[1::2] + ['']

print("Values:  ", values)
print("Delimeters:  ", delimeters)

    #string conversion using the same separators
print("String conversion: ")
print(''.join(v+d for v, d in zip(values, delimeters)))