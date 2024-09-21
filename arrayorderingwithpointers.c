#include <stdio.h>
#define MAX 5
int main(void){
  int arr[MAX] = {4, 6, 2, 9, 3};
// array of pointers to ints
  int* array_of_pointers[MAX] = {};
// Sets pointer array to point to each arr[] element
  for (size_t i = 0; i < MAX; i++) {
    array_of_pointers[i] = &arr[i];
  }
// Sort pointer array in ascending order (BubbleSort)
  for (size_t i = 0; i < MAX; i++) {
    for (size_t j = 0; j < MAX - 1; j++) {
      if (*array_of_pointers[j] > *array_of_pointers[j+1]) {
        int* temp = array_of_pointers[j];
        array_of_pointers[j] = array_of_pointers[j+1];
        array_of_pointers[j+1] = temp;
      }
    }
  }
// TO DO:
// below is an array of pointers
// have each pointer in this array point an element of arr[]
// sort descending[]
// print descending[]
  int* descending[MAX] = {};
  for (int i = 0; i < MAX; i++){
    descending[i] = &arr[i];
  }
  for (size_t i = 0; i < MAX; ++i){
    for (size_t j = 0 ; j < MAX - 1; ++j){
      if (*descending[j] < *descending[j+1]){
        int *temp = descending[j];
        descending[j] = descending[j+1];
        descending[j+1] = temp;
      }
    }
  }
  printf("\nOriginal | Ascending | Descending\n");
  for (int i = 0; i < MAX; i++) {
    printf("%2i %12i %12i\n", arr[i], *array_of_pointers[i], *descending[i]);
  }
  puts("");
}