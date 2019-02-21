"""
Trent Farley 
CS 161 

design- 
FOr this part of the lab,  Iwll need to use the set coordinates 
class as well as two function to define the world. These functions wlll 
be one for the O and one for the X. WIth these two functions, I swill call them with 
a main function. 

testing- 
I tested this program with just different types of games. I did not use
any of the bonus challenges in this program, so the xs and os are not 
as great, but they do work. 

"""
from graphics import *
win = GraphWin("Tic Tac Toe", 500, 500)
win.setCoords(0,0,3,3)
def tic_tac_toe_o(win, center):
    """This function returns an O for the board"""
    outline_width = 5
    circle = Circle(center, (.35))
    circle.setOutline('blue')
    circle.setWidth(outline_width)
    circle.draw(win)

def tic_tac_toe_x(win, p1x, p1y):
    """This function returns an X for the game board"""
    for i in range(2):
        deltaX = (-1) ** i * (.35)
        deltaY = (.35)
        line = Line(Point(p1x - deltaX, p1y - deltaY),
                 Point(p1x + deltaX, p1y + deltaY))
        line.setOutline('red')
        line.setWidth(5)
        line.draw(win)
        

def main():
    """This is my driving function, it creates the board as well 
    as all of the other information"""
    global win
    global boxes
    windowsize = 3
    squares = 3
    boxes = windowsize/ squares

    
    for i in range(squares - 1):
        xline = Line(Point(0, (windowsize/squares) * (i + 1)), Point(windowsize,  (windowsize/squares) * (i + 1)))
        xline.draw(win)
        yline = Line(Point((windowsize/squares) * (i + 1), 0), Point((windowsize/squares) * (i + 1), windowsize))
        yline.draw(win)

    for i in range((squares ** 2) // 2):
        printed_text = Text(Point(100,15),"Player 1: click a square.").draw(win)
        p1mouse = win.getMouse()
        p1x = p1mouse.getX()
        p1y = p1mouse.getY()
        tic_tac_toe_x(win, p1x, p1y)
        printed_text.undraw()

        printed_text = Text(Point(100,15),"Player 2: click a square.").draw(win)
        
        p2mouse = win.getMouse()
        p2x = p2mouse.getX()
        p2y = p2mouse.getY()
        tic_tac_toe_o(win, Point(p2x, p2y))
        printed_text.undraw()

    if squares % 2 == 1:
        printed_text = Text(Point(100,15), "Player 1: click a square.").draw(win)
        p1mouse = win.getMouse()
        p1x = p1mouse.getX()
        ply = p1mouse.getY()
        tic_tac_toe_x(win, p1x, p1y)
        printed_text.undraw()
        

main()
win.getMouse()