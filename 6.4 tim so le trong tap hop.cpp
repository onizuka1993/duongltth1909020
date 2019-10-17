#include<stdio.h>
int main(){
	int ary[20];
	for(int i=0;i<20;i++){
		printf("nhap vao so thu %d ",i);
		scanf("%d",&ary[i]);
	}for (int i=0;i<20;i++){
		if(ary[i]%2!=0){
		
		printf("%d\t",ary[i]);
	}
}
	return 0;
}
