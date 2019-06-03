#############################################
# Trent Farley      CS161           8AM
#Lab 3 part 2, Gibberish game
# Specifications-
# 1. Print a message explaining the game.
# 2. Prompt for two Gibberish syllables (indicate the allowed wildcard character “*”).
# 3. Prompt for a word to translate.
# 4. Process the word and add the syllables where appropriate.
# 5. Print the final word, and ask if the user wants to play again.#
##################################################
print("Hello! Welcome to the Gibberish Game")
print("This game utilizes input to switch variables to")
print("create funny words")
print("What word would you like to use for the \
Gibberish game?")
import re
import random
import string

def letter_addition(word, letter):
  return re.sub(f"([aeiou])",f"%s\g<1>"%letter, word)


word=str(input())



while word:
    letter=str(input("What letter for Gibberishing?"))
    if "*" in letter:
        letter=random.choice(string.ascii_letters)
    else:
        letter=letter
    print(letter_addition(word,letter))
    word=str(input("Would you like to play again? If not hit enter"))

