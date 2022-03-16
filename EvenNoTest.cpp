#include<stdio.h>

int main(){
	
	int n;
	//Prompt the user to enter the value to be tested.
	printf("Enter a number: ");
	scanf("%d",&n);
	
	
	//Checks if the value is even or not.1
	if(n%2==0){
		printf("The number is even");
		
	}
	
	else
		printf("The number is odd");
			
}
