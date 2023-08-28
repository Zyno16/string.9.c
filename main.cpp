#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char c[100];
char s;
printf("enter the string of caractere ?:");
gets(c);
printf("enter the value of s ?:");
scanf("%d\n",&s);
int i,j;
int len =strlen(c);
for(i=0;i<len;i++){
        if(c[i]==s){
         for(j=i;j<len;j++)
                c[j]=c[j+1];
                i--;
         len--;

        }

}
  printf("string bof caractere after the squise '%c' :%s",s,c);








 return 0;

}
