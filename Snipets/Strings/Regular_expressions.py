"""
    Regular expressions
       Very often in the working process it is necessary to find text
        which is corresponding to a template.
        
"""

    #exact match
text = 'yes, but no'

print("Result of text == \'yes\': ", text == 'yes')

    #match in the beginning or in the end
print("Result of text.startswith(yes)': ", text.startswith('yes'))

    #search for the position of the first met
print("Result of text.find(no)': ", text.find('no'))

    #searching for pattern
import re 
from re import findall

text1 = '07/27/2017'

if re.match(r'\d+/\d+/\d+', text1):
    print("\nYes")
else:
    print("\nNo")
    
    #using findall
pattern = re.compile(r'\d+/\d+/\d+')
text = "Today 27/05/2021. Next date 28/05/2021"

print(pattern.findall(text))