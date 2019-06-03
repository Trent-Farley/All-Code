from math import pi
global volume
global type_of_nozzle
global amount_taken
class Squirt_Bottle(object):  
    
    def __init__(self, radius, height, type_of_nozzle):
        self.radius = radius
        self.height = height
        self.type_of_nozzle = sprayer_modes   

    def Volume(self, radius, height):
        volume = radius**2 *height * pi
        return volume
    
    def Sprayer_mode(self, sprayer_modes):
        sprayer_modes = input("Is the nozzle wide, narrow or normal?")
        return sprayer_modes

class Bottle(Squirt_Bottle):

    def __init__(self, fluid, volume,):
        self.fluid = fluid
        starting_volume = self.volume

    def Remaining_fluid(self, volume, amount_taken):
         
        liquid_left = volume-amount_taken
        if liquid_left < amount_taken:
            print("Sorry, bottle is empty")
        print(f"The remaining volume is {liquid_left}") ##Maybe delete this later? Dont know
        return liquid_left

    def filler_up(self, volume):
        filling = input("Would you like to fill up the bottle with water now? [Y/N]")
        if filling.upper() == "Y":
            volume = starting_volume
            print("Alrighty, the bottle is full now")
        else:
            print("Ok, chuck the perectly fine bottle in the trash")
        return volume

class Valve(Bottle):
    def __init__(self, sprayer_modes, type_of_nozzle):
        self.type_of_nozzle = type_of_nozzle
        self.Sprayer_modes = sprayer_modes

    def valve_amount(self, sprayer_modes):
        while True:
            if sprayer_modes.upper() == "Wide":
                amount_taken = 5
                break
            elif sprayer_modes.upper() == "Normal":
                amount_taken = 3.5
                break
            elif sprayer_modes.upper() == "Narrow":
                amount_taken == 2
                break
            else:
                sprayer_modes = input("Please put in a valid input- Wide, Normal, or Narrow")
                continue
        return amount_taken
    def On_or_Off(self, amount_taken):
        valve_amount = amount_taken
        spraying = input("Would you like to spray?") 
        if spraying.upper() == "NO":
            Bottle.Remaining_fluid(volume,amount_taken)
        elif spraying.upper() == "YES":
            valve_amount = 0
            Bottle.Remaining_fluid(volume,amount_taken)
        return spraying 
            


        

        