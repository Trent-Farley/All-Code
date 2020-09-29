import turtle
import random
count = int(input("How many shapes? \n:: "))



for n in range(int(count)):
    turtle.color(random.random(),random.random(),random.random())
    turtle.begin_fill()
    for i in range(8):
        turtle.forward(60)
        turtle.right(60)
    turtle.end_fill()
    turtle.forward(180)
    turtle.right(count)
    
    

    
    
turtle.exitonclick()