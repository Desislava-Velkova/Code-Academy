"""
    Writing in file
"""

    #writing a file line by line
txt = open("text.txt","w")

txt.write("Test 1")
txt.write("Test 2")

txt.close()

    
    #reading of the new file
txt = open("text.txt","r+")

for line in txt:
    print(line)

txt.close()


    #writing a list of strings
txt = open("text.txt","r+")

lines = ["Test 1\n", "Test 2\n", "Test 3\n"]

txt.writelines(lines)

txt.close()


    #writing a print() output in file
with open("text.txt", "w") as f:
    print('Hello there\n', file=f)    

txt.close()
    
    
    
    