/* A program in c for calculating the volume of cuboid */

// including the header file.
#include<stdio.h>
#include<conio.h>

// Declaring the main functin.
void main() {
	// Declaring the variables.
	float length,breath,height,volume;

	// Clearing the screen.
	clrscr();

	// Taking input form user.
	printf("Enter the following values.\n");
	printf("length: ");
	scanf("%f",&length);
	printf("breath: ");
	scanf("%f",&breath);
	printf("height: ");
	scanf("%f",&height);

	// Calculating the volume and displaying it.
	volume = length*breath*height;
	printf("Volume of the cuboid is %0.2f",volume);

	getch();
}