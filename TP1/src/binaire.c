#include <stdio.h>

#define INT_SIZE 16

void printBinaryForm(int number) {
  if(number == 0) return "0";

  char invertedResult[INT_SIZE]; // Int size : 16 bits

  int i = 0;
  int n = number;

  while(number > 0){
    invertedResult[i] = n % 2;
    n = n / 2;
    i++;
  }

  printf("Binary form of %d : ", number);

  for(int j = 0; j < i; j++){
    printf("%d", invertedResult[INT_SIZE - i - j - 1]);
  }

  return result;
}

int main(){
  getBinaryForm(0);
  getBinaryForm(4096);
  getBinaryForm(65536);
  getBinaryForm(65535);
  getBinaryForm(1024);
  
  return 0;
}




