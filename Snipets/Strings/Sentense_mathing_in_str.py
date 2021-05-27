"""    
    Sentence matching in the beginning of the text and in the end of the string
        This example show how to search in the beginning and in the end of a 
        sentence (examp. name of protocol, name of a f)
"""

filename = 'report.txt'

result = filename.endswith('.txt')  #search for every file with that suffix
print("Result of filename.endswith(.txt): ", result)

result = filename.startswith('file:')  #search for every file with that preffix
print("Result of filename.startswith('file:'): ", result)


url = 'http://www.python.org'
result = url.startswith('http:') 
print("Result of url.startswith('http:') : ", result)


    #if we want to search for several options in the same time
import os

filename = os.listdir('.') # list the files in the same directory
print("Result of os.listdir('.'): ",filename)

print([name for name in filename if name.endswith(('.c', '.h', '.py'))])