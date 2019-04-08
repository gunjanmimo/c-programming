#include<stdio.h>
int main(){
  int  m1[3][3],m2[3][3],i,j,m3[3][3];
  printf("first matrix\n");
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){

      printf("element of [%d][%d]",i,j);
      scanf("%d",&m1[i][j]);
    }
  }
  printf("second matrix\n");
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("element of [%d][%d]",i+1,j+1);
      scanf("%d",&m2[i][j]);
    }
  }
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      m3[i][j]=m1[i][j]*m2[i][j];
    }
  }
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("%d\t",m3[i][j]);

    }
    printf("\n");
  }

  return 0;
}
