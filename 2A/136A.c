#include<stdio.h>

int main(){

	int n,i,j,k;
	int f[100];


	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&f[i]);
	}
    
    for(j=1;j<=n;j++){
	for(k=1;k<=n;k++){

		if(f[k]==j){
			printf("%d\t",k);
		}
		
	}
}


	return 0;

}