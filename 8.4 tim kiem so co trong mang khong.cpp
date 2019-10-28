#include<stdio.h>
int nhapmang(int a[] , int n){
	for(int i=0;i<n;i++){
		printf("nhap vao so a[%d]=\n",i);
		scanf("%d",&a[i]);
	}
}

int timkiem(int a[],int n){
	int t;
	printf("nhap t=\n");
	scanf("%d",&t);
	for(int i; i<n;i++){
	int b=a[i];
	  
	if(t==b){	
	printf(" so %d co trong mang",t);
	
	}else{
	printf(" so %d khong co trong mang",t);
	}
	}
	
}

int main(){
	int a[10];
	nhapmang(a,10);
	timkiem(a,10);
}

