################################
#   Trent Farley    CS161   8AM
#   Assignment 3, part 2, file sum
#   
#   Specificatons-
#       Write a program that opens a file and sums
#       all of the numbers within the file. 
# 
#   Pseudocode-
#       Using a with statement combined with open file ard write 
#       inside a new file to sum all of the numbers. 
#   
#   Testing-
#
#################################

total=0
fn = numbers.txt
with open(fn) as infile:
    with open(total.txt, 'w') as outfile:
        for line in infile:
            try:
                numbs=int(line)
                total+=numbs
                print(numbs,file=outfile)
            except:
                pass


print(total)