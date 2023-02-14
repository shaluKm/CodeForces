#include<stdio.h>
int main(){

	int flag[100],n,x,y,i,l;

	scanf("%d",&n);
	for (i = 1; i<=n; ++i)
	{
		flag[i]=0;
	}

	scanf("%d", &x);
	for (i = 1; i<=x; ++i)
	{
		scanf("%d",&l);
		flag[l]=1;
	
	}

	scanf("%d", &y);
	for (i = 1; i<=y; ++i)
	{
		scanf("%d",&l);
		flag[l]=1;
	}

	for (i = 1; i<=n; ++i)
	{
	   if(flag[i]!=1){
	   	printf("Oh, my keyboard!");
	   	return 0;
	   }
	}

	
   printf("I become the guy.");


	return 0;

}