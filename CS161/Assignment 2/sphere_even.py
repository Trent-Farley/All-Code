# Farley, Trent
# Assignemt 2
# Problem Analysis: Write a program to calculate the volume 
# and surface area of a sphere.
# Program specifications: use the formualas to create a program
# that asked for a radius and outputs the dimensions.
# Design:
# I need to create a float input value. Once that value is calculated,
# I will use the math function to input the radius into the formulat
# Testing:
# if input is 2, the output should be 33 for volume and 50 for area
r=float(input("What is the radius?"))
import math
pi=math.pi
rv=r**3
volume= 4/3 * pi * rv
print(f"This is the volume {volume}")
ra= r ** 2
area= 4* pi* ra
print(f"This is the area {area}")