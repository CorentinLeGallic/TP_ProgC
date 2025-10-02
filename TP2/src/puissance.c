#include <stdio.h>

int power(int a, int b){
  int result = 1;

  for(int i = 0; i < b; i++){
    result *= a;
  }

  return b >= 0 ? result : 1 / result;
}

int main(){
  printf("Test 1 : %d", power(2, 3));
  printf("Test 2 : %d", power(2, -3));
  printf("Test 3 : %d", power(2, 0));
  printf("Test 4 : %d", power(-2, 3));
  printf("Test 5 : %d", power(-2, -3));
  
  return 0;
}
