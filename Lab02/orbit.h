#include<stdio.h>
#include<math.h>

/*
 * Compute the orbital velocity of a sattelite orbiting earth.
 * at a distance r [from earth surface][entered by user].
 * v = sqrt(gM/(R+r))
 * Gravity at altitude r is: g = GM/(R+r)^2
 * M = 5.98*10^24 [kgs]
 * G = 6.67*10^-11
 * R = 6.4*10^6 [m]
 * Displacment after given time (t): d = v*t
 * Angle of Displacment: alpha = d/(R+r)*PI/180 [radians]
 * Position of the sattelite after (t) seconds:
 * x = (R+r)*cos(alpha)
 * y = (R+r)*sin(alpha)
 */

 #ifndef ORRBIT_FUNC
 #define ORRBIT_FUNC
 
 #define M 5.98*pow(10,24)
 #define G 6.67*pow(10,-11)
 #define R 6.4*pow(10,6)

//read pattern prototype for a double value
double read(char[]);

//gravity at altitudde r prototype: g = GM/(R+r)^2
double gravity(double);

//Velocity of sattelite: v = sqrt(gM/(R+r))
double velocity(double,double);

//Displacment at altitude r after t(s): d = v*t
double displacement(double,double);

//Angle of displacement: alpha = d/(R+r)*PI/180 [radians]
double angle(double,double);

//Position output pattern [Procedure]
//x = (R+r)*cos(alpha)
//y = (R+r)*sin(alpha)
void position(double,double);


 #endif /*ORRBIT_FUNC*/

