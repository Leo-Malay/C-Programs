// A simple program to find the area of circle.

// Including the header files.
#include<stdio.h>
#include<conio.h>

// Predefining the value of pi.
#define PI 3.14

// Declaring the main function.
void main() {
	// Declaring the variables.
	float radius,area;

	// Clearing the screen.
	clrscr();

	// Taking input from user(Radius)
	printf("Enter the Radius of circle: ");
	scanf("%f",&radius);

	// Calculating the area and displaying the answer.
	area = PI * radius * radius;
	printf("Area of Circle is %0.4f",area);
	getch();
}