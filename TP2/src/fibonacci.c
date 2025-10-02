#include <stdio.h>

void printFibonacci(int n){
  if(n < 0) return;
  
  printf("Terme N°1 : %d\n", 0);
  
  if(n == 0) return;
    
  printf("Terme N°2 : %d\n", 1);
  
  if(n == 1) return;

  int penultimateValue = 0;
  int lastValue = 1;

  for(int i = 3; i <= n; i++){
    int newValue = penultimateValue + lastValue;
    
    penultimateValue = lastValue;
    lastValue = newValue;

    printf("Terme N°%d : %d\n", i, lastValue);
  }
}

int main(){
  int n;

  printf("Nombre de termes : \n");
  scanf("%d", &n);

  printFibonacci(n);
  
  return 0;
}



