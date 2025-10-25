#include<stdio.h>
int main() {
   float a,b,c;
   //Asking three numbers from the user
   printf("Enter the first number =");
   scanf("%f",&a);
   
   printf("Enter the second number =");
   scanf("%f",&b);
   
   printf("Enter the third number =");
   scanf("%f",&c);
   
   //Comparison between the numbers
    if(a>b&&a>c){
    	printf("The largest number is = %f",a);
	}
	else if(b>a&&b>c){
		printf("The largest number is = %f",b);
	}
	else{
		printf("The largest number is = %f",c);
		
	}   
	 return 0;
}
