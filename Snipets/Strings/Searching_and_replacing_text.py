"""
    Searching and replacing text
"""

    #simple text
text = 'yeah, but no, but yeah, but no, but yeah'
result = text.replace('yeah', 'test')

print(result)

    #more complicate text's (using sub function from re module)
import re

text = "Today 27/05/2021. Next date 28/05/2021"
text = re.sub(r'(\d+)/(\d+)/(\d+)', r'\3-\1-\2', text)

print(text)

    #counting the number of replacing
newtext, num = re.subn(r'(\d+)/(\d+)/(\d+)', r'\3-\1-\2', text)

print('New text: ',newtext)
print('Numbers: ',num)