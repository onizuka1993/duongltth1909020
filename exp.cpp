#include <stdio.h>
 
int main(){
	int a,b,c;
	printf("nhap 3 so a,b,c = ");
	scanf("%d%d%d", &a, &b, &c);
	if (a>b ){
		if(b>c){
		printf("max = %d" , &a);
		printf("min = %d" , &c);
	}
		else if(a>c){
		printf("max = %d" , &a);
		printf("min = %d" , &b);
		}
		else{
		printf("max = %d" , &c);
		printf("min = %d" , &b);
	}
	}
	else if(a>c){
		printf("max = %d" , &b);
		printf("min = %d" , &c);
	}
		else if (c>b){
		printf("max = %d" , &c);
		printf("min = %d" , &a);}
		else {
		printf("max = %d" , &b);
		printf("min = %d" , &a);
		}
	
}
