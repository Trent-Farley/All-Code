##################################
#   Trent Farley    CS161   8AM
#   Assignment 3, Part 1 String search
#   
#   Specifications-
#       Allow the user to input a string 
#       Search the string and report back how many times a
#       certain letter is in the string.
#  
#  Pseudocode-
#       I need an input variable, probably called u_str and 
#       andother variable called u_let to search for. 
#       I will use count() search the string
#       
#   Testing-
#      It worked perfect the fist time. 
##########################################

u_str=str(input("What word would you like to search?"))
u_let=str(input("What letter do you want to search for?"))

search=u_str.count(u_let)

print(search)