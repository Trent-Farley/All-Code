'''
Trent Farley        CS161       Fall 2018 8AM
Worked on with John S
Program Specification-
This program utilizes input to create an increasingly larger triangle
More detailed specifications-
This program utilizes a function to make a new row out of an old one.
This is done by creating a new lists that sums the inner numbers. The sum
is looped until the input is done. 
'''

triangle_size=int(input("How large do you want the triangle?"))

def make_new_row(old_row):
    """Requires:
       -- list old_row that begins and ends with a 1 and has zero or more
          integers in between (has to have at least [1,1])
       Returns:
       -- list beginning and ending with a 1 and each interior (non 1)
          integer is the sum of the corresponding old_row elements
          For example if old_row = [ 1,4,6,4,1], then new_row = [1,5,10,10,5,1],
          i.e. 5=1+4, 10=4+6, 10=6+4, 5=4+1 """
    if old_row == []:
        return [1]
    elif old_row == [1]:
        return [1, 1]
    newerish_list = [1]
    for i in range(len(old_row) - 1):
        newerish_list.append(old_row[i] + old_row[i+1])
    newerish_list.append(1)
    return newerish_list
falseified_list = []
dun = []
for i in range(triangle_size):
    dun = make_new_row(dun)
    falseified_list.append(dun)
    
for val in falseified_list:
    print(val)