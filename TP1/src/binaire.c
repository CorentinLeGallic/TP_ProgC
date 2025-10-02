#include <stdio.h>

#define INT_SIZE 32

void printBinaryForm(int number) {
  if(number == 0) {
    printf("0");
    return;
  }

  char invertedResult[INT_SIZE];

  int i = 0;
  int n = number;

  while(n > 0){
    invertedResult[i] = n % 2;
    n = n / 2;
    i++;
  }

  printf("Binary form of %d : ", number);

  for(int j = 0; j < i; j++){
    printf("%d", invertedResult[i - j - 1]);
  }
}

int main(){
  printBinaryForm(0);
  printBinaryForm(4096);
  printBinaryForm(65536);
  printBinaryForm(65535);
  printBinaryForm(1024);
  
  return 0;
}








