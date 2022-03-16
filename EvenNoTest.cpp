#include<iostream>
using namespace std;

int main(){
	
	int n;
	//Prompt the user to enter the value to be tested.
	cout << "Enter a number: ";
	cin >> n;
	
	
	//Checks if the value is even or not.
	if(n%2==0){
		cout<<"The number is even";	
	}
	else
		cout << "The number is odd";
	
	
return 0;
}
