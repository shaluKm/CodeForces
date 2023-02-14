#include<stdio.h>
int main(){

	long long int n,last,secondlast;

	scanf("%lld",&n);
	if(n>=0){
		printf("%lld\n",n );
		return 0;
	}

	else{
		last=n%10;
		if(last<0) last=last*-1;

		secondlast=(n/10)%10 ;
		if(secondlast<0) secondlast=secondlast*-1;
        //printf("%lld  %lld\n",last,secondlast);

        if(last>=secondlast){
        	n=(n/10);
        	
        	printf("%lld\n",n);
        }
        else{
        	//printf("%lld  %lld \n",(n/100)*10 , (n%10));
        	n=(n/100)*10+(n%10);
        	
        	printf("%lld\n",n);
        }

	}

	return 0;
}