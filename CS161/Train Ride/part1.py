#This is a comment in Python
'''This is a docstring, mainly used to explain what a function does, also 
can be used for multi-line comments.'''

#This is a variable, much like an x in math.
variable = 5
#Good variable names explain what the variable will do later
# So that variable should be called
example_num = 5
# Variable can be any word and are usually all lower case. 
# To seperate words, you use _ 
example_string = "Variables can have strings as well"
#strings can have a lot of stuff done to them much like integers.
# An integer is a non decimal where as a floating point number is
# a decimal. You will learn why its a floating point number in 160.
example_list = ["shown", "in","brackers",5,6]
#lists can have strings or any numbers or a tuple. Lists can be changed. 
example_tuple = (12,15)
#Tuples can not be changed, unlike lists, strings or numbers.

def Example_Function(first, second):
    """ This is a function. Inside the parameters you can pass stuff through to 
    be used inside the function. This function adds two numbers. Functions are 
    SnakeCase
    """
    added = first + second
    #Use an f string t oprint a variable with a string. 
    print(f"This is the numbers added: {added}")
    #If you return the variable you can use it later.
    return added

addition = Example_Function(10,20)
#Add 5 to the variable to show a difference. 
addition = addition+5

print(f"Addition variable +5 is {addition}")

class Cup:
    """THis is a class, used when an object has attributes
    """
    def __init__(self, size, cup_type, capacity,shape):
        self.size = size 
        self.cup_type = cup_type
        self.capacity = capacity
        self.shape = shape

    def Cup_Size(self):
        """This is a method, usually called a function but since it is in a 
        class it is called a method. THis returns cup size"""
        print(f"Cup size is {self.size}\n")
                                    #^\n is a newline character
    def Type_of_Cup(self):
        """Returns type of cup"""
        print(f"Cup type is {self.cup_type}\n")

    def Cup_Capacity(self):
        """Returns cup capacity"""
        print(f"\nCup capcity is {self.capacity}\n")
    
    def Cup_Shape(self):
        """Returns Cup shape"""
        print(f"Cup shape is {self.shape}\n")

def main():
    """Best way to call other functions/ classes"""
    #main is lower case because some developer decided so
    class_call = Cup(14,"Mug",12,"Circular")
    #call all attributes
    class_call.Cup_Capacity()
    class_call.Cup_Shape()
    class_call.Cup_Size()
    class_call.Type_of_Cup()



if __name__ == "__main__":
    """Best practice for calling main in python """
    main()
    