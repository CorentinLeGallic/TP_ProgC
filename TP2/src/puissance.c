#include <stdio.h>

float power(int a, int b){
  float result = 1;

  for(int i = 0; i < (b < 0 ? -b : b); i++){
    result *= a;
  }

  return b >= 0 ? result : 1 / result;
}

int main(){
  printf("Test 2 & 3 : %f\n", power(2, 3));
  printf("Test 2 & -3 : %f\n", power(2, -3));
  printf("Test 2 & 0 : %f\n", power(2, 0));
  printf("Test -2 & 3 : %f\n", power(-2, 3));
  printf("Test -2 & -3 : %f\n", power(-2, -3));
  
  return 0;
}



