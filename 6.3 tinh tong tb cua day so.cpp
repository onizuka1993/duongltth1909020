#include<stdio.h>
int main (){
	int ary[10];
	float tb;
	for(int i=0;i<10;i++){
		printf("nhap phan tu thu %d\n",i);
		scanf("%d",&ary[i]);
	}
	int tong=0;
	for (int i=0;i<10;i++){
		tong +=ary[i];
		tb= tong/10;
		
	}
	printf("tong tb cua 10 so la =%f",tb);
	
}
