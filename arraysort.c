#include <stdio.h>
#include <limits.h>
#define SIZE 20
int sumArray(const int[], size_t);
void sortArray(int[], size_t);
int findLargest(const int[], size_t);
void printArray(const int[], size_t);
int main(void){
int theArray[SIZE] = {5, 8, 3, 9, 14, 2, 5, 1, 15, 0,
5, 7, 2, 8, 11, 10, 9, 2, 1, 7};
// Print array
puts("\n--------------------------------------\n");
puts("The original array: ");
printArray(theArray, SIZE);
puts("\n--------------------------------------\n");
// Sum the array
int sum = sumArray(theArray, SIZE);
printf("The sum of all elements in the array is: %i", sum);
puts("\n\n--------------------------------------\n");
// Find largest
int largest = findLargest(theArray, SIZE);
printf("The largest number in the array is: %i", largest);
puts("\n\n--------------------------------------\n");
// Sort and print the array
puts("Here is the array sorted:");
sortArray(theArray, SIZE);
printArray(theArray, SIZE);
puts("\n--------------------------------------\n");
}
int sumArray(const int toSum[], size_t theSize){
  int sum = 0;
  for (int i = 0; i < SIZE;i++){
    sum += toSum[i];
  }
  return sum;
}
int findLargest(const int toFind[], size_t theSize){
  int max = INT_MIN;
  int largest = 0;
  for (int i = 1; i < SIZE; i++){
    if (toFind[i-1] > max && toFind[i-1] > largest){
      largest = toFind[i-1];
    }
    else{
      continue;
    }
  }
  return largest;
}
void sortArray(int toSort[], size_t theSize){
  for (int i = 0; i < SIZE;i++){
    for (int i = 0; i < SIZE - 1;i++){
      if (toSort[i] > toSort[i+1]){
        int hold = toSort[i];
        toSort[i] = toSort[i+1];
        toSort[i+1] = hold;
      }
    }
  }
}
void printArray(const int toPrint[], size_t theSize){
printf("\n%s%9s\t|\t%s%9s\n", "Element", "Value", "Element", "Value");
size_t halfSize = theSize / 2;
for (size_t j = 0; j < halfSize; ++j) {
printf("%7lu%9d |", j, toPrint[j]);
printf("%10lu%9d\n", (j + halfSize), toPrint[j+halfSize]);
}
}
