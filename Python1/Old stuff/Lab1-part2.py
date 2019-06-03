import turtle
#  s and n will be used for the formual given for angles,
#which requires how many sides the user wants##
n=int(input("How many sides?"))
s=int(input("How many sides for the second shape?"))
turtle.up()
turtle.goto(-200,150)
turtle.down()
##RBG makes its firt appearance in fill color, which will result in the color of the shape##
turtle.begin_fill()
turtle.fillcolor(0, 0 ,1)
##Fun range, uses n to see how many times it does it.##
for i in range(n):
    turtle.forward(60)
    turtle.right(180 - 180*(n - 2)/n)
turtle.end_fill()
#Repeat of what is above, except getting the shape to the right##
turtle.up()
turtle.goto(200, 150)
turtle.down()
count=0
turtle.begin_fill()
turtle.fillcolor(0,1,0)
##using count and while, the same idea is possible except with while instead of for.##
while count<s:
    count=count+1
    turtle.forward(60)
    turtle.right(180 - 180*(s - 2)/s)
turtle.end_fill()
##ht to hide turtle with exit on click allowing
#for just a click to exit the window. This with the print statement##
turtle.ht()
turtle.exitonclick()
print("To exit turtle graphics, click on a shape")