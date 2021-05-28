"""
    Reading and writing JSON files
        The abbreviation JSON means JavaScript Object Notation.
        For working with this files it is necessary to use json module 
"""

import json


data  = {'name' : 'Den',
         'shares' : 100 }


with open('data.json','w') as f:  #writing in json file
    json.dump(data, f)
    
with open('data.json','w') as f:  #reading in json file
    data = json.load(f)
    print(data)
    
f.close()