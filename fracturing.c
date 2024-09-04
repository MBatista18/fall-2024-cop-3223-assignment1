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

#include <stdio.h>
#include <math.h>

int main(int argc, char **argv){
    calculateDistance();
    return 0;
}

double calculateDistance(){
    double x1, y1, x2, y2;

    printf("Enter x1: \n");
    scanf("%lf", &x1);
    printf("Enter y1: \n");
    scanf("%lf", &y1);

    printf("Enter x2: \n");
    scanf("%lf", &x2);
    printf("Enter y2: \n");
    scanf("%lf", &y2);

    printf("Point #1 entered x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point #2 entered x2 = %lf; y2 = %lf\n", x2, y2);

    double distance = sqrt(pow(x2 - x1, 2)+pow(y2 - y1, 2));

    return distance;
}

double calculatePerimeter(){

}

double calculateArea(){

}

double calculateWidth(){

}

double calculateHeight(){

}