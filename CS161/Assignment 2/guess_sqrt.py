from math import sqrt 
gn=int(input("What number to guess?"))
x=0
while x<gn:
    x+=1
print(f"the guessed square root of {gn} is {x}")
sqrt(gn)
print(f"The real square root is {gn}")