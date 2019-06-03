'''
1. Show me that you know what a set of data is and some ways of looking 
through it for important information.
1. Describe a set of data that could be important to someone,
(Maybe the set of quarter mile times for a group of racers in a group
 of cars or lines of code from programmers)
2. Describe a sequence of steps to find a useful piece of information in that data set,
(Maybe find the best times for individual racers (were they all using the same car))
3. Discuss ways that grouping or ordering your data might help you find 
certain items or categories of data,
(Maybe find the best times for each car grouped by make or model)

2. Prototype a GUI with a button, a text box, and a label,
3. Show how event listeners work by having the text of the label reflect
 the text of the textbox when the button is clicked
4. Extend the simple GUI to now include 9 more text boxes (all 10 held
 within some kind of collection) and change the
listener to find the smallest number of the textboxes and display it in the label
5. Now have the button, when clicked, change the label's text to match 
that of the next smaller number in the list of
textboxes.
(so if you had the numbers 1 – 10 in the text boxes, then the first click
would display a 1, the second click would display
a 2, the next a 3, and so on)

'''

# python-course.eu for tkinter help
# effbot.org/tkinterbook
import time
import tkinter as tk
import random as rand

gui = tk.Tk()
gui.geometry("500x400")
gui.title("Moving Squares")
frame = tk.Frame(width=500, height=200, bd=1)
frame.pack()
win = tk.Frame(frame, bd=2, relief=tk.RAISED)
win.pack()
can= tk.Canvas(gui, relief = tk.FLAT)
def button_clicked(event):
    #copy text from textbox and place into label
    print(f"the button is clicked, text.get() = {text.get()}")

label_string = tk.StringVar()
label_string.set("How far progreesed is the bar?")
label = tk.Label(frame,textvariable=label_string)

text = tk.Entry(frame)
text_string = ''
text.insert(3, text_string)

button = tk.Button(frame, text='Submit')
button.bind("<1>", button_clicked)
# stands for  ^  button 1 aka mouse 1

frame.pack()
label.pack()
text.pack()
button.pack()
large_square = can.create_rectangle(10,200,780,760, fill="yellow")
small_square = can.create_rectangle(-780,200,20,760, fill= 'blue')
can.pack()

while True: 
    count = 20
    time.sleep(.25)
    random_num = rand.randint(-10,10)
    can.move(small_square,random_num,0) 
    count+100
    gui.update()
can.delete(small_square)
gui.update()
can.create_rectangle(10,200,780,760, fill="blue")
gui.mainloop()