"""
'''
Trent Farley CS161 8AM
Assignment 6

Design -
    for this part of the assignment, I created a class that 
    defined an airplane ticket. this ticket included origin, destination
    rate and passenger name. The functions just returns the variables

Testing
    I just ran the code to make sure there were no errors. 
'''
"""
class AirplaneTicket:
    def __init__(self, cost, destination, origin, rate, passenger_name):
        self.cost = cost
        self.destination = destination
        self.origin = origin
        self.rate = rate
        self.passenger_name = passenger_name
    
    def cost_of_ticket(self, cost):
        """returns cost"""
        cost = self.cost
        return cost 
    
    def destinations(self,destination):
        """returns destination"""
        destination = self.destination
        return destination
    
    def origins(self, origin): 
        """returns origin"""
        origin = self.origin
        return origin
    
    def class_rate(self, class_rate):
        """returns class_rate"""
        class_rate = self.class_rate
        return class_rate
    
    def passenger_names(self,passenger_name):
        """returns passenger name"""
        passenger_name = self.passenger_name
        return passenger_name