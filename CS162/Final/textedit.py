from tkinter import Frame, Tk, BOTH, Text, Menu, END, IntVar, font, Button, Label, TOP
import tkinter.filedialog
import tkinter.ttk
class TextEd(Frame):

    def __init__(self, parent):
        Frame.__init__(self, parent)       
        self.parent = parent       
        self.StartGui()
        

    def StartGui(self):
  
        self.parent.title("File dialog")
        self.pack(fill=BOTH, expand=1)

        menubar = Menu(self.parent)
        self.parent.config(menu=menubar)
        self.message = Label(self, text= "Type Anything below")
        self.message.pack(side=TOP)

        fileMenu = Menu(menubar)
        fileMenu.add_command(label="Open", command=self.OpenFile)
        menubar.add_cascade(label="File", menu=fileMenu)        
        fileMenu.add_command(label = "Save",command=self.SaveAs)
        self.txt = Text(self)
        self.txt.pack(fill=BOTH, expand=1)

    def OpenFile(self):
        
        ftypes = [('All files','*')]
        file_info = tkinter.filedialog.Open(self, filetypes = ftypes)
        file_contents = file_info.show()

        if file_contents != '':
            text = self.ReadFile(file_contents)
            self.txt.insert(END, text)


    def ReadFile(self, filename):

        f = open(filename, "r")
        text = f.read()
        return text
    
    def SaveAs(self):
        try:
            txtwritten= self.txt.get("1.0", "end-1c")
            savelocation=tkinter.filedialog.asksaveasfilename()
            file1=open(savelocation, "w+")
            file1.write(txtwritten)
            file1.close()
        except FileNotFoundError:
            self.message.config(text="Sorry, that does not appear to be a file.")

def main():
    root = Tk()
    root.geometry("800x500")
    
    callinit = TextEd(root)
    root.mainloop()
