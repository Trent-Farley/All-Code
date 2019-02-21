#include <stdio.h>

int main()
{
	//variables: room_max, occupants
	int room_max, occupants = 0; //uninitialized, is this a problem?
	
	printf("room_max: %d\noccupants: %d", room_max, occupants);
	
	//make a loop to:

	do{	
		//input
		printf("Please enter room max occupancy: ");
		scanf("%d", &room_max); 
		while ((getchar()) != '\n');
		
		printf("\nHow many people are planning to come to the meeting: ");
		scanf("%d", &occupants); 
		while ((getchar()) != '\n');
		

	}while(room_max < occupants);
    printf("The room is within regulation");
	
	return 0;
}