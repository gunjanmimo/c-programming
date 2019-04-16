#include <stdio.h>
int checkPrime(int, int); //Function to check prime or not

int main()
{
    int num, check;
    scanf("%d", &num); //The number is taken from test case data
    check = checkPrime(num, num/2);
    if (check == 1)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }
    return 0;
}
int checkPrime(int num, int check){
  if(num==1 ||num==2||num==3||num==5||num==7){
    return check=1;
  }
  else if (num%3!=0 && num%2!=0 && num%5!=0 && num%7!=0){
    return check=1;
  }
  else
  return check=0;
}
