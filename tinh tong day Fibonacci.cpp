#include<stdio.h>
int n,i,S,T3,T1,T2;
int main(){
	printf("nhap gia tri n:\n");
	scanf("%d",&n);
	T1=1;
	T2=1;
	for(i=2;i<n;i++){
		T3=T1+T2;
		T1=T2;
		T2=T3;
	}
	S=T1+T2+T3;
	printf("gia tri cua day la: %d",S);
	return 1;
}

