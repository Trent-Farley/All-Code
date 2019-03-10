from tkinter import Tk,Canvas,ALL,Label,Button, Frame, TOP, Message, RAISED, Entry, StringVar, Event
import time
import random
global window
global frame
global root
root=Tk()
root.geometry(newGeometry="1050x600")
frame = Frame(root, width = 1050, height=600)
window = Canvas(frame, width=1050,height=500,borderwidth=1,background='lightblue',relief='raised')


def Button_Click(Event): 
    window.pack()
    window.update()
    frame.pack()

button = Button(root ,text="Start")  
button.pack(side=TOP)
button.bind('<ButtonPress-1>', Button_Click)

def change_color(bar):
    """
        Suggested for changing the color in real time, but does not work the way I want it to. 
    """
    window.itemconfig(bar, fill='black')

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
    i = i
    for item in main_list:
        if item == min:
            bar = window.create_rectangle(x,y,x+barwidth,y-(item*15),fill="red")
        else:
            bar = window.create_rectangle(x,y,x+barwidth,y-(item*15),fill="black")
        x+=barwidth+5
    
    root.after(250, change_color(bar))
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

def Search_button(event):
    print(search_num.get())

def Search(main_list):
    label_string = StringVar()
    label_string.set("Enter value ")
    
    search_num = Entry(frame,text = label_string)
    button = Button(root, text="Start Search")
    search_num.pack()
    button.pack()
    button.bind("<ButtonPress-1>", Search_button)
    label_string.set(search_num.get())
    print(search_num.get())

# &&  Generate random heights  && ##
main_list = []    
for i in range(100):
    random_ = random.randint(1,5)
    random_num = random.randint(0,60)*(10/random_)/20 +(2)
    main_list.append(random_num)



if __name__ == "__main__":  
    Selection(main_list)
    end = Message(frame, text= "All done",width= 100, relief= RAISED, background="lightgreen")
    end.pack()
    Search(main_list)
    root.mainloop()

