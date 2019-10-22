#include<stdio.h>
int main(){
	int ary[10];
	for(int i = 0; i<10;i++){
		printf("nhap vao so thu %d:",i);
		scanf("%d",&ary[i]);
	}
	float tb=0;
	int tong=0,dem=0;
	for (int i=0;i<10;i++){
		if(ary[i]%2!=0){
			dem++;
			tong +=ary[i];
			tb=tong/dem;
			
		}
		
	}
	printf("tong trung binh cac so le trong day so la  =%f",tb);
	
}
