#create a form with tkinter

import tkinter as tk
import random as rand

"""
copy text from textbox and place into label
"""
def button_clicked():
    global count
    #label.text = text.get(1.1)
    #print(f"inside of button_clicked, text.get() = {text.get()}")
    label_string.set(text.get())
    root.after(3000, color_change, rect_list[3], 'blue')

def color_change(item, color):
    graph.itemconfig(item, fill=color)

#setup GUI
root = tk.Tk()
canvas_width = 800
canvas_height = 600
frame = tk.Frame(root, width=canvas_width, height=canvas_height)

canvas_pane = tk.PanedWindow(frame).grid(row=0, column=0)
controls_pane = tk.PanedWindow(frame).grid(row=0, column=1)

graph = tk.Canvas(canvas_pane, bg='green', width=canvas_width, height=canvas_height)
graph.grid(row=0, column=0)

rect_list = []
old_coords = 10 + (7), 10, 15 + (7), 500  
for index in range(1000):
    random_num = rand.randint(10,499) 
    coords = 10 + (7 * index), random_num, 15 + (7 * index), 500
    if coords > old_coords:
        old_coords = coords  
    #rect_list.append(graph.create_rectangle(old_coords, fill='yellow'))

    rect_list.append(old_coords)

rect_list.sort()
for index in rect_list:
    coords = rect_list.pop(0)
    graph.create_rectangle(coords,fill= "yellow")
    graph.update()



print(rect_list) 

root.mainloop()