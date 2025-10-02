#include <stdio.h>
#include <math.h>

int main {
  float rayon = 10;

  float aire = M_PI * (rayon ** 2);
  float perimeter = 2 * M_PI * rayon;

  printf("Aire : %f - Périmètre : %f\n", aire, perimeter);
  
  return 0;
}
