#include <stdio.h>

int main() {
  signed char signedCharValue = -100;
  unsigned char unsignedCharValue = 200;
  
  signed short signedShortValue = -30000;
  unsigned short unsignedShortValue = 60000;
  
  signed int signedIntValue = -1000000;
  unsigned int unsignedIntValue = 4000000000;
  
  signed long int signedLongIntValue = -1000000000;
  unsigned long int unsignedLongIntValue = 4000000000;
  
  signed long long int signedLongLongIntValue = -90000000000000;
  unsigned long long int unsignedLongLongIntValue = 180000000000000;
  
  float floatValue = 3.14159;
  double doubleValue = 3.141592653589793;
  long double longDoubleValue = 3.14159265358979323846;

  printf("Signed Char Value : %c\n", signedCharValue);
  printf("Unsigned Char Value : %c\n\n", unsignedCharValue);

  printf("Signed Short Value : %hi\n", signedShortValue);
  printf("Unsigned Short Value : %hu\n\n", unsignedShortValue);

  printf("Signed Int Value : %i\n", signedIntValue);
  printf("Unsigned Int Value : %u\n\n", unsignedIntValue);

  printf("Signed Long Int Value : %li\n", signedLongIntValue);
  printf("Unsigned Long Int Value : %lu\n\n", unsignedLongIntValue);

  printf("Signed Long Long Int Value : %lli\n", signedLongLongIntValue);
  printf("Unsigned Long Long Int Value : %llu\n\n", unsignedLongLongIntValue);

  printf("Float Value : %f\n", floatValue);
  printf("Double Value : %lf\n", doubleValue);
  printf("Long Double Value : %LG\n", longDoubleValue);
  
  return 0;
}


