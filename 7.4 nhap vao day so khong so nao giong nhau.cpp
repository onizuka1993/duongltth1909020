#include<stdio.h>
int main(){
	int n;
	printf("nhap n=\n");
	scanf("%d",&n);
	int ary[n];
	for (int i=0;i<n;i++){
		int x;
		bool f=true;
		do{
			printf("nhap gia tri ary[%d]= \n",i);
			scanf("%d",&x);
			bool trunglap=false;
			for(int j=0; j<i;j++){
			
			if(ary[j]==x){
				trunglap=true;
				break;
			}
			}
			if(trunglap==false){
				f=false;
				ary[i]=x;
			}
		}while(f);
		
	}
}

	
	
	



