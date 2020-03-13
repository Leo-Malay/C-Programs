/* A Program in C to find the area of triangle */

// Including the header files.
#include<stdio.h>
#include<conio.h>

// Declaring the main function.
void main() {
	// Declaring the variables.
	float  height,base,area;

	// Clearing the screen.
	clrscr();

	// Taking input from user.
	printf("Enter base length: ");
	scanf("%f",&base);
	printf("Enter height: ");
	scanf("%f",&height);

	// Now Calculating the area and then displaying it.
	area = (0.5) * base * height;
	printf("Area of triangle is %0.2f",area);

	getch();
}