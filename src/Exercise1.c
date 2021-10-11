/*
1. Write a Taxi meter program to calculate the taxi fare for a given mileage.
	a. The 1st 2km is 15,000 VND
	b. The next 250m will cost 2000 VND
	c. If the travel distance is larger than 30km then each extra km will cost only 5000VND
Receive the travel distance in Km and print the amount of money to be paid
______________________________________
| Input: 32.5                        |
| Output: 251500                     |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	float distance = atof(argv[1]);
	int result;
	//Your codes here
	int i;
	result=15000;
	if(distance<0)	{	
		printf("Invalid!");
		exit(0);
	}	

	if(distance>2&&distance<=30){
		long int tempDist=ceil((distance-2)*4);	//convert km into total count of 250m, use ceil() from math.h to always round value up
		printf("TempDist: %d\n",tempDist);
		result=result+((int)tempDist*2000);
	}					

	if(distance>30)	{
		float tempDist2=distance-30;
		result=result+(28*4*2000)+(tempDist2)*5000;
	}

	printf("%d", result);
	return 0;
}
