#include <stdio.h>

void exemplo3(int number){
  int i,j,k,count;
  for(i = number/2; i <= number; i++)
    for(j = 1; j + number/2 <= number; j++)
      for(k = 1; k <= number; k = k*2)
        count = count + 1;
  return;
}

