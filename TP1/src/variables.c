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
  
  signed long long int signedLongLongIntValue = -9000000000000000000;
  unsigned long long int unsignedLongLongIntValue = 18000000000000000000;
  
  float floatValue = 3.14159;
  double doubleValue = 3.141592653589793;
  long double longDoubleValue = 3.14159265358979323846;

  printf("Signed Char Value : %c", signedCharValue);
  printf("Unsigned Char Value : %c", unsignedCharValue);

  printf("Signed Short Value : %hi", signedShortValue);
  printf("Unsigned Short Value : %hu", unsignedShortValue);

  printf("Signed Int Value : %i", signedIntValue);
  printf("Unsigned Int Value : %u", unsignedIntValue);

  printf("Signed Long Int Value : %li", signedLongIntValue);
  printf("Unsigned Long Int Value : %lu", unsignedLongIntValue);

  printf("Signed Long Long Int Value : %lli", signedLongLongIntValue);
  printf("Unsigned Long Long Int Value : %llu", unsignedLongLongIntValue);

  printf("Float Value : %f", floatValue);
  printf("Double Value : %lf", doubleValue);
  printf("Long Double Value : %LG", longDoubleValue);
  
  return 0;
}
