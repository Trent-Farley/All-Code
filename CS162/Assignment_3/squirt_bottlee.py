from math import pi
# global volume
# global type_of_nozzle
# global amount_taken

class Bottle:
    def 

    def Calc_vol(self, radius, height): #defines the volume for the bottle itself
        volume = (radius**2) * height * pi
        return volume


    def Remaining_fluid(volume,amount_taken): #print remaining fluid
        
        liquid_left = volume-amount_taken
        if liquid_left < amount_taken:
            print("Sorry, bottle is empty")
        print(f"The remaining volume is {liquid_left}") ##Maybe delete this later? Dont know
        return liquid_left

    def filler_up(self, volume): #refill the bottle
        filling = input("Would you like to fill up the bottle with water now? [Y/N]")
        while True:
            if filling.upper() == "Y":
                liquid_left = self.volume
                print("Alrighty, the bottle is full now")
            elif filling.upper() == "N":
                print:("Ok, we'll make do with what we have")
            else:
                print("Ok, chuck the perfectly fine bottle in the trash")
                
        return liquid_left

class Valve:

    def Spray(self): #spray the fluid in the valve?
        amount_taken = self.valve_capacity
        spraying = input("Would you like to spray?[yes/no]") 
        if spraying.upper() == "NO":
            amount_taken = 0
            Bottle.Remaining_fluid(self.volume,amount_taken)

        elif spraying.upper() == "YES":
            valve_amount = 0
            Bottle.Remaining_fluid(self.volume,amount_taken)
        print(f"The bottle has sprayed {amount_taken} ounces of water.")
        return 
            
class Nozzle:

    def Sprayer_mode(self):
        sprayer_modes = input("Is the nozzle MIST, SPRAY or FAR?")
        while True:
            if sprayer_modes.upper() == "MIST":
                break
                
            elif sprayer_modes.upper() == "SPRAY":
                break
                
            elif sprayer_modes.upper() == "FAR":
                break    
                
            else:
                sprayer_modes = input("Please put in a valid input- MIST, SPRAY, or FAR")
                continue        
        print(sprayer_modes)
        return sprayer_modes

class Squirt_Bottle(Bottle,Valve,Nozzle):  
    
    def __init__(self,radius,height,valve_capacity): #things all spray bottles have
        self.radius = radius
        self.height = height  
        self.valve_capacity = valve_capacity
        self.nozzle_type = self.Sprayer_mode()
        self.volume = self.Calc_vol(self.radius,self.height)

        