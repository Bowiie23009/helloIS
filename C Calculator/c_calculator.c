#include "stdio.h"
void main(){
	float num1,num2,result;
	int oprt;
	printf("Please enter first number: ");
        scanf("%f",&num1);
	printf("Please enter second number: ");
        scanf("%f",&num2);
	printf("Please select your operator (choice 1-4)\n");
        printf("1) +\n2) -\n3) *\n4) /\n");
        scanf("%d",&oprt);
	if(oprt == 1)
        {
		total = num1+num2;
		printf("Result: %.2f + %.2f = %.2f",num1,num2,total);
	}
	else if (oprt == 2)
        {
		total = num1-num2;
		printf("Result: %.2f - %.2f = %.2f",num1,num2,total);
	}
	else if (oprt == 3){
		total = num1*num2;
		printf("Result: %.2f * %.2f = %.2f",num1,num2,total);
	}
	else if (oprt == 4){
		total = num1/num2;
		printf("Result: %.2f / %.2f = %.2f",num1,num2,total);
	}
}

