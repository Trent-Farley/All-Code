#include <iostream>
#include <cstdlib> 
#include "merge.cpp"
using std::cout;
using std::endl;

void test_everything(){
    //function for testing, 
	srand(time(NULL));
	//Test single element

	int s_arr[1] = {0}; //Initialize to zero or ill get some crazy large negative number
	
	int rands = rand() % 100 - 30; //Dont know the time complexity of rand, could not find it online
	
	s_arr[1] = rands; //Assign rands to s_arr
	
	cout<<"Single element: "<< rands <<endl;
	MergeSort(s_arr, 0, 1); //Make sure this function works with a single element. 
	//Since having an array of zero is not really possible, 1 is the lowest number.  

	cout<<"Sorted single element: "<<s_arr[1]<<endl;

    //Assign space for 20 ints 
	int arr[20];
    for(int i = 0; i<20; i++){//O(20) for this space. It does not matter how big the array is but
	//20 is easy to read. 
        arr[i] = 0;
    }

	for(int i = 0; i < 20; i++){
		int random = rand() % 100 - 30;
		arr[i] = random; //Set to random number to sort. 
	}

    cout<<"Unsorted Data:"<<endl;
    for (int i = 0; i < 20; i++){
        cout<<" >> "<<arr[i];
    }   //Print the unsorted list

    cout<<endl;
    cout<<endl;
	
	//Merge sort these suckas. 
	MergeSort(arr, 0, 19 );
	
	// Print sorted data
	cout<<"Sorted Data: "<<endl;
	for (int i = 0; i < 20; i++){
        cout<<" >> "<<arr[i];
    }
    cout<<endl;
    
}