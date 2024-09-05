//********************************************************
// fracturing.c
// Author: Michael Batista / ID: 5466029
// Date: 09/03/2024
// Class: COP 3223C, Professor Parra
// Purpose: 
// Input: 
//
// Output: 
// //********************************************************

#include <math.h>
#include <stdio.h>
#define PI 3.14159

double calculateDistance(){
    int x1 = 1;
    int y1 = 2;
    int x2 = 3;
    int y2 = 4;

    printf("Point #1 entered x1 = %d; y1 = %d\n", x1, y1);
    printf("Point #2 entered x2 = %d; y2 = %d\n", x2, y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("The distance between the two points is %.2lf.\n", distance);

    return distance;
}

double calculatePerimeter(){
    int x1 = 1;
    int y1 = 2;
    int x2 = 3;
    int y2 = 4;

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    double perimeter = distance * PI;
    printf("The perimeter of the city encompassed by your request is %.2lf.\n", perimeter);

    return 3.0;
}

double calculateArea(){
    int x1 = 1;
    int y1 = 2;
    int x2 = 3;
    int y2 = 4;
    
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    double r = distance / 2;

    double area = PI * pow(r, 2);
    printf("The area of the city encompassed by your request is %.2lf.\n", area);

    return 3.0;
}

double calculateWidth(){
    int x1 = 1;
    int y1 = 2;
    int x2 = 3;
    int y2 = 4;

    double width = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("The width of the city encompassed by your request is %.2lf.\n", width);

    return 2.0;
}

double calculateHeight(){
    int x1 = 1;
    int y1 = 2;
    int x2 = 3;
    int y2 = 4;

    double height = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("The height of the city encompassed by your request is %.2lf.\n", height);

    return 2.0;
}

int main(int argc, char **argv){
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}