#include<stdio.h>
int main(){
		int ary[10];
		float tb=0;
		for (int i=1;i<10;i++){
			printf("nhap vao so thu %d:",i);
			scanf("%d",&ary[i]);
		}
		int tong=0, dem=0;
		for(int i=2;i<10;i+=2){
			if(ary[i]%2!=0){
				dem++;
				tong+=ary[i];
				tb =tong/dem;
				
			}
		}
		printf("tong tb cac so le o vi tri chan la :%f",tb);
		
}
