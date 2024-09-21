#include <stdio.h>
int main(void){
  int input = 0;
  int sum = 0;
  int adder = 0;
  int counter = 0;
  while (input != -1){
    printf("enter a value (select -1 to leave the loop): ");
    scanf(" %d",&input);
    if (input == -1){
      continue;
    }
    else {
    adder = input;
    sum = sum + adder;
    counter++;}
    }
  double avg = (double)sum/counter;
  printf("the average of your numbers is: %.1f\n",avg);
  printf("------part 2--------\n");
  int num = 0;
  int num1 = 1;
  int num2 = 2;
  int num3 = 3;
  int num4 = 4;
  int num5 = 5;
  double price1 = 2.98;
  double price2 = 4.50;
  double price3 = 9.98;
  double price4 = 4.49;
  double price5 = 6.87;
  printf("Product #    Retail Price\n");
  printf("%d \t\t\t $%.2f\n",num1,price1);
  printf("%d \t\t\t $%.2f\n",num2,price2);
  printf("%d \t\t\t $%.2f\n",num3,price3);
  printf("%d \t\t\t $%.2f\n",num4,price4);
  printf("%d \t\t\t $%.2f\n",num5,price5);
  printf("input a prodct number: ");
    scanf(" %i",&num);
  switch(num){
    case 1:
    printf("you have chosen product %d price is $%.2f",num1,price1);
    break;
    case 2:
    printf("you have chosen product %d price is $%.2f",num2,price2);
    break;
    case 3:
    printf("you have chosen product %d price is $%.2f",num3,price3);
    break;
    case 4:
    printf("you have chosen product %d price is $%.2f",num4,price4);
    break;
    case 5:
    printf("you have chosen product %d price is $%.2f",num5,price5);
    break;
  }
  
}