#include <stdio.h>
#include <math.h>
#include <string.h>

/*
FT = (h_dist)/(velocity * cos(angle_elv))
H = velocity*sin(angle_elv)*time - 0.5*G*time^2
G = 9.8 ms^-2

Compute the following variables:
- time
- velocity
- angle_elv
*/

double read(char []);
double flight_time(double, double, double);
double elevation(double, double, double,double);

int main(void){
	const double G = 9.8;

	double distance = read("Horizontal displacement: ");
	double velocity = read("Initial velocity: ");
	double angle = read("Elevation angle: ");

	double time = flight_time(distance,velocity,angle);
	double height = elevation(velocity,angle,time, G);

	printf("Flight duration: %lf\n",time);
	printf("Flight elevation: %lf\n",height);
	return 0;
}

double read(char s[]){
	double value;
        printf("%s",s);
        scanf("%lf",&value);
        return value;
}

double flight_time(double  distance, double velocity, double angle){

	return distance/(velocity*cos(angle));
}

double elevation(double velocity, double angle, double time, double gravity){
	return velocity*sin(angle)*time - (0.5*gravity*pow(time,2));
}
