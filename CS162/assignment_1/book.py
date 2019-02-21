import sys
class Book:
    '''
    This is the actual class of the book that is going to be made. All of the functions are simple as well
    as the attributes. It just builds a book with only four attributes- cover,title,author and pages. 
    '''
    def __init__(self, cover,title, author, pages):
        self.cover = cover
        self.title = title
        self.author = author
        self.pages = pages
    def cover_on_book(self,cover):
        """Returns input in a f string"""
        return f"The cover of this book is {cover}"
    def title_of_book(self,title):
        """Retursn the title of the book in a f string"""
        return f"The title of this book is {title}"
    def author_of_book(self,author):
        """Returns the author of the book in an f string"""
        return f"The author of this book is {author}"
    def number_of_pages(self,pages):
        """Returns the number of pages in an f string"""
        return f"The amount of pages is {pages}"

class Menu:
    """Has two menus, directory and exit menu."""


    def directory(self): 
        """Main directory for the program, this function also checks for valid input"""
        global user_selection
        
        user_selection = input(f"\n\nWelcome to an informational directory about a book.\n\
        Here are your options: \n\
        Type 1 to find out about the cover\n\
        Type 2 to uncover the title \n\
        Type 3 to view the author\n\
        Type 4 to find out how many pages their are\n\n\
        type 0 to exit\n\n")
        
        
        valid_input = user_selection.isdigit()
        while valid_input == False:
            valid_input = user_selection.isdigit()
            user_selection = input("Please type a number")

        int(user_selection)

        return int(user_selection)


    def exit_menu(self):
        """Exit menu to check if the user wants to leave"""
        
        leave = input("\n\nWould you like to exit? (Y/N) \n\n")
        str(leave)
        
        if leave.upper() == "Y":
            print("Goodbye!")
            exit()
        elif leave.upper == "N":
            print("Ok returning to menu")
            pass



