/*
3. Write a function to represent a given integer as product of prime numbers
Ex:
______________________________________
| Input: 24                          |
| Output: 2 * 2 * 2 * 3              |
|____________________________________|
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	//Your codes here
	int i,testcase2=testcase;

	for(i=2;i<=testcase;i++){

		if(testcase%i==0&&testcase2==testcase){
			printf("%d ",i);								//For the first value to print without suffix " *" in front
			testcase=testcase/i;
		}

		while(testcase%i==0){
			printf("* %d ",i);								//Check for 
			testcase=testcase/i;
		}
	}
	
	
	return 0;
}
