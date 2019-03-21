import webbrowser
import fib as fib
import textedit as textin
continueing ="Exit variable"

while continueing != 4:
    try:
        read = input("Welcome to my final project! Here are your option:\n\n\
            1. README \n\
            2. Recursion\n\
            3. Graphical User interface showing everything else \n\
            4. Quit \n\n\n\
            ::  ")
        
        if int(read) == 1:
            webbrowser.open('https://landingzone.herokuapp.com/README%20stuff/readme.html', autoraise=True)
            print("It opened in your browser, if not you can find it here\n\
                https://landingzone.herokuapp.com/README%20stuff/readme.html")

        elif int(read) == 2:
            n = int(input("What number do you want to find? in the sequence? \n ::"))
            
            print(fib.F(n))
            
                
        elif int(read) == 3:
            textin.main()
        #valueerrror
        elif int(read) == 4:
            continueing = int(read)
        
        else: 
            print("No valid selection chosen, returning to main menu")
    
    except ValueError:
        print("Wrong input")


