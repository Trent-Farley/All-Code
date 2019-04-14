#Add these two strings together and print out the result
#Name the variable string3
string1 = "Happy "
string2 = "Birthday"
string3 = string1+string2


if string3 == "Happy Birthday":
    print("String catenation worked!")
elif string3 == "HappyBirthday":
    print("You forgot a space")
else:
    print("Did not work!")



#len is a function to get the length of a string/list/tuple
# For loops are used when you know how many objects you want to 
# iterate through.
for i in range(len(string3)):
    print(string3[i])


#While loops are used when you dont know how long something will be used for

count = "Base Case"
#Error handling, users are jerks. 
while type(count) != int:
    try:
        count = int((input("How long would you like the while loop?\n\n::")))
    except:#Catches any errors to keep program running. 
        print("Sorry wrong data type!\n")
#!= is not equaivalent to
while count != 0:
    
    print(f"Count is {count}")
    count = count-1
    


