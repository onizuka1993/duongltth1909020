#include<stdio.h>
int main(){
	int year;
	float cap,rate;
	printf("enter captial sum :\n");
	scanf("%f",&cap);
	printf("enter rate of interest:\n");
	scanf("%f",&rate);
	printf("enter no of year:\n");
	scanf("%d",&year);
	float interest,sum,inter;
	interest=(float)rate/100;
	for(int i=1; i<=year;i++){
		
		interest = cap*rate;
		sum += interest;
		printf(" year %d    interest: %f    sum: %f\n",i,interest,sum);
	}

	return 0;
}
