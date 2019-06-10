/*
THE PLAN:
I plan on using merge sort for my quadratic sorting algorithim. This should be pretty simple, 
no nodes or classes are going to be required. 

HOW MERGE SORT WORKS:
Merge sort is divide and conquer algorithim, so if I use an array then I will need to split it
to sort it. Bassically, it breaks it down until the swaps are quick and easy. 

Pseudocode (looks a lot like Python, didnt mean it to):
            |
arr = 2,1,3,4,5
           |
arr1 = 2,1,3
arr2 = 5,4
arr1.sort() = 1,2,3
arr2.sort() = 4,5
arr = arr2+arr1 
>>> 1,2,3,4,5


TIME COMPLEXITY:
The complexity SHOULD BE O(log(n)). Supposedly this should be the best case, which makes sense
because it is broken into 2. Worst case is nlog(n). I think mine is pretty close to this time, 
but its probably a bit off since this is my first time implementing this. 

USE CASES:
When there is a lot of data that can not be held in one specific location to sort. 
This algorithim would be great because you can split it into smaller chunks to fit in
RAM. Even though it is slower than quicksort, it has many attributes that are used in
other sorting algorithims 
*/

#include "tests.cpp"

int main(){
    //Also has cout, which with those two function is probably not the best but
    //those functions could easily be pulled from the file.
    
    test_everything();
}