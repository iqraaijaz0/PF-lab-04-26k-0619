#include<stdio.h>
int main(){
int marks;
printf("enter your marks:");
scanf("%d",&marks);
if(marks>=85){
	printf("grade :A");}
else	if (marks>=70){
		printf("Grade:B");
	}
else if(marks>=60){
		printf("Grade:C");
	}
	else if (marks>=50){
		printf("Grade:D");
		}
	
	else{
	}("Print grade:F");

	return 0;
}
