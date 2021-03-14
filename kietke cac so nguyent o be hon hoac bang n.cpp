#include<stdio.h>
int i,n,a,s;
int main(){
	printf("nhap n: \n");
	scanf("%d",&n);
	if(n<2) printf("khong phia la soo nguyen to");
	printf("cac so nguyen to la :");
	s=0;
	for(i=2;i<=n;i++)
	{
		for(a=1;a<=i;a++)
		{
		  if(i%a==0)
		  s++;
		} 
		  if(s==2) printf("%d  ",i);
		s=0;
	}
	
	return 1;
}
