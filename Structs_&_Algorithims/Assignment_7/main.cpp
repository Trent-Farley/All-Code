/*
THE PLAN:
I plan on having this hash function to put the value into the position
that the value is in. The array is not going to be infinite, so whatever
the end is it will just be stuck there in a linked list. This will be 
measured in a size value, but I do not know how yet. 

EDIT:
Got it working, multiple values are stuck in a linked list. 

EDIT:
Problem with larger value, not sure what is wrong, just seg fault 

June 2:
For some reason, some tests return a seg fault. At this point, I need to move 
on. I want to finish all the assignments.
*/
#include "tests.cpp"

int main(){
    all_tests();
}