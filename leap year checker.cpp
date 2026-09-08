#include<stdio.h>
int main(){
	int year;
	printf("Enter a year:");
	scanf("%d",&year);
	if(year%4==0&&year%100!=0){
		printf("your year is leap year:",year);
	}
	return 0;
	}

