import random
import time
from tkinter import (ALL, LEFT, RAISED, TOP, Button, Canvas, Entry, Event,
                     Frame, Label, Message, StringVar, Tk,BOTTOM)

global main_list
global enter
root=Tk()
root.geometry(newGeometry="1250x600")
root.title("Search and Sort")
frame = Frame(root, width = 1150, height=600)
window = Canvas(frame, width=1050,height=500,borderwidth=1,background='lightblue',relief='raised')


enter = Entry(root)
enter.pack(side=LEFT)

def Button_Click(Event): 
    window.pack()
    window.update()
    frame.pack()
    Selection(main_list)


button = Button(root, text="Search & Sort")
button.pack(side=LEFT)
button.bind("<ButtonPress-1>",Button_Click)

mess = Message(root, text="Ok, the pink bar is the value searched for" )
mess.config(bg='lightgreen', font=('times', 14, 'italic'),width = 500 )
mess.pack(side = BOTTOM)

def change_color(bar,color):
    """
        Suggested for changing the color in real time, but does not work the way I want it to. 
    """
    window.itemconfig(bar, fill=color)


def Swap(main_list,x,y):
    """
        Swaps x and y to test if one is smaller and fixes the list. 
    """
    tmp = main_list[x]
    main_list[x] = main_list[y]
    main_list[y] = tmp


def animation(min,i):

    """
        Main animation function, uses x,y, barwidth to create the bars while 
        deleting all of the pre-drawn bars to create new ones where they are supposed to be. 
    """
    x,y=20,500
    barwidth=5
    window.delete(ALL)
    min = min
    num = enter.get()
    
    i = i
    
    for item in main_list:
        
        #Actual Sort... This took way too long to think about. 
        if num == str(item):
            sbar = window.create_rectangle(x,y,x+barwidth,y-(item*15), fill = "pink")
        elif item == min:
            bar = window.create_rectangle(x,y,x+barwidth,y-(item*15),fill = "red")
        else:
            bar = window.create_rectangle(x,y,x+barwidth,y-(item*15),fill = "black")
        x+=barwidth+5
    
    root.after(250, change_color(bar,"black"))
    
    window.update()

def Selection(main_list):
    """
        This is the main functio for swapping and showing the bars moving, calls anmation(that creates bars) 
        and also calls swap. 
    """
    for i in range(len(main_list)):
        min=i

        for j in range(i+1,len(main_list)):
            if(main_list[min]>main_list[j]):
                min=j

        animation(main_list[min], main_list[i])
        Swap(main_list,min,i)


# &&  Generate random heights  && ##
main_list = []    
for i in range(100):
    random_ = random.randint(1,5)
    random_num = random.randint(0,60)*(10/random_)/20 +(2)
    main_list.append(random_num)

print(f"Here is the list for easy look at search: \n{main_list}")

root.mainloop()
