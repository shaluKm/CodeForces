#include<stdio.h>
int main(){

	int index1,i,n,flag=0,res,count=0;
    int arr[3];

	for (int i = 0; i < 3; ++i)
	{
		scanf("%d",&arr[i]);
		if(arr[i]==1){
			count++;
			index1=i;
			flag=1;
		}     

	}
if(flag!=1){
   printf("%d\n",arr[0]*arr[1]*arr[2] );
   return 0;

}
else{
	if (index1==0)
	{
		res=(arr[0]+arr[1])*arr[2];
	}
	else if(index1==2){
        res=(arr[2]+arr[1])*arr[0];
	}
	else{
		if (arr[0]<arr[2])
		{
			res=(arr[0]+arr[1])*arr[2];
		}
		else{
			res=(arr[2]+arr[1])*arr[0];
		}
	}

	}

if(count==3){
	res=3;
}
if(arr[0]==1 && arr[2]==1){
	res=arr[0]+arr[1]+arr[2];
}	

	printf("%d\n",res );
    return 0;
}



	
