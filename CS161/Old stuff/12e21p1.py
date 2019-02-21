import turtle
import random
print("This program makes ocotogons of different colors")
count = int(input("How many shapes?"))
if count is count:
    pass
while count== str(0):
    print("invalid")
    count= int(input("How many octogons?"))
turtle.speed(1000000)


for n in range(count):
    turtle.color(random.random(),random.random(),random.random())
    turtle.begin_fill()
    for i in range(count):
        #turtle.color(random.random(), random.random(), random.random())
        turtle.forward(380)
        turtle.right(135)
    turtle.right(360/count)
    
    turtle.end_fill()

turtle.exitonclick()

