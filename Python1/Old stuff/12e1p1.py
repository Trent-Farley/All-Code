#Worked on with JR Linstockings
import math
b=10
exit_num = True
while True:
    exit_num = input("Press enter to exit, press any key and enter to continue")
    if exit_num == False:
        break
    b = int(input("What number?"))

    if b<0:
        print("sorry its negative")
        exit()
    elif b==0:
        print("Done! its 0")
        exit()
    else:
        pass
    remainders = []
    while b:
        b, remainder = divmod(b, 2)
        remainders.append(remainder)
    bins=("".join([str(r) for r in remainders[::-1]]))
    print(bins)
    power=0
    p=int(bins,2)
    