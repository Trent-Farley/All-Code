# Trent Farley
# Assignment 1
# Directory about a book.     
# Joseph Jess 
# Winter 2019
# CS162


import book
  
print("Welcome to Build-A-Book! please inenter information about \n\
your book that you want to build, then the system will be able to \n\
tell this information back to you")
cover = input("\n\nWhat does the cover of the book look like?\n")
title = input("\n\nWhat is the title of the book called?\n")
author = input("\n\nWhatis the name of the author?\n")
pages = input("\n\nHow many pages are there?\n")


menus = book.Menu()

textbook = book.Book(cover,title, author, pages)

user_selection = 3

while user_selection:
    user_selection = int(menus.directory())
    if user_selection == 1:
        print(textbook.cover_on_book(cover))
        menus.exit_menu()    
    elif user_selection == 2:
        print(textbook.title_of_book(title))
        menus.exit_menu()
    elif user_selection == 3:
        print(textbook.author_of_book(author))
        menus.exit_menu()
    elif user_selection == 4:
        print(textbook.number_of_pages(pages))
        menus.exit_menu()
    elif user_selection == 0:
        print("Thank you for using this program.\n have a nice day")
        menus.exit_menu()

    

