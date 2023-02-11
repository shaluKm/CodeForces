#include <stdio.h>
#include <string.h>
int main() {
	int n,i,l;
	char word[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{

          //scanf("%[^\n]%*c", word);

          scanf("%s", word);
          l=strlen(word);
          if(l>10)
          {
          	printf("%c%d%c\n",word[0],(l-2),word[(l-1)] );
          }
          else
          {
          	printf("%s\n",word );
          
          }
          
	}
	
	
	return 0;
}