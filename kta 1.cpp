#include<stdio.h>
int main(){
	int x1=0,x2=1,x3;
	printf("cac so fibo tu 1 den 100 la :\n");
	for(int i=2;x2+x3<100;i++){
		x1=x2;
		x2=x3;
		x3=x1+x2;
		printf("%d\t",x3);
	}
	
	return 0;
}
