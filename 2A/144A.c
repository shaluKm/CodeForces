#include<stdio.h>
int main(){

	int h[100],n,i,minindex,maxindex,min,max;
    
    scanf("%d",&n);
    scanf("%d",&h[1]);
    minindex=1;
    maxindex=1;
    min=h[1];
    max=h[1];

    
    for(i=2;i<=n;i++){
    	
    	scanf("%d",&h[i]);
    
    	if(h[i]<=min){
    		
    		minindex=i;
    		min=h[i];
    		

    	}

    	if(h[i]>max){
    		
    		maxindex=i;
    		max=h[i];
    		
    	}
        
    	}
       
       
    
    if(maxindex<minindex)	 
    printf("%d\n",(n-minindex+maxindex-1) );
    else
    printf("%d\n",(n-minindex+maxindex-2) );


return 0;


}