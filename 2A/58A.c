#include <stdio.h>
#include<string.h>

int main(){
	int i,j,k,l;
	char word[5]={'h','e','l','l','o'};
	char new[100];
	scanf("%s",new);
	l=strlen(new);
  //printf("%d\n",l );

	k=0;
	i=0;
	// while(i<l){

		for(j=0;j<l;j++){

			if(new[j]==word[k]){				
				k++;
			}
			if(k==5) break;
			// i++;
		}
	// }
if(k==5)
printf("YES");
else
printf("NO");


	return 0;

}