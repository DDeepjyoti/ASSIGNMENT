#include<stdio.h>
int main(){
	float a=0.5,mass,velocity,kinetic_energy;
	printf("Enter mass in kg =");
	scanf("%f",&mass);
	
	printf("Enter velocity in m/s =");
	scanf("%f",&velocity);
	
	kinetic_energy=a*mass*velocity*velocity;
	printf("Kinetic_energy is = %.2f Joules" ,kinetic_energy);
}
