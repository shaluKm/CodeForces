#include<stdio.h>
int main(){

long long int n, k,res;


	scanf("%lld  %lld",&n, &k);
	
	if(n%2==0){
		if (k<=n/2)
		{
			res=1+(k-1)*2;
		}
		else{
			res=2+(k-(n/2)-1)*2;
		}
	}	
    
  else{
		if (k<=n/2+1)
		{
			res=1+(k-1)*2;
		}
		else{
			res=2+(k-(n/2+1)-1)*2;
		}

	}

	printf("%lld\n",res );

	return 0;
}