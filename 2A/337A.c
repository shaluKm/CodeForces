#include<stdio.h>
int main(){

int i,j,k,s,p,temp,diff,diff1;
int arr[50];
scanf("%d %d",&s,&p);
for (int i = 0; i < p; ++i)
{
	scanf("%d",&arr[i]);
}
for (int i = 0; i < p; i++)
{
	
	for (int j= 0; j< p-i-1;j++)
	{
		if(arr[j+1]<arr[j]){
		temp=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;
	    }
	}
    
}
diff=arr[s-1]-arr[0]; 

for (int i = 1; i <= (p-s); ++i)
{
   diff1=arr[i+s-1]-arr[i];
   if (diff1<diff)
    {
    	diff=diff1;
    } 

}
printf("%d\n",diff );

return 0;

}