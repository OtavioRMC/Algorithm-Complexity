#include <stdio.h>

int sequencialSearch(int *array,int size,int value){
  for(int i = 0; i < size; i++){
     if(array[i] == value) return i;
  }
   return -1;
}
int main()
{
  int array[5] = { 1 , 2 , 3 , 4 , 5 };
  int result = sequencialSearch(array,5,3);
  printf("Indice do valor 3:  %d ",result);
  return 0;
}