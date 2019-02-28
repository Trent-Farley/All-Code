from tkinter import Tk,Canvas,ALL,Label,Button, Frame, TOP, Message, RAISED
import time
import random
root=Tk()
global window
global fframe
root.geometry(newGeometry="1050x600")
fframe = Frame(root, width = 1050, height=600)
window = Canvas(fframe, width=1050,height=500,borderwidth=1,background='lightblue',relief='raised')


def Button_Click(event): 
    window.pack()
    window.update()
    fframe.pack()

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


# &&  Generate random heights  && ##
main_list = []    
for i in range(100):
    random_ = random.randint(1,5)
    random_num = random.randint(0,60)*(10/random_)/20 +(2)
    main_list.append(random_num)


    """
    Creates a button, I plan on fixing this up so it actually starts the whole problem but for now
    it doesnt do anything. 
    """


    
if __name__ == "__main__":  
    Selection(main_list)
    end = Message(fframe, text= "All done",width= 100, relief= RAISED, background="lightgreen")
    end.pack()
    root.mainloop()

