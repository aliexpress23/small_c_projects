#include <stdio.h>

int main(void){
  printf("--------part 1--------\n");
  printf(" \n   *\n  ***\n *****\n");
  printf("------part2------\n");
  int number = 3;
  number = 17/5;
  int remainder = 2;
  remainder = 17%5;
  printf("17/5 is %d remainder %d\n", number, remainder);
  printf("--------part 3--------\n");
  int radius;
  printf("please enter the radius of the circle: \n");
  scanf("%d", &radius);
  printf("the radius is %i\n", radius);
  float pi = 3.14;
  int diameter = radius*2;
  printf("the diameter is %d\n", diameter);
  float circumference = 2*pi*radius;
  printf("the circumference is %f\n", circumference);
  float area = pi*radius*radius;
  printf("the area is %f\n",area);
  printf("----------part 4--------");
  int x = 0;
  printf("what is x? \n");
  scanf( "%d", &x);
  int y = 0;
  printf("what is y? \n");
  scanf( "%d", &y);
  int sum = x+y;
  printf("the sum of x and y is %d\n",sum);
  int product = x*y;
  printf("the product of x and y is %d\n",product);
}