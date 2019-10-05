#include <stdio.h>
 
int main(){
	int a,b,c;
	printf("nhap 3 so a,b,c = ");
	scanf("%d%d%d", &a, &b, &c);
	if (a>b ){
		if(b>c){
		printf("max = %d\n" , a);
		printf("min = %d\n" , c);
	}
		else if(a>c){
		printf("max = %d\n" , a);
		printf("min = %d\n" , b);
		}
		else{
		printf("max = %d\n" , c);
		printf("min = %d\n" , b);
	}
	}
	else if(a>c){
		printf("max = %d\n" , b);
		printf("min = %d\n" , c);
	}
		else if (c>b){
		printf("max = %d\n" , c);
		printf("min = %d\n" , a);}
		else {
		printf("max = %d\n" , b);
		printf("min = %d\n" , a);
		}
	
}
