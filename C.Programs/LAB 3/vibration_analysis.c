#include<stdio.h>
int main() {
    float amplitude, frequency;

    // Input values
    printf("Enter the vibration amplitude (mm): ");
    scanf("%f", &amplitude);

    printf("Enter the vibration frequency (Hz): ");
    scanf("%f", &frequency);

    // Check conditions using logical operators
    if (amplitude > 0.5 && (frequency >= 20 && frequency <= 50)) {
        printf("High Risk - Immediate Attention Needed!\n");
    } 
    else if (amplitude > 0.5 && frequency > 60) {
        printf("Medium Risk - Monitor Closely.\n");
    } 
    else {
        printf("Low Risk - System Stable.\n");
    }

    return 0;
}
