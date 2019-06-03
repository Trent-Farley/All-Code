import  tkinter as tk

root = tk.Tk()
f_height = 1000
f_width =500
root.geometry("1000x500")
frame = tk.Frame(root, height= f_height, width= f_width)
can = tk.Canvas(frame)
x1,y1,x2,y2 = 0,10,20,400

for i in range(100):
    x1+= 30
    x2+= 30
    can.create_rectangle(x1,y1,x2,y2,fill="yellow")
    frame.pack()
    can.pack()
root.mainloop()