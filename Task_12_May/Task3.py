"""
    file I/O - write method
"""

test = open("CodeAcademy.txt","w+")

test.write("Testing file i/o\n And new lines too")

print("\tClosing file...")

test.close()
print("Close or not:",test.closed)