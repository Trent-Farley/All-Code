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

label_string = tk.StringVar()
label_string.set("Enter value to be searched for in the list")
label = tk.Label(controls_pane, textvariable=label_string).grid(row=0, column=1)

text = tk.Entry(controls_pane)
text.grid(row=0, column=2)
text_string = "Enter value here"
text.insert(3, text_string)

button = tk.Button(controls_pane, text="Start search", command=button_clicked).grid(row=0, column=3)

#make some shapes
rect_list = []
for index in range(100):
    coords = 20 + (50 * index), rand.randint(10, 99), 50 + (50 * index), 100
    rect_list.append(graph.create_rectangle(coords, fill='yellow'))
    #easy way...
    label = tk.Label(graph, text=f"{100 - coords[1]}")
    label.place(x = coords[0], y = coords[3] + 5)

#print(f"graph.coords(rect_list[3]): {graph.coords(rect_list[3])}")
#print(f"graph.itemcget(rect_list[3]): {graph.itemcget(rect_list[3], 'fill')}")

root.mainloop()