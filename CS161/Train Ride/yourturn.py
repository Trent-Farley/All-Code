#Create a trapezoid Calculator-- Here is the formula ((a+b)/2)*h
#USER input


#Create a test to see if an in is even use % (mod) to test 
#divisible by zero. USER INPUT



#Find the remainder of a number -- Number can be your choice




#Find the volume and area of a circle from user input
#volume = 4/3 *pi*r^3
#Area = 4 * pi * r^2
bill = "Starter"
while type(bill) != int:
    try:
        bill = input("What is the bill?\n\n ::")
        bill = int(bill)
    except:
        print("Sorry, wrong data type")


def tip(bill):
    tip = bill * .15
    return tip

print(f"The tip for a bill of ${bill} is {tip(bill)}")
