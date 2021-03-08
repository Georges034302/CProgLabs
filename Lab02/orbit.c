#include "orbit.h"
#include<stdio.h>
#include<math.h>
#include<float.h>

int main(void){
    printf("M = %.*e\n",FLT_DIG,M);
    printf("R = %.*e\n",FLT_DIG,R);
    printf("G = %.*e\n",FLT_DIG,G);
    double r = read("Sattelite altitude: ");
    double g = gravity(r);
    printf("Gravity at altitude %.3lf is %lf \n",r,g);
    double speed = velocity(r,g);
    printf("Sattelite speed is: %.2lf m/s\n",speed);
    double t = read("Enter time in seconds: ");
    double d = displacement(speed,t);
    printf("Displacement after %.2lf seconds is: %.2lf meters\n",t,d);
    double alpha = angle(d,r);
    position(r,alpha);

    return 0;
}

double read(char s[]){
    double value;
    printf("%s",s);
    scanf("%lf",&value);
    return value;
}

double gravity(double r){
    return (G*M)/pow((R+r),2);
}

double velocity(double r, double g){
    return sqrt((g*pow(10,-11)*M)/(R+r));
}

double displacement(double v,double t){
    return v*t;
}

double angle(double d,double r){
    return (d/(R+r))*(M_PI/180);
}

void position(double r, double alpha){
    int x = (int)(R+r)*cos(alpha);
    int y = (int)(R+r)*sin(alpha);
    printf("Sattelite is at (%d,%d) \n\n",x,y);
}










