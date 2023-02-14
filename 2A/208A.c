#include <stdio.h>
#include <string.h>

int main(){
	char word[200],new[200];
	int i,l;
    scanf("%s",word);
    l=strlen(word);
    for (int i = 0; i < l;i++)
    {
    	if (word[i]=='W')
    	{
    		
    		if (word[i+1]=='U')
    		{
    		  if (word[i+2]=='B')
    		  {
    		  	
               	printf("\t");
               
    		  	 i=i+2;
    		  	continue;
    		  }
    		  
    		 else printf("%c",word[i]);
    		 
    		}
    	
    	else printf("%c",word[i]);
    	
    	}
        else 
    	
    	printf("%c",word[i]);
    	
    
    }


	return 0;
}