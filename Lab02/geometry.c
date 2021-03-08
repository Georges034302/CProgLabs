#include<stdio.h>
#include<math.h>
/*
 * Circle equation around the origin (0,0):
 * r^2 = x^2 + y^2
 * For a given point (x,y), calculate the radius
 * calculate the circumference
 * calculate the area
 * Complete this task  using functions
 */

//read function header or prototype
int read(char[]);

//radius function prototype
double radius(int,int);

//circumference prototype
double circumference(double);

//area prototype
double area(double);


int main(void){
    int x = read("x = ");
    int y = read("y = ");
    printf("(x,y) is set to (%d,%d) \n",x,y);
    double r = radius(x,y);
    printf("Circumference = %.2lf\n",circumference(r));
    printf("Area = %.3lf \n",area(r));
    return 0;
}

//read pattern function
int read(char s[]){
     int value;
     printf("%s",s);
     scanf("%d",&value);
     return value;
 }

//radius function using (x,y): r^2 = x^2 + y^2
double radius(int x,int y){
    return sqrt(pow(x,2)+pow(y,2));
}

//circumference function: 2*PI*r
double circumference(double r){
    return 2*M_PI*r;
}

//area function: PI*r^2
double area(double r){
    return M_PI*pow(r,2);
}












