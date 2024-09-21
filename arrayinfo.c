#include <stdio.h>
#define SIZE 10
#include <limits.h>
void find_two_largest(const int[], int, int*, int*);
void find_ave_sum(const int[], int, double*, int*);
void printArray_with_pointer(const int[], int);
int main(void) {
  int theArray[SIZE] = {11, 5, 2, 9, 15, 3, 8, 21, 4, 38};
  puts("\nThe array: ");
  printArray_with_pointer(theArray, SIZE);
  int largestOne_index = 0;
  int largestTwo_index = 0;
  find_two_largest(theArray, SIZE, &largestOne_index,     &largestTwo_index);
  int *large1 = &largestOne_index;
  int *large2 = &largestTwo_index;
  printf("\nthe largest value is %d and the second largest value is %d\n", largestOne_index, largestTwo_index);
  double ave = 0;
  int sum = 0;
  find_ave_sum(theArray, SIZE, &ave, &sum);
  double *theAve = &ave;
  int *theSum = &sum;
  printf("the average of the array is %.0lf and the sum of the array is %d\n",ave,sum);
}
void find_two_largest(const int toFind[], int theSize, int* large1, int* large2){
  int max = 0;
  int max2 = 0;
  for (int i = 1; i < SIZE; ++i){
    if (toFind[i] > toFind[i-1]){
      max = toFind[i];
    }
  }
  for (int i = 1; i < SIZE; ++i){
    if (toFind[i] > toFind[i-1] && toFind[i] < max){
      max2 = toFind[i];
    }
  }
  *large1 = max;
  *large2 = max2;
}
void find_ave_sum(const int sum_ave[], int theSize, double* theAve, int* theSum){
  int sum = 0;
  double ave = 0;
  for (int i = 0; i < SIZE; ++i){
    sum += sum_ave[i];
  }
  ave = sum/SIZE;
  *theSum = sum;
  *theAve = ave;
}
void printArray_with_pointer(const int toPrint[], int theSize){
  const int *ptoPrint = toPrint;
  const int *end = toPrint + theSize;
  while (ptoPrint < end){
    printf("%d ", *ptoPrint);
    ptoPrint++;
  }
}
