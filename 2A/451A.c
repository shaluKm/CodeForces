#include<stdio.h>
int main(){

	int r,c,min;

	scanf("%d %d",&r,&c);
	min=(r<=c?r:c);
	(min%2==0?printf("Malvika"):printf("Akshat"));

	return 0;

	}
