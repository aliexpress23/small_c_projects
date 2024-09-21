#include <stdio.h>
#include <limits.h>
int main(void){
  int user_input = 0;
  int largest = INT_MIN;
  int smallest = INT_MAX;
  int largest2 = INT_MIN;
  int smallest2 = INT_MAX;
  for(int counter = 1;counter <= 10;counter++){
    printf("enter %d number of 10 numbers: ",counter);
    scanf("%d", &user_input);
    if (user_input > largest){
      largest2 = largest;
      largest = user_input;
      
    }
    else if (user_input < largest && user_input > largest2){
      largest2 = user_input;
    }
    else if (user_input < smallest){
      smallest2 = smallest;
      smallest = user_input;
    }
    else if (user_input > smallest && user_input < smallest2){
      smallest2 = user_input;
    }
  }
  printf("the largest number is %d\n",largest);
  printf("the second largest number is %d\n",largest2);
  printf("the smallest number is %d\n",smallest);
  printf("the second smallest number is %d\n",smallest2);
  printf("---------part 2----------\n");
  int value = 1;
  int answer = 1;
  int product = 1;
  printf("enter a number 1-10 to find its factorial: ");
  scanf("%d",&answer);
  product = answer-1;
  while (product > 1){
    answer = product*answer;
    --product;

    
    
  }
  printf("%d", answer);
}