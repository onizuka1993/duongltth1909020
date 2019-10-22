#include<stdio.h>
int main(){
	int ary[10];
	for(int i=0;i<10;i++){
		printf("nhap vao phan tu thu %d :",i);
		scanf("%d",&ary[i]);
	}
	for (int i=0;i<10;i++){
		if(ary[i]<0){
			printf("phan tu thu %d:0\n ",i);
		}else{
			printf("phan tu thu %d: %d\n",i,ary[i]);
		}
	}
}
