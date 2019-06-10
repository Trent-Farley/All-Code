//I could probably stick these in a class pretty easily, maybe sort nodes data? 


void Merge(int *arr, int low, int high, int mid){
    //Function to merge two halves into sorted array.


    //I need three iterators, so here they are. 
    //temp is being used to store arr, so it doesn't get messed up
    int i = low;
	int temp[high-low+1];
	int k = 0;
	int j = mid + 1;
 
    //Already have low to mid and mid+1 sorted, so just need to sort the rest.
    //This while loop merges it into temp[]
	while (i <= mid && j <= high){ //O(log(n))

		if (arr[i] < arr[j]){//O(1) -- simple assignments

			temp[k] = arr[i]; //Little bit more complicated, but still assigning value O(1)
			k++;
			i++;
		}

		else{

			temp[k] = arr[j];
			k++;
			j++;
		}
	}
 
	//Just stick the rest from i to mid in there. 
	while (i <= mid){ //Getting 1/2 of sorted into temp O(log(n)) or half the list

		temp[k] = arr[i];
		k++;
		i++;
	}
    // same, except from j to high. 
	while (j <= high){//Same as above, except the upper half. 

		temp[k] = arr[j];
		k++;
		j++;
	}
 
 
    // Get temp back into arr. 
	for (i = low; i <= high; i++){//

		arr[i] = temp[i-low];
	}
}
 

void MergeSort(int *arr, int low, int high){
	//Main function to call to sort. This function calls merge on 
	//half of the list. Finds mid by adding low+high/2
    int mid;
	//Low starts at zero, while high start at 1 less than length of list
    if (low < high){

		mid=(low+high)/2;
		// Split the data into two halves.
		MergeSort(arr, low, mid);
		MergeSort(arr, mid+1, high);
 
		// Merge!!
		Merge(arr, low, high, mid);
	}
}