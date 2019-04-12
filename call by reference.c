#include<stdio.h>
#include<string.h>
int change(char s[100], char d[100]){
  strcat(s,d);
  printf("using function %s\n",s);
}
int main(){
  char s[100],d[100];
  scanf("%s%s",s,d);
  printf("before using function %s\n",s);
  change(s,d);
  printf("after using function %s\n",s);

}
