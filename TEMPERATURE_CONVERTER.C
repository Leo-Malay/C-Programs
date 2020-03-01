// A simple program in c to convert temperature from c to f and f to c

// Including the header files.
#include<stdio.h>
#include<conio.h>

// Declaring the main function.
void main() {
	// Declaring the variables.
	float c,f;

	// Clearing the screen.
	clrscr();

	// Taking input as *c and converting to f.
	printf("Enter temperature in Celcius: ");
	scanf("%f",&c);
	f = (1.8 * c) - 32;
	printf("Your temperate in Ferhenit is %0.2f",f);

	// Taking input as f and converting to *c.
	printf("\n\nEnter temperature in Ferhenit: ");
	scanf("%f",&f);
	c = (f + 32) / 1.8;
	printf("Your temperatue in Celcius is %0.2f",c);

	getch();
}