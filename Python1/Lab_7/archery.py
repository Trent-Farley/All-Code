"""
This program creates an archery target. 

Trent Farley


"""
from graphics import *

win = GraphWin("Archery", 400, 400)

radius=150
colors=["white", "black","blue","red","yellow"]

for i in range(5):
    radius-=25
    Circle_1= Circle(Point(200,200),radius)
    Circle_1.setFill(colors[i])
    Circle_1.draw(win)
win.getMouse()
win.close()
