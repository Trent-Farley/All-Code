from tkinter import *
import tkinter.filedialog

root = Tk()
root.geometry("800x500")
global text
class Texted(Frame):
    
    def __init__(self, parent):
        Frame.__init__(self, parent)   
        self.parent = parent        
        self.init_gui()
        self.saveas()
        self.openfile()
         

    
    def saveas(self):
        txtwritten= text.get("1.0", "end-1c")
        savelocation=tkinter.filedialog.asksaveasfilename()
        file1=open(savelocation, "w+")
        file1.write(txtwritten)
        file1.close()

    
    def openfile(self):

        ftypes = [('Python files', '*.py'), ('All files', '*')]
        dlg = tkinter.filedialog.Open(self, filetypes = ftypes)
        fl = dlg.show()

        if fl != '':
            text = self.readFile(fl)
            self.text.insert(END, text)

                
    def FontHelvetica():
        text.config(font="Helvetica")


    def FontCourier():
        text.config(font="Courier")




    def init_gui(self):
        self.parent.title("File dialog")
        self.pack()

        root = Frame(self.parent)
        root.pack()

        text=Text(root)

        font=Menubutton(root, text="Font") 
        font.grid(root,row=1,column=1) 
        font.menu=Menu(font, tearoff=0) 
        font["menu"]=font.menu
        Helvetica = IntVar() 
        
        arial = IntVar() 
        times = IntVar() 
        Courier=IntVar()
        
        font.menu.add_checkbutton(label= "Courier", variable=Courier, \
        command=self.FontCourier)
        font.menu.add_checkbutton(label= "Helvetica", variable=Helvetica, \
        command=self.FontHelvetica) 
        
        
        text.grid(root,row=2,column=1) 
        button=Button(root, text="Save", command=saveas) 
        button.grid(root,row=1,column=0)

def main():

    end = Texted(root)
    root.mainloop()  

if  __name__ == "__main__":
    main()