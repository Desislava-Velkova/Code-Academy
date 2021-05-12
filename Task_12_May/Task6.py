"""
    file I/O - read method(buffer /file position)
"""

test = open("CodeAcademy.txt","r")

print(test.read(5))

# take the current positon of the cursor
position = test.tell()
print("The cursor is in position: ", position)


position = test.seek(0,1)
print("The next reed str is:", test.read(7))

position = test.tell()
position = test.seek(0,2)
print("The end of the str is:", test.read())

print("\tClosing file...")

test.close()
print("Close or not:",test.closed)