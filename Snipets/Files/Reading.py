'''
    Reading from files.
       This examp. show's how to read all the info in the file and different parts of it 
'''


    #reading symbol by symbol
print("\nReading by char")

txt = open('text.txt' , 'r')

print(txt.read(1))
print(txt.read(2))
print(txt.read(8))

txt.close()


    #read the whole file
print("\nReading the whole file")

txt = open('text.txt' , 'r')

content = txt.read()
print(content) 

txt.close()


    #read line from file char by char
print("\nReading line from file char by char")

txt = open('text.txt' , 'r')

print(txt.readline(1))
print(txt.readline(2))
print(txt.readline(5))

txt.close()


    #read the whole line 
print("\nReading the whole line ")

txt = open('text.txt' , 'r')

print(txt.readline())
print(txt.readline())

txt.close()


    #read the whole file in list 
print("\nReading the whole file in list ")

txt = open('text.txt' , 'r')

lines = txt.readlines()

for line in lines:
    print(line)
    
txt.close()


