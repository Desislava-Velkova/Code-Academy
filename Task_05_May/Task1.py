"""
    Write function cal77() which find all even numbers which are
    divisible by 111,
    in ranges 7000 and 8658(both included), 9000 and 9546.
    
    The numbers obtained should be printed in a comma-separated sequence on single line.
"""



def calc77(list1, list2):
    
    res_first_list = []
    res_second_list = []
    
    for i in list1:
        if i%2 == 0 and i%111 == 0:
            res_first_list.append(i)
            
    for i in list2:
        if i%2 == 0 and i%111 == 0:
            res_second_list.append(i)
    
    print("The result of the first list is:", res_first_list)
    print("The result of the second list is:", res_second_list)
    

list1 = range(7000,8658)
list2 = range(9000,9546)

calc77(list1, list2)
