from tkinter import *
import random

class Sorting( Frame ):
    def __init__( self ):
        Frame.__init__( self )

        self.master.title( "Sorting" )
        self.master.rowconfigure( 5, weight = 1 )
        self.master.columnconfigure( 5, weight = 1 )
        self.grid( sticky = W+E+N+S )

        #label for sort intro      
        self.label1 = Label( self, text = "Select Sort", width = 25 , height=2)
        self.label1.grid( row = 0, column = 1, sticky = N )

        #Radio buttons for sorts
        self.button1 = Radiobutton( self, text = "Bubble Sort" )
        self.button1.grid( row = 1, column = 0, sticky = W+E+N+S )

        self.button2 = Radiobutton( self, text = "Quick Sort" )
        self.button2.grid( row = 1, column = 1, sticky = W+E+N+S )

        self.button3 = Radiobutton( self, text = "Shell Sort" )
        self.button3.grid( row = 1, column = 2, sticky = W+E+N+S )

        #label to store value
        # def gen():
        #     for x in range(0,10):
        #         num=random.randint(0,100)
        #         self.label2 = Label( self,text='%s'%num, width = 2, height = 2 )
        #         self.label2.grid( row =3 , columnspan =10 , sticky = W+E+N+S )

        # #button to generate number
        # self.button4 = Button( self,text='Generate no.', command=gen )
        # self.button4.grid( row = 2,column=1, sticky = W+E+N+S )
        # self.rowconfigure( 5, weight = 1 )
    def gen():
        self.nums = []
        for x in range(0, 10):
            self.nums.append(random.randint(0, 100))
        # . . . . . . . . . .  .    <- maybe here call sorting method on self.nums
        num = ''.join('%4i' % num for num in self.nums)
        self.label2 = Label( self, text=num, width=2, height=2)
        self.label2.grid(row=3, columnspan=10, sticky=W+E+N+S)

jjj = Sorting()

if __name__ == "__main__":
    jjj()
