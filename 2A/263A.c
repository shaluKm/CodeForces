#include<stdio.h>
int main(){
 int arr[6][6],i,j,r,c;

 for(i=1;i<=5;i++){
 	for(j=1;j<=5;j++){
 		scanf("%d",&arr[i][j]);
 		if(arr[i][j]==1){
 			r=i;
 			c=j;
 	      }
      }
}

 
r=(r>3?r-3:3-r);
c=(c>3?c-3:3-c);

printf("%d\n",(r+c));
return 0;
}