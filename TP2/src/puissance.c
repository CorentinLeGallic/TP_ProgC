#include <stdio.h>

int power(int a, int b){
  int result = 1;

  for(int i = 0; i < (b < 0 ? -b : b); i++){
    result *= a;
  }

  return b >= 0 ? result : 1 / result;
}

int main(){
  printf("Test 2 & 3 : %d\n", power(2, 3));
  printf("Test 2 & -3 : %d\n", power(2, -3));
  printf("Test 2 & 0 : %d\n", power(2, 0));
  printf("Test -2 & 3 : %d\n", power(-2, 3));
  printf("Test -2 & -3 : %d\n", power(-2, -3));
  
  return 0;
}


