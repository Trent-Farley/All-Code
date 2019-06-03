#############################################
# Trent Farley
# CS161; 8AM 
# Assignment 3, Part 4, Caeser Cipher
# Specifications-

# Pseudocode-
#   I will need two lists, one for the old word and another for the new one
#   The next step will be to use a range functionto cycle through each
#   letter, change it to a number, add two and change it back. 
# Testing-
#     Every word worked, with a key of 2
########
#  Worked on with John
word = str(input("What word would you like to cipher?"))

word = list(word)

length_of_list=len(word)
new_word=[]
count=0

    

for i in range(length_of_list):
    letter_to_number=word[count]
    number_to_letter=ord(letter_to_number)
    number_to_letter+=2
    if number_to_letter==123:
        number_to_letter=97
    elif number_to_letter==124:
        number_to_letter=98
    number_to_letter = chr(number_to_letter)
    new_word.append(number_to_letter)
    count+=1


new_word = ''.join(new_word)

print(new_word)


