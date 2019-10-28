#include<stdio.h>
int nhapmang(int a[], int n){
	for(int i=0;i<n;i++){
	
	printf("nhap a[%d]=\n",i);
	scanf("%d",&a[i]);
	}
}
int insole(int a[], int n){
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			printf("%d\t",a[i]);
		}
	}
}
int main(){
	int a[10];
	nhapmang(a,10);
	insole(a,10);
}
