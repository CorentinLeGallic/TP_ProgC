#include <stdio.h>

#define DAYS_COUNT 15

int main(){
  int goldValues[DAYS_COUNT] = { 1503, 1695, 1742, 1566, 2129, 2230, 1591, 1668, 2282, 1689, 2174, 2173, 2290, 1883, 1974 };

  int maximumLoss = 0;

  for(int i = 0; i < DAYS_COUNT; i++){
    for(int j = 0; j < DAYS_COUNT - i; j++){
      if(goldValues[i] - goldValues[i + j] > maximumLoss) maximumLoss = goldValues[i] - goldValues[i + j];
    }
  }

  printf("Maximum loss : %d\n", maximumLoss);
  
  return 0;
}
