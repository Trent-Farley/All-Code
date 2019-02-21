from math import sqrt
n=int(input("What number for fibbing?"))
def F(n):
    return ((1+sqrt(5))**n-(1-sqrt(5))**n)/(2**n*sqrt(5))

print(F(n))