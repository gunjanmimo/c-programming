#include<stdio.h>
void swap(int,int);
int main(){
  int a=5,b=10;
  printf("before the function\n");
  printf("a=%d and b=%d\n",a,b);
  swap(a,b);
  printf("after the function\n");
  printf("a=%d and b=%d\n",a,b);

}
void swap(int x, int y){
  int temp;
  temp=x;
  x=y;
  y=temp;
  printf("using function\n");
  printf("a=%d and b=%d\n",x,y);
}
