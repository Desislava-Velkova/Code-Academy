"""
    Check for existing file and get more information about the file
"""

    #check for existing file
import os 

print("Result of os.path.exists: ", os.path.exists('/etc/passwd'))


    #check is it regular file
print("Result of os.path.isfile: ", os.path.isfile('/etc/passwd'))


    #check is it directory
print("Result of os.path.isdir: ", os.path.isdir('/etc/passwd'))


    #check is it a link
print("Result of os.path.islink: ", os.path.islink('/usr/local/bin/python3'))


    #take the path to the link from the previous example
print("Result of os.path.realpath: ", os.path.realpath('/usr/local/bin/python3')) 


    #if we need to take metadata like date or size
print("Result of os.path.getsize: ", os.path.getsize('/etc/passwd'))


import time
print(time.ctime(os.path.getatime('/etc/passwd')))