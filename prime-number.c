#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  if(n==2 || n==3 || n==5 || n==7 )
  printf("prime number !!");
  else if(n%3!=0 && n%5!=0 && n%7!=0 && n%2!=0)
  printf("prime\n");
  else
  printf("not prime!!");
}
