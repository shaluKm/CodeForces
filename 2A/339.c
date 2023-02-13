#include<stdio.h>
#include<string.h>

int main(){
	int l,i,j,temp;
  j=0;
	char str[100],newword[100];
	scanf("%s",str);
  l=strlen(str);

  if(l==1){
    printf("%s",str );
    return 0; 
  }
  else{
   for (int i=0; i<l;i+=2) {
    for(int j=0;j<(l-i-2);j+=2){
      if (str[j]>str[j+2]){
        temp=str[j];
        str[j]=str[j+2];
        str[j+2]=temp;
      }
    //printf("%d, %d => %s\n", i,j,str);
    }
  } 
}
  
  printf("%s", str);


  return 0;    
}