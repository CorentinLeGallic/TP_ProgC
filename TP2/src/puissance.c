#include <stdio.h>

int pow(int a, inb b){
  int result = 1;

  for(int i = 0; i < b; i++){
    result *= a;
  }

  return b >= 0 ? result : 1 / result;
}

int main(){
  printf("Test 1 : %d", pow(2, 3));
  printf("Test 2 : %d", pow(2, -3));
  printf("Test 3 : %d", pow(2, 0));
  printf("Test 4 : %d", pow(-2, 3));
  printf("Test 5 : %d", pow(-2, -3));
  
  return 0;
}
