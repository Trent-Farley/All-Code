######################################
# Trent Farley, CS 161
# Lab 3, part 1, Garden specs
# Specifications- 
#Your program should prompt the user for information about the garden
# Utilize this information to state how many plants in garden
# Calculate exact soil and fill material to one decimal place
#######################################
#   1. It immediately throws up an error, saying strings are 
#       not floats. 
#   2.To get this program to crash, a user would just have to 
#       put in a letter or a symbol. They can also just hit enter
#   3. Any odd number less than one and greater than 0 would be not less  
#       than half. 
side_length= float(input(
    "What will the side length of the garden be?"))

rec_spacing= float(input(
    "Recommended spacing?"))

bed_depth= float(input(
    "How deep will the garden bed be?"))
# For cubic measurements#

bed_depth**1/3

area_depth= float(input(
    "How deep will the filled areas be?"))
from math import pi
import math

##R will be the radius, with the side length standing in for diameter
r=side_length/2
circle_area= pi*r**2
flowers= circle_area/ rec_spacing

#Flowers for the circle
print(f"for the circle you will need \
{round(flowers,1)} flowers")

#Calculating the area of one semicircle
half_circle_area= pi*r**2
half_flowers= half_circle_area/ rec_spacing

#The rounded amount of flowers
print(f"for the half circles you will need \
{round(half_flowers,1)} flowers")

total_area=side_length**2
garden_soil= total_area-circle_area


cubic_yards= side_length**2
gardens_area=half_circle_area+circle_area*bed_depth
gardens_area**1/3
gardens_area=gardens_area-cubic_yards

print(f"THe gardens will take {round(gardens_area,1)} \
amount of soil")

print(f"The total cubic yards of fill you will need \
is {round(cubic_yards,1)}")