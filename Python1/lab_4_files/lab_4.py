 """
 This program reads a file and strips the first word and numbers from lines
 THis progrma asks the user for a text file that will be used for the variables and 
 functions to strip uneeded information (numbers and whitespace) to create a more
 easily read file that prints to the console
 TCS161   8AM MWF
 Trent Farley
 John Sarna
 Lab 4- Part One 

Problem analysis-
I will need to use information from files to create a program that works 
with text files. To do so, I will need to loop and test to make sure there are no 
more numbers in the file. This will be done by defining functions that have 
already been given. 

Program specification-

Read lines through a file to pick apart strings and spaces
to create a more readable file. The end resulting file will have no
numbers and will be spaced out apropraitely. 

Pseudocode-
get_and_strip_number() and get_and_strip_word will be defined with a len function
and split it after the blank space in the file. ie. "9. for score in seven years ago.""
For stripping word function, the first word will be stripped, which will be done by 
a range function. The range function will loop over until the length of the line 
is doen. \

Testing-
We had problems such as files not being found, and pad_words being weird. It took a couple 
of multiple tests to get it working correctly
"""



def get_and_strip_number(s:str):
    """Requires:
       -- string s consists of (the string representing) a non-negative integer n followed
          by a single space, and then n words, separated by a single space
       Returns:
       -- the leading integer n (as an int), and
       -- the "rest" of s, i.e., what is left after stripping off n and, if n>0,
          the space following it"""
    if len(s) <=1 : #if the length of the string is less than one character, return the default
        return 0, ""
    # if length of string is adequate, operate on the string
    number, words = s.split(" ",1)
    return int(number), words

def get_and_strip_word(s):
    """Requires:
       -- string s has no leading spaces, and is either empty or
          consists of one or more words, separated by a single space
       Returns:
       -- first word of s, and
       -- the "rest" of s, i.e. what is left after stripping off the word and, if
          there is one, the space following the word"""
    
    #Checks to see if the string has no values
    #Strips the stirng, with one word being taken away to accomondate for line length
    for i in range(len(s)): 
        if len(s) <=1:
            return 0, ""
        first_str, rest_str = s.split(" ", 1)
        return first_str, rest_str


    
def pad_words(s, num_words, final_len):
    """Requires:
       -- final_len > len(s)
       -- string s consists of num_words words, each separated by a single space
       Returns:
       -- string r, containing the words in s evenly padded with spaces to make
          len(r) == final_len"""
    if num_words <= 1:      # best we can do is fill out the line with spaces
        return s + ((final_len - len(s))*' ')

    # there are at least 2 words, so at least one pigeon hole to fill (with spaces)
    num_pigeon_holes = num_words - 1                        # the buckets (pigeon holes) are between words
    num_pigeons = final_len - (len(s) - num_pigeon_holes)   # my pigeons are spaces
    pad_num = num_pigeons // num_pigeon_holes
    extra_num = num_pigeons % num_pigeon_holes              # number of holes that get an extra pigeon
    working_str = ''
    
    # take care of the first num_pigeon_holes - extra_num holes
    for i in range(num_pigeon_holes - extra_num):
        word, s = get_and_strip_word(s)
        working_str += word + (pad_num * ' ')   # insert pad_num spaces
    # take care of the last extra_num holes
    for i in range(extra_num):
        word, s = get_and_strip_word(s)
        working_str += word + ((pad_num + 1) * ' ')
    working_str += s
    return working_str

def main():
    """Main program for testing some text formatting functions."""

    file_name = input("Enter the name of the input file: ") #gettysburg.txt or test_file.txt
    file_obj = open(file_name, "r")

    print("Line length should be as long as the longest line to print, or longer.") 
    line_len = int(input("Enter the desired line length: "))

    for line in file_obj:
        line = line.strip()        # strip the trailing '\n'
        n, words = get_and_strip_number(line)
        print(pad_words(words, n, line_len))
    file_obj.close()



if __name__ == '__main__':
    main()


          