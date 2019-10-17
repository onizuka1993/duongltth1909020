#include<stdio.h>
int main(){
	int ary[10];
	for (int i=0;i<10;i++){
		printf("nhap so:\n");
		scanf("%d",&ary[i]);		
	}
	for (int i=0;i<10;i++){
		int t=0,tmp=ary[i];
		while (tmp!=0){
			t=t*10+tmp%10;
			tmp/=10;
		}
		printf("so nghich dao cua %d = %d\n",ary[i],t);
	}
}
