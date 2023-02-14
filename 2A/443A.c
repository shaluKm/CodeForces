#include<stdio.h>
#include<string.h>
int main(){
	char ch;
	int sum=0, flag[27] ={0};
  while(ch!='}') {
    scanf("%c",&ch);
    if(ch>96 && ch< 123 && !flag[ch-96]) flag[ch-96] = 1, sum++;
  } 
  printf("%d",sum );
  return 0;
}
