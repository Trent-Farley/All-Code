import tkinter as tk
import random as rand
import time
gui = tk.Tk()
gui.geometry("1000x400")
gui.title("Textboxes")
frame = tk.Frame(gui,width=500, height=200, bd=1)
canvas = tk.Canvas(gui, width = 900, height =400, bd=1)

def create_entries():
    ent = tk.Entry(frame)
    ent.insert(3,rand.randint(0,100))
    return ent

def grabbin_stuff(ent):
    listy = []
    for item in ent:
        listy.append(int((item.get())))
    return listy


def Button_clicked(event):
    listing.sort()
    if listing == []:
        label_string.set(f"There are no more numbers")
    else:
        label_string.set(f"the lowest is {listing.pop(0)}")
    

label_string = tk.StringVar()
label_string.set("Check out these numbers")
label = tk.Label(frame,textvariable=label_string)

entry_list = []

for i in range(0,10):
    new_entry = create_entries()
    entry_list.append(new_entry)

listing = grabbin_stuff(entry_list)
button = tk.Button(frame, text='Next lowest number')

button.bind("<1>",Button_clicked)

label.pack()
frame.pack()

for i in entry_list:
    i.config(state=tk.DISABLED)
    i.pack()
    
button.pack()
gui.mainloop()
