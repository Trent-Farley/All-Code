from graphics import *


def main():
    win = GraphWin("Text", 400, 400)
    c = Text(400, 400, "Times New Roman", "You Goddamn loser")
    c.draw(win)
    win.getMouse() 
    win.close()

main()
