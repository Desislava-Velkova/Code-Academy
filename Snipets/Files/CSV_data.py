"""
    Working with csv format.
        For that purpose it is necessary to use csv module.
"""



    #read for csv file
import csv

max = int(input("How many lines to read?\n"))

k=0

with open("one.csv") as f:
    f_csv = csv.reader(f)
    headers = next(f_csv) #it takes the first row as a header, if we don't want to skip it this
                          #line have to go
    
    for row in f_csv:  #row is a list wich will contain the data
        print(row)
        k += 1
        
        if k == max:
            break
        
    
    #writing on csv file
headers = ['Symbol','Price','Data', 'Time', 'Change','Volume']
row = [("AA", 39.84, "12/11/2017", "9:36am", -0.18, 181800),
       ("AIG", 39.84, "25/11/2007", "9:36am", -0.18, 181800),]    
    
    
with open("one.csv") as f:
    f_csv = csv.writer(f)
    f_csv.writerow(headers)
    f_csv.writerows(rows)
    
    