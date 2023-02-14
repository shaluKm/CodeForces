#include <stdio.h>


int main(){

	int n,i,j,c,sum1,sum2,temp,totalsum=0;
	int cvalue[100];

	scanf("%d",&n);


	for(i=0;i<n;i++){
			scanf("%d",&cvalue[i]);
			totalsum=totalsum+cvalue[i];
	}

// 	// for(i=0;i<n;i++){
 //  //  printf("%d\n",cvalue[i]);
 // }

	for (int i=0; i<n;i++) {
    for(int j=0;j<(n-i-1);j++){
      if (cvalue[j]<cvalue[j+1]){
        temp=cvalue[j];
        cvalue[j]=cvalue[j+1];
        cvalue[j+1]=temp;
      }
   
    }
  } 
 //   for(i=0;i<n;i++){
 //   printf("%d\n",cvalue[i]);
 // }
  
  c=1;
 
  sum2=0;

  for(i=0;i<n;i++){
  	 sum1=0;

  	for(j=0;j<c;j++){
  		sum1=sum1+cvalue[j];
  	}
  	sum2=totalsum-sum1;

  	if(sum1>sum2){
  		printf("%d\n",c );
  		return 0;
  	}	
  	
  	c++;

  }  

	
	return 0;

}