#include<stdio.h>
#include<string.h>
int main(){
  char str1[100],str2[100],temp;
  int m,n,c=0;
  scanf("%[^\n]",str1);
  printf("enter starting and ending point>>>" );
  scanf("%d%d",&m,&n);
  for(int i=m;i<=n;i++){
    temp=str1[i];
    str2[c]=temp;
    c++;
  }
  printf("%s",str2);
}
