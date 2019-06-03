# Testing ideas
# 1. Ensure mode selection works as intended, cycles through all modes
# 2. Check that muting and unmuting works as intended
# 3. User should be unable to set volume below 0% or over 100%
"""

Some upgrades - 
    Put the radio class in New_radio
    Pulled out the pop stuff for default_modes and put 
    it in this file. 
    Tried keeping everything close to the same otherwise


"""
import New_radio
Radio = New_radio.Radio()
default_modes = ["FM","AM","AUX","CD"]
switcher = 0

with open("radio_info.txt", "r") as radio_info:
    print(radio_info.readline())
while True:
    if switcher == 4:
        switcher = 0
    print("Volume: {}% | {}".format(Radio.volume, default_modes[switcher]))
    print("1. Change mode\n2. Increase volume\n3. Decrease volume\n4. Mute/unmute\n0. Exit")
    
    option = input("Select option: ").strip()
    if option == "1":
        switcher +=1
    elif option == "2":
        Radio.increase_volume()
    elif option == "3":
        Radio.decrease_volume()
    elif option == "4":
        Radio.toggle_mute()
    elif option == "0":    
        saved_mode = default_modes[switcher]
        break
    else:
        print("Invalid option")

with open("radio_info.txt","w") as radio_info:
    radio_info.write(f"The current mode is {saved_mode}")