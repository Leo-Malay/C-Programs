// A simple program to find area of a rectangle.

// Defining the header files
#include<stdio.h>
#include<conio.h>

// Declaring the main funtion.
void main() {
	// Declaring the variables.
	float area,length,breath;

	// Clearing the screen.
	clrscr();

	// Taking input from user,
	printf("Enter the length and breath of the rectangle.\n\n");
	printf("Length: ");
	scanf("%f",&length);
	printf("Breath: ");
	scanf("%f",&breath);

	// Finding the area and then displaying it.
	area = length * breath;
	printf("\nThe area of rectangle is %0.4f",area);
	getch();
}