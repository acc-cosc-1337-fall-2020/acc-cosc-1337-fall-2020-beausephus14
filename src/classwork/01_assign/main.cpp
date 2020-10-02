//Write the include statement for types.h here
#include<iostream>
#include "types.h"

//Write include for capturing input from keyboard and displaying output to screen

using std::cout;	using std::cin;

int main() 
{
	int num;
	cout<<"Enter a number: ";//Text to display to screen.
	cin>>num;//Capture a number from the keyboard.
	cout<<"You entered: "<<num; 
	int result = multiply_numbers(num);
	
	cout<<"Your number times 5 is: "<<result;
	int num1 = 4;
	result = multiply_numbers(num1);
	
	cout<<"4 times 5 is: "<<result;
	
	
	return 0;
}

