from tkinter import Frame, Tk, BOTH, Text, Menu, END, IntVar
import tkinter.filedialog

class TextEd(Frame):

    def __init__(self, parent):
        Frame.__init__(self, parent)   

        self.parent = parent        
        self.initUI()

    def initUI(self):

        self.parent.title("File dialog")
        self.pack(fill=BOTH, expand=1)

        menubar = Menu(self.parent)
        self.parent.config(menu=menubar)

        fileMenu = Menu(menubar)
        fileMenu.add_command(label="Open", command=self.onOpen)
        menubar.add_cascade(label="File", menu=fileMenu)        
        fileMenu.add_command(label = "Save",command=self.saveas)
        self.txt = Text(self)
        self.txt.pack(fill=BOTH, expand=1)
        




    def onOpen(self):

        ftypes = [('Python files', '*.py'), ('All files', '*')]
        dlg = tkinter.filedialog.Open(self, filetypes = ftypes)
        fl = dlg.show()

        if fl != '':
            text = self.readFile(fl)
            self.txt.insert(END, text)

    def readFile(self, filename):

        f = open(filename, "r")
        text = f.read()
        return text
    
    def saveas(self):
        txtwritten= self.txt.get("1.0", "end-1c")
        savelocation=tkinter.filedialog.asksaveasfilename()
        file1=open(savelocation, "w+")
        file1.write(txtwritten)
        file1.close()

def main():

    root = Tk()
    ex = TextEd(root)
    root.geometry("800x500")
    root.mainloop()  


if __name__ == '__main__':
    main()  