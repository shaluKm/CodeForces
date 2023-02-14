#include<stdio.h>

int main(){
	int n,m,a,b,simple,special,special1,special2;

	scanf("%d %d %d %d",&n,&m,&a,&b);
	simple =n*a;
	if((n%m)==0){
    special=(n/m)*b;

	}
	else
	{
    special1=((n/m)+1)*b;
    special2=((n/m)*b)+((n-(n/m)*m)*a);
   
	}

	

	if((n%m)==0){
		if(simple<=special)
		printf("%d\n",simple);
		else printf("%d\n",special);
	}
	else{
      
         	if(simple<=special1 && simple<=special2){
         		printf("%d\n",simple );
         	}
         	else{
         		if(special1<=special2){
         			printf("%d\n",special1 );
         		}
         		else printf("%d\n",special2);

         	}
         }
         return 0;

	}
	
	
