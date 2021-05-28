"""
    Store data structure in a file.
        In python conservation is similar to serelization in PHP which mean that 
        every object can be stored in string.
        
        For this purpose it is necessary to use pickle ad shelve module:
        
            pickle - is used to convert data structures and put them in file
            shelve - is used to give a random  acess to the files
"""

    #List
import pickle, shelve

first_name = ["Dani" , "John" , "Jane"]
last_name = ["Smith" , "Doe" , "Something"]


datafile = open("names.dat" , "wb")

pickle.dump(first_name, datafile)
pickle.dump(last_name, datafile)

datafile.close()


    #reading data from binary files
datafile = open("names.dat" , "rb")

fnames = pickle.load(datafile)
lnames = pickle.load(datafile)

datafile.close()

print("First names: ", fnames)
print("Last names: ", lnames)


    #random acess to convert data
s = shelve.open("names2.dat")

s["first_name"] = ["Dani", "Deni", "Doni"]
s["last_name"] = ["A", "B", "C"]

s.sync() #to be sure that the data is sync 

print(s["first_name"])
print(s["last_name"])

s.close()











