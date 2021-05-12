"""
    file I/O 
"""

test = open("CodeAcademy.txt","w+")

print("Name of the file:",test.name)
print("Close or not:",test.closed)
print("Mode of the file:",test.mode)

print("\tClosing file...")

test.close()
print("Close or not:",test.closed)