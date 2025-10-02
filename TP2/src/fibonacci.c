#include <stdio.h>

void printFibonacci(int n){
  if(n < 0) return;
  
  if(n <= 1) {
    printf("%d", n);
    return;
  }

  int penultimateValue = 0;
  int lastValue = 1;

  for(int i = 2; i <= n; i++){
    int newValue = penultimateValue + lastValue;
    
    penultimateValue = lastValue;
    lastValue = newValue;
  }

  printf("%d", lastValue);
}

int main(){
  int n;

  printf("Nombre de termes : ");
  scanf("%d", &n);

  printFibonacci(n);
  
  return 0;
}
