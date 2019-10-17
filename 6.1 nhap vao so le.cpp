#include<stdio.h>
int main(){
	int ary[10];
	for (int i=0; i<10; i++){
		do{
			printf("nhap vao 1 so le:\n");
			scanf("%d",&ary[i]);
		}while(ary[i]%2==0);
	}
	printf(" mang so le vua nhap :\n");
	for(int i=0;i<10;i++){
		printf("ary[%d]=%d\n", i, ary[i]);
	}
	return 0;
}


