// A simple program to check if the enetered number is odd or even.

// Including the header files.
#include<stdio.h>
#include<conio.h>

// Declaring the main function.
void main() {
	// Declaring the variables.
	int num;

	// Clearing the screen.
	clrscr();

	// Taking input from the user.
	printf("Enter the number: ");
	scanf("%d",&num);

	// Checking if the number is even or odd;
	if(num % 2 == 0){
		printf("\nEntered Number is even.");
	}
	else{
		printf("\nEntered Number is odd.");
	}
	getch();

}