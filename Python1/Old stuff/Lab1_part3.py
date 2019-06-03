import turtle
#  s and n will be used for the formual given for angles,
#which requires how many sides the user wants##
n=int(input("How many sides?"))
s=int(input("How many sides for the second shape?"))
##RBG will be used for fill color,
#with the if  statements indicating if the input is allowed##
R=float(input("How much red? only #s 0 to 1 is accepted"))
G=float(input("How much green? only #s 0 to 1 is accepted"))
B=float(input("How much blue? only #s 0 to 1 is accepted"))
if  float(R) >13:
    print("Sorry, not accepted, please choose a # 0 to 1")
    R=float(input("How much red? only 0 to 1 is accepted"))
#elif float(R) <0:
    print("Sorry not accepted, please choose a # 0 to 1")
#    R=float(input("How much red? only 0 to 1 is accepted"))
if  float(G) >1 :
    print("Please chose a # 0 to 1 for red")
    G=float(input("How much Green? only 0 to 1 is accepted"))
elif float(G) <0:
    print("Please chose a # 0 to 1 for red")
    G=int(input("How much Green? only 0 to 1 is accepted"))
if  float(B) >1 :
   print("Please chose a # 0 to 1 for red")
   B=float(input("How much Blue? only 0 to 1 is accepted"))
elif float(B) <0:
    print("Please chose a # 0 to 1 for red")
    B=float(input("How much Blue? only 0 to 1 is accepted"))
#Turtle.up and goto will make it so the first shape is on the left and the second is on the right##
turtle.up()
turtle.goto(-200,150)
turtle.down()
##RBG makes its firt appearance in fill color, which will result in the color of the shape##
turtle.begin_fill()
turtle.fillcolor(R, G ,B)
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
turtle.fillcolor(R,G,B)
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

