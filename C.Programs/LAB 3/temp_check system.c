#include<stdio.h>
int main() {
    float applied_stress, yield_strength, fos;

    // Input values
    printf("Enter the applied stress (MPa): ");
    scanf("%f", &applied_stress);

    printf("Enter the material yield strength (MPa): ");
    scanf("%f", &yield_strength);

    // Calculate Factor of Safety
    fos = yield_strength / applied_stress;

    printf("Factor of Safety (FOS) = %f\n", fos);

    // Check safety conditions
    if (fos >= 2.0) {
        printf("Safe design.\n");
    } 
    else if (fos >= 1.5 && fos < 2.0) {
        printf("Acceptable with monitoring.\n");
    } 
    else {
        printf("Danger - redesign needed!\n");
    }

    return 0;

}
