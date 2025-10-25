#include<stdio.h>
int main() {
    float temperature;

    // Ask user for current temperature
    printf("Enter the current temperature (in °C): ");
    scanf("%f", &temperature);

    // Check if temperature is within safe range (60, 82]
    if (temperature > 60 && temperature <= 82) {
        printf("Temperature is safe.\n");  
    } 
    else if(temperature <=60){
    	printf("Enter the correct temperature");
	}
	else {
        printf("Temperature warning!\n");
    }
   
    return 0;
}
