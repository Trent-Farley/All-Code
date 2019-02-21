from graphics import *

win = GraphWin("Howuse in 5 points", 500, 600)

win.setCoords(0,0,5,5)

#draw body rectangle
p1 = win.getMouse()
p2 = win.getMouse()
x1 = p1.getX()
y1 = p1.getY()
x2 = p2.getX()
y2 = p2.getY()
house_len = abs(x2-x1)
house = Rectangle(p1, p2)
house.draw(win)

#draw door
entrance_len = house_len/10
p3 = win.getMouse()
x=p3.getX()
y=p3.getY()
e_point_1 = Point(x+entrance_len,y)
e_point_2 = Point(x-entrance_len, min([y2,y1]))
door = Rectangle(e_point_1,e_point_2).draw(win)
half_the_door = entrance_len/2

#draw window
p4=win.getMouse()
x=p4.getX()
y=p4.getY()

breeze_point_1 = Point(x-half_the_door, y-half_the_door)
breeze_point_2 = Point(x+half_the_door, y+half_the_door)
window = Rectangle(breeze_point_1,breeze_point_2).draw(win)

p5= win.getMouse()
p6 = Point(x1,max([y1,y2]))
p7 = Point(x2,max([y1,y2]))

roof = Polygon(p5,p6,p7).draw(win)

win.getMouse()