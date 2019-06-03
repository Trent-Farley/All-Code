s=int(input("How many bikes?"))
hel=s
helm=hel^50
_s=s*250


if hel <5:
    helmets=0   
    pass
elif _s>50:
    helmets=hel/5

sales= helm+_s
print(f"The total sales for this month is ${sales}")