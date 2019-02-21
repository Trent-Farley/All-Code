import turtle
import random
count = input("How many shapes?, press 0 to exit")
if count is count:
    pass
while count== str(0) or count.isdigit()==False:
    print("invalid")
    count=input("How many octogons?")

for n in range(count):
    turtle.color(random.random(),random.random(),random.random())
    turtle.begin_fill()
    for i in range(8):
        #turtle.color(random.random(), random.random(), random.random())
        turtle.forward(60)
        turtle.right(45)
    turtle.right(360/count)
    
    turtle.end_fill()

    
    
turtle.exitonclick()