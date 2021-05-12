"""
    file I/O - read method
"""

test = open("CodeAcademy.txt","r")

print(test.read())

print("\tClosing file...")

test.close()
print("Close or not:",test.closed)