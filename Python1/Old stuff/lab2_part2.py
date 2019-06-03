import turtle
import random
count = int(input("How many shapes?"))



for n in range(int(count)):
    turtle.color(random.random(),random.random(),random.random())
    turtle.begin_fill()
    for i in range(8):
        #turtle.color(random.random(), random.random(), random.random())
        turtle.forward(60)
        turtle.right(35)
    turtle.right(360/count)
    
    turtle.end_fill()

    
    
turtle.exitonclick()