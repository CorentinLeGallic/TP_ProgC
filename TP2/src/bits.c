#include <stdio.h>

int testBits(number){
  int bit4 = (number >> 4) & 1;
  int bit20 = (number >> 20) & 1;

  return bit4 && bit20;
}

int main(){
  printf("1048592 : %d\n", testBits(1048592));
  printf("116 : %d\n", testBits(116));
  printf("11048576 : %d\n", testBits(11048576));
  printf("0 : %d\n", testBits(0));
  printf("15 : %d\n", testBits(15));
  
  return 0;
}

