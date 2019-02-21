import math

class Circle():
    def __init__(self,radius, pi):
        self.radius = 2
        self.pi = 3.14
        return pi, radius
    def Area(pi, radius):
        area = pi*radius**2
        return area
    def Perimeter(pi, radius):
        perimeter = 2*pi*radius
        return perimeter
    print(f"The perimeter is {perimeter} and the area is {area}")
