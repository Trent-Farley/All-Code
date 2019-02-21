t= float(input("How many secons? only 1-86,400 will work"))
day= t // (24*3600)
t= t % (24 *3600)
minutes= t/60
hour= t // 3600
t %= 60
seconds=t
print("Hours, Minutes, Seconds --> %d:%d:%d" % (hour, minutes, seconds))