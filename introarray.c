#include <stdio.h>
#define SIZE 10
int main(void){
  int array[SIZE] = {0};
  for (int i = 0; i < SIZE; i++){
    array[i] = i*i;
  }
  for (int i = 0; i < SIZE; i++){
    printf("array_values[%d] = %d\n",i,array[i]);
  }
}
  