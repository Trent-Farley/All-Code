#############################################
# Trent Farley
# CS161; 8AM 
# Assignment 3, Defining sum functions
# Specifications-
#     Define two functions, one that 
#     sums all of the natural numbers to 
#     the n. 
#     The second function will cube root the number
#     provided
# Pseudocode-
#     Using the two functions, sum_n, and sum_n_cubes
#     I will define sum_n by having n be an input and adding n to it.
#     For the sum cubes, I will use the math module to cube it as well 
#     as add it to itself. This will be performed by a range function 
#     inside of the sum function
# Testing-
#     From 0-10, it worked. 
###############################################

import math 

n=int(input("What number would you like to sum?"))
s=int(input("What number would you like to sum and cube?"))

def sum_n(n):
    for i in range(n):
        sum=n+n

    print(sum)

def sum_n_cubes(s):
    for i in range(s):
        cube_sum=s**3+s**3
    print(cube_sum)

sum_n(n)
sum_n_cubes(s)

