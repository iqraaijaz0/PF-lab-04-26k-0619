#include<stdio.h>
int main()
{
	int num1;
	char operator;
	int num2;
	printf("enter first number:");
	scanf("%d",&num1);
	printf("enter an operator:");
	scanf(" %c",&operator);
	printf("enter second number:");
	scanf("%d",&num2);
	switch(operator){
		case '+':
			printf("Sum = %d",num1+num2);
			break;
			case '-':
				printf("subtraction = %d",num1-num2);
				break;
				case'*':
					printf("multiplication = %d",num1*num2);
					break;
					case'/':
						printf("Division = ",num1/num2);
				break;
				if(num2==0&&num1/num2){
					printf("division by zero is not allowed");
				}
	}
	
return 0;	
}
