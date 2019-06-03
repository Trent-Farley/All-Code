'''
Trent Farley        CS161       Fall 2018, 8AM
Worked with John S. 
Program Specifications-
This program takes an input file and goes through it to find 
mins and maxes of each category

More Detailed Specfications 
This program utilizes two functions, with one of them finding 
the largest value in the row of a .csv file while the other finds
the smallest value. These two functions do the bulk of the work, with
the last with statements calling them to find the values. 

Testing: I mainly used riskfactors.csv, but since I did not fully understand
the uses that they are able to handle. This lead me to test different forms of 
dictionaries. 

'''

import csv
input_File = input("What file would you like to use?")

def Largest_StateValue(int):
''' 
This function takes information from the file, strips it
and tests to see if it is larger than the previous value
Once it is tested, it is put into a dictionary for later use.
'''
    next_value = 0
    state_value={}
    for i in range(6,57):
        value = rows[i][int]
        if "%"in value:
            value=value.strip("%")
        elif "N/A" in value:
            value=0
        value=float(value)
        state=rows[i][0]
        state_value[value]=state
        if value > next_value:
            next_value = value
    return[state_value[next_value], next_value]

def Smallest_State_Value(int):
'''
This function takes information from the file, strips it
and tests to see if it is smaller than the previous value
Once it is tested, it is put into a dictionary for later use.
'''
    next_value = 1000
    state_value={}
    for i in range(6,57):
        value = rows[i][int]
        if "%"in value:
            value=value.strip("%")
        elif "N/A" in value:
            value=0
        value=float(value)
        state=rows[i][0]
        state_value[value]=state
        if value < next_value:
            next_value = value
    return [state_value[next_value], next_value]
with open(input_File,'r') as worked_file:
    reader=csv.reader(worked_file)
    rows=[r for r in reader]
    for i in range(1,6):
        best_value = Largest_StateValue(i)
        worst_value = Smallest_State_Value(i)
all_states= [ "Heart Disease",
"Motor Vehicle Death Rate", 
"Teen Birth Rate",
"Adult Smoking",
"Adult Obesity"
]

allvalues = [1,5,7,11,13]
count=0
with open("best_and_worst.txt","w") as best_and_worst:
    for val in range(len(allvalues)):
        count+=1
        best_and_worst.write(f"For {all_states[val]}\n\n\n\
        lowest is: {Smallest_State_Value(allvalues[val])}\n\
        highest is: {Largest_StateValue(allvalues[val])}\n\n\ ")
        
