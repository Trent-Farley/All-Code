from graphics import Rectangle, Text, GraphWin, Point

win= GraphWin("Rectangle",400,400)

point_1= win.getMouse()
point_2= win.getMouse()

rect= Rectangle(point_1, point_2).draw(win)

x_len= abs(point_2.getX() - point_1.getX())
y_len= abs(point_2.getY()-point_1.getY())
Text(Point(150,25), f"The area is {x_len*y_len}").draw(win)
Text(Point(150,50), f"The perimeter is {2*(x_len+y_len)}").draw(win)
win.getMouse()

