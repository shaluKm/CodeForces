#include<stdio.h>
#include <ctype.h>
int main(){
	int l,i;
	char word1[100],word2[100];

	scanf("%s\n%s",word1,word2);
    l=strlen(word1);

  for (int i=0; i<l; i++) {
  	if(tolower(word1[i]) < tolower(word2[i])) {printf("-1"); return 0;}
    if(tolower(word1[i]) > tolower(word2[i])) {printf("1"); return 0;}
  } 
  printf("0");
  return 0;    
}