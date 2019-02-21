#Worked on with JR Linstockings
import math
b=int(input("What number?"))
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
print(p)
t=hex(p)
print(t)
    