"""
    file I/O - read method(buffer)
"""

test = open("CodeAcademy.txt","r")

print(test.read(5))

print("\tClosing file...")

test.close()
print("Close or not:",test.closed)