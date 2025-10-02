#include <stdio.h>

#define INT_SIZE 16

char* getBinaryForm(int number) {
  if(number == 0) return "0";

  char[INT_SIZE] invertedResult; // Int size : 16 bits

  int i = 0;
  int n = number;

  while(number > 0){
    invertedResult[i] = n % 2;
    n = n / 2;
    i++;
  }

  char[i] result;

  for(int j = 0; j < i; j++){
    result[j] = invertedResult[INT_SIZE - i - j - 1];
  }

  return result;
}

int main(){
  printf("Binary form of 0 : %s", getBinaryForm(0));
  printf("Binary form of 4096 : %s", getBinaryForm(4096));
  printf("Binary form of 65536 : %s", getBinaryForm(65536));
  printf("Binary form of 65535 : %s", getBinaryForm(65535));
  printf("Binary form of 1024 : %s", getBinaryForm(1024));
  
  return 0;
}

