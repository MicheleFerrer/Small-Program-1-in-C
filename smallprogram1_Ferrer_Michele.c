// Michele Ferrer
// Dr. Steinberg
// COP 3223 Section 0001
// Small Program 1

#include <stdio.h>
#include <math.h>
int main()
{
   
// Problem 1 Begins

printf("XX      XX\n");
printf(" XX    XX\n");
printf("  XX  XX\n");
printf("   XXXX\n");
printf("  XX  XX\n");
printf(" XX    XX\n");
printf("XX      XX\n");

// Problem 1 Ends

printf("********************************************\n");

// Problem 2 Begins

int chicken1, chicken2, chicken3, chicken4, chicken5; 

// Gathering User Input on their chicken  laid eggs
printf("Enter the amount of eggs laid for each of the 5 chickens.\n");
	printf("Chicken 1: ");
    scanf("%d", &chicken1);
    printf("Chicken 2: ");
    scanf("%d", &chicken2);
	printf("Chicken 3: ");
    scanf("%d", &chicken3);
	printf("Chicken 4: ");
    scanf("%d", &chicken4);
	printf("Chicken 5: ");
    scanf("%d", &chicken5);
    
// Equations for calculating dozen eggs and the remainder
int chickenResult = chicken1 + chicken2 + chicken3 + chicken4 + chicken5;
int dozens = chickenResult / 12; // Equation for the dozen
int dozensRemainder = chickenResult %  12; // Mod for the eggs
printf("There are %d dozen(s) and %d egg(s) total.\n", dozens, dozensRemainder); 

// Problem 2 Ends

printf("********************************************\n");

// Problem 3 Begins

double velocity, time, acceleration;
double initialDistance, totalDistance;

printf("Let's calculate the distance traveled for some motor vehicle.\n");
	printf("I will need some information to collect from you.\n");
	// Gathering User Input
	printf("Enter the initial velocity: ");
	scanf("%lf", &velocity);
	printf("Enter the time: ");
    scanf("%lf", &time);
	printf("Enter the acceleration: ");
    scanf("%lf", &acceleration);

// Creating the distance traveled equation and printing the results
initialDistance = (velocity * time); // inital velocity data

// initial velocity added back into the equation to calculate the Total Distance. 
totalDistance = initialDistance + (0.5) * acceleration * (time * time); 
printf("The distance traveled for the motor vehicle was %.3lf meters.\n", totalDistance);

// Problem 3 Ends

printf("********************************************\n");

//Problem 4 Begins

/*
Rectangle 1 and 2 are the rectangles with no opening and rectangle 3 
is the one with an opening.
rect == rectangle, tri == triangle
*/

double radius, length; // Circle and Square
double rectBase1, rectBase2, rectBase3; // Base of Rectangles
double rectHeight1, rectHeight2, rectHeight3; // Height of Rectangles
double triBase1, triBase2, triBase3; // Base of Triangles
double triHeight1, triHeight2, triHeight3; // Height of Triangles
double circleArea, squareArea; // Area for the circle and square
// variables for calculating the area of the rectangles and triangles
double rectArea1, rectArea2, rectArea3;
double triArea1, triArea2, triArea3;
double totalArea; 
double pi = 3.14159; 

// Collecting input for the circle
printf("Let's calculate the area of the 2D train.\n");
	printf("Let's start with the 5 circles.\n");
	printf("Enter the radius: ");
	scanf("%lf", &radius);
	
	printf("Now let's get the info on the three rectangles.\n");
	printf("Let's start with the rectangle with no window.\n");
	// Collecting input for the rectangles with no opening.
	printf("Enter the base: ");
	scanf("%lf", &rectBase1);
	printf("Enter the height: ");
	scanf("%lf", &rectHeight1);
	printf("Let's now get the other rectangle with no window.\n");
	
	printf("Enter the base: ");
	scanf("%lf", &rectBase2);
	printf("Enter the height: ");
	scanf("%lf", &rectHeight2);

	printf("Let's now get the last rectangle with the opening space.\n");
	// Collecting input for the rectangle with an opening.
	printf("Enter the base: ");
	scanf("%lf", &rectBase3);
	printf("Enter the height: ");
	scanf("%lf", &rectHeight3);
	printf("Enter the length of the window: ");
	scanf("%lf", &length);
	printf("Now let's get the info on the three triangles.\n");
	// Collecting input for the triangles.
	printf("Enter the base for triangle 1: ");
	scanf("%lf", &triBase1);
	printf("Enter the height for triangle 1: ");
	scanf("%lf", &triHeight1);
	printf("Enter the base for triangle 2: ");
	scanf("%lf", &triBase2);
	printf("Enter the height for triangle 2: ");
	scanf("%lf", &triHeight2);
	printf("Enter the base for triangle 3: ");
	scanf("%lf", &triBase3);
	printf("Enter the height for triangle 3: ");
	scanf("%lf", &triHeight3);

// Equations for calculating the area.
circleArea = (pi * (radius * radius)) * 5.0;
squareArea = length;
rectArea1 = rectBase1 * rectHeight1; 
rectArea2 = rectBase2 * rectHeight2; 
rectArea3 = (rectBase3 * rectHeight3) - (squareArea * squareArea); 
triArea1 = (triBase1 * triHeight1) * 0.5; 
triArea2 = (triBase2 * triHeight2) * 0.5; 
triArea3 = (triBase3 * triHeight3) * 0.5; 
totalArea = circleArea + rectArea1 +rectArea2 + rectArea3 + 
triArea1 + triArea2 + triArea3; //Equation for calculating Total Area
printf("The area of the 2D train is %.5lf units.\n", totalArea);
// Problem 4 Ends

return 0;

}