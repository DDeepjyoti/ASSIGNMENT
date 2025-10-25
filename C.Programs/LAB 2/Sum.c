#include<stdio.h>
int main(){
    float Strength_1,Strength_2;
    
    printf("Enter tensile strength 1 =");
    scanf("%f",&Strength_1);
    
    printf("Enter tensile strength 2 =");
    scanf("%f",&Strength_2);
    
    if(Strength_1>Strength_2){
        printf("Larger tensile strength is = %f",Strength_1);
    }
    
    else{
     printf("Larger tensile strength is = %f",Strength_2);
    }
   
    return 0;
}
