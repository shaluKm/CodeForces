#include<stdio.h>

int main(){
	int i,j,n,hcolour,count=0;
	int arr[30][30];

	scanf("%d",&n);

    for(i=0;i<n;i++){
    	for(j=0;j<2;j++){
    		scanf("%d",&arr[i][j]);
    	}
    	
    }

    for(i=0;i<n;i++){
    	hcolour = arr[i][0];
    	for(j=0;j<n;j++){
    	if(hcolour==arr[j][1]){
    		count++;
    	}	

    		
    	}

    }

    printf("%d\n",count );
    return 0;
}