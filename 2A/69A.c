#include<stdio.h>

int main(){

	int arr[100][3],n,i,j,sum;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
    	for (int j = 0; j<3; j++)
    	{
    		scanf("%d",&arr[i][j]);
    	}
    }

    for (int j = 0; j< 3; j++)
    {
    	sum=0;
    	for (int i= 0; i<n; i++)
    	{
            sum=sum+arr[i][j];
            
    	}
        
    	if (sum!=0)
    		{
    			printf("NO\n");
    			return 0;
    		}
    		
    	printf("YES\n");
    	return 0;
    			
    		
    }


	return 0;

}