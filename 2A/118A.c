#include <stdio.h>
#include <string.h>
int main() {

	int n,i,l,j;
	char word[100],A,O,Y,E,U,I,temp,newword[200];
	scanf("%s", word);
	l=strlen(word);

	j=0; //neword index

	for(i=0;i<l;i++)
	{
 
        if(word[i] == 'A'||word[i] == 'O'||word[i] =='Y'||word[i] =='E'||word[i] =='U'||word[i] == 'I'||word[i] == 'a'||word[i] == 'o'|word[i] =='y'||word[i] =='e'||word[i] =='u'||word[i] == 'i')
        {
           
	    continue;
		
	    }
	    else{

	    	newword[j] = '.';
	    	printf("%c",newword[j]);
	    	j=j+1;
	    	newword[j]=word[i];
	    }
	    
        
        if(word[i]>=65 && word[i]<=90){
        	newword[j]=word[i]+32;

        }
        
          	printf("%c",newword[j]);
            j++;
          
	}
	
	
	return 0;
}