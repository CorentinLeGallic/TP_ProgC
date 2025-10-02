#include <stdio.h>

int main() {
  printf("Size of signed char : %lu\n", sizeof(signed char));
  printf("Size of unsigned char : %lu\n\n", sizeof(unsigned char));
  
  printf("Size of signed short : %lu\n", sizeof(signed short));
  printf("Size of unsigned short : %lu\n\n", sizeof(unsigned short));
  
  printf("Size of signed int : %lu\n", sizeof(signed int));
  printf("Size of unsigned int : %lu\n\n", sizeof(unsigned int));
  
  printf("Size of signed long int : %lu\n", sizeof(signed long int));
  printf("Size of unsigned long int : %lu\n\n", sizeof(unsigned long int));
  
  printf("Size of signed long long int : %lu\n", sizeof(signed long long int));
  printf("Size of unsigned long long int : %lu\n\n", sizeof(unsigned long long int));
  
  printf("Size of float : %lu\n\n", sizeof(float));
  
  printf("Size of double : %lu\n\n", sizeof(double));
  
  printf("Size of long double : %lu\n\n", sizeof(long double));
  
  return 0;
}

