#include <stdio.h>

int islucky(int n);

int main(){
	int n,i;
	
  scanf("%d",&n);
  
    
  	for(i=1;i<=n;i++){
  		if(n%i==0){
  			if(islucky(i)){
  				printf("YES");
  				return 0;
  			}
  		}
  	}
  	printf("NO");
  	return 0;
}

int islucky(int n){
	while(n>0){
		if(n%10==4 || n%10==7){
			n=n/10;
		} 
		else return 0;
	}	
	return 1;  //lucky
}