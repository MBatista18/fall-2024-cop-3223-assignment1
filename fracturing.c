//********************************************************
// fracturing.c
// Author: Michael Batista / ID: 5466029
// Date: 09/03/2024
// Class: COP 3223C, Professor Parra
// Purpose: The purpose of this program to house many internal
// functions within it. In this instance, the program is calculating
// the distance, perimeter, area, width, and height of a circle.
//
// Input: Values from the user for various calculations.
//
// Output: Said calculations to the user's values.
// //********************************************************

// Includes math and standard library
#include <math.h>
#include <stdio.h>
// Defines PI
#define PI 3.14159

// Calculate Distance Function
double calculateDistance(){
    printf("Calculate Distance:\n\n");

    // Establishes int variables
    int x1, y1, x2, y2;

    // Asks user for values for ints
    printf("Enter X1: ");
    scanf("%d", &x1);
    printf("Enter Y1: ");
    scanf("%d", &y1);
    printf("Enter X2: ");
    scanf("%d", &x2);
    printf("Enter Y2: ");
    scanf("%d", &y2);

    // Prints the coordinates based on user input
    printf("Point #1 entered x1 = %d; y1 = %d\n", x1, y1);
    printf("Point #2 entered x2 = %d; y2 = %d\n", x2, y2);

    // Calculates distance
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    // Prints distance calculation to user
    printf("The distance between the two points is %.2lf.\n\n", distance);

    // Returns distance
    return distance;
}

// Calculate Perimeter Function
double calculatePerimeter(){
    printf("Calculate Perimeter:\n\n");

    // Establishes int variables
    int x1, y1, x2, y2;

    // Asks user for values for ints
    printf("Enter X1: ");
    scanf("%d", &x1);
    printf("Enter Y1: ");
    scanf("%d", &y1);
    printf("Enter X2: ");
    scanf("%d", &x2);
    printf("Enter Y2: ");
    scanf("%d", &y2);

    // Prints the coordinates based on user input
    printf("Point #1 entered x1 = %d; y1 = %d\n", x1, y1);
    printf("Point #2 entered x2 = %d; y2 = %d\n", x2, y2);

    // Calculates distance for perimeter calculation
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Calculates Perimeter
    double perimeter = distance * PI;
    // Prints perimeter calculation to user
    printf("The perimeter of the city encompassed by your request is %.2lf.\n\n", perimeter);

    return 4.0;
}

double calculateArea(){
    printf("Calculate Area:\n\n");

    // Establishes int variables
    int x1, y1, x2, y2;

    // Asks user for values for ints
    printf("Enter X1: ");
    scanf("%d", &x1);
    printf("Enter Y1: ");
    scanf("%d", &y1);
    printf("Enter X2: ");
    scanf("%d", &x2);
    printf("Enter Y2: ");
    scanf("%d", &y2);

    // Prints the coordinates based on user input
    printf("Point #1 entered x1 = %d; y1 = %d\n", x1, y1);
    printf("Point #2 entered x2 = %d; y2 = %d\n", x2, y2);
    
    // Calculates distance for area calculation
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Calculates radius
    double r = distance / 2;

    // Calculates area
    double area = PI * pow(r, 2);
    // Prints area calculation to user
    printf("The area of the city encompassed by your request is %.2lf.\n\n", area);

    return 4.0;
}

double calculateWidth(){
    printf("Calculate Width:\n\n");

    // Establishes int variables
    int x1, y1, x2, y2;

    // Asks user for values for ints
    printf("Enter X1: ");
    scanf("%d", &x1);
    printf("Enter Y1: ");
    scanf("%d", &y1);
    printf("Enter X2: ");
    scanf("%d", &x2);
    printf("Enter Y2: ");
    scanf("%d", &y2);

    // Prints the coordinates based on user input
    printf("Point #1 entered x1 = %d; y1 = %d\n", x1, y1);
    printf("Point #2 entered x2 = %d; y2 = %d\n", x2, y2);

    // Calculates width
    double width = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    // Prints width calculation to user
    printf("The width of the city encompassed by your request is %.2lf.\n\n", width);

    return 3.0;
}

double calculateHeight(){
    printf("Calculate Height:\n\n");

    // Establishes int variables
    int x1, y1, x2, y2;

    // Asks user for values for ints
    printf("Enter X1: ");
    scanf("%d", &x1);
    printf("Enter Y1: ");
    scanf("%d", &y1);
    printf("Enter X2: ");
    scanf("%d", &x2);
    printf("Enter Y2: ");
    scanf("%d", &y2);

    // Prints the coordinates based on user input
    printf("Point #1 entered x1 = %d; y1 = %d\n", x1, y1);
    printf("Point #2 entered x2 = %d; y2 = %d\n", x2, y2);

    // Calculates height
    double height = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    // Prints height calculation to user
    printf("The height of the city encompassed by your request is %.2lf.\n\n", height);

    return 3.0;
}

int main(int argc, char **argv){
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}