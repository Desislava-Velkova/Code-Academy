"""
    Using of shell masks
        This example show's how to find text with the help of the masks when we work
        with Unix shell (for examp. *.py, Dat[0-9]*.csv and others)
"""

from fnmatch import fnmatch, fnmatchcase


    #using fnmatch
print("\nUsing fnmatch\n")      
    
print("Result of (rep.txt, *.txt): ",fnmatch('rep.txt', '*.txt'))
print("Result of (rep.txt, ?oo.txt): ",fnmatch('rep.txt', '?oo.txt'))
print("Result of (Data45.csv, Data[0-9]*) ",fnmatch('Data45.csv', 'Data[0-9]*'))

names = ['Data1.csv', 'Data2.csv', 'config.ini', 'rep.py']
result = [name for name in names if fnmatch(name, 'Data*.csv')]

print("Result of [name for name in names if fnmatch(name, 'Data*.csv')]: ",result)


    #using fnmatchcase - (it is used when is important register of the character)
print("\nUsing fnmatchcase\n")    
    
print("Result of (rep.txt, *.TXT): ", fnmatchcase('rep.txt', '*.TXT'))