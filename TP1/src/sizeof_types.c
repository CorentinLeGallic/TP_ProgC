#include <stdio.h>

int main() {
  printf("Size of signed char : %lu", sizeof(signed char));
  printf("Size of unsigned char : %lu", sizeof(unsigned char));
  
  printf("Size of signed short : %lu", sizeof(signed short));
  printf("Size of unsigned short : %lu", sizeof(unsigned short));
  
  printf("Size of signed int : %lu", sizeof(signed int));
  printf("Size of unsigned int : %lu", sizeof(unsigned int));
  
  printf("Size of signed long int : %lu", sizeof(signed long int));
  printf("Size of unsigned long int : %lu", sizeof(unsigned long int));
  
  printf("Size of signed long long int : %lu", sizeof(signed long long int));
  printf("Size of unsigned long long int : %lu", sizeof(unsigned long long int));
  
  printf("Size of float : %lu", sizeof(float));
  printf("Size of double : %lu", sizeof(double));
  printf("Size of long double : %lu", sizeof(long double));
  
  return 0;
}
