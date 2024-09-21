//Ali Kalhor - Project 1
#include <stdio.h>
#include <float.h>
void part1(void);
void part2(void);
void part3(void);
double avg(double,double,double);
double sum(double,double,double);
double product(double,double,double);
double largest(double,double,double);
double smallest(double,double,double);
int main(void){
  part1();
  part2();
  part3();
}
//part 1
void part1(void){
  int square = 1;
  int cube = 1;
  printf("Ali's Table\n");
  printf("number  square  cube\n");
  for (int counter = 1;counter <= 10;counter++){
    int square = counter*counter;
    int cube = counter*counter*counter;
    printf("%d\t\t%d\t\t%d\n",counter,square,cube);
  }
}
//part 2
void part2(void){
  printf("------part 2------\n");
  char A = 'A';
  char l = 'l';
  char i = 'i';
  printf("%c - %d\n",A,A);
  printf("%c - %d\n",l,l);
  printf("%c - %d\n",i,i);
}
//part 3
void part3(void){
  double float1 = 0;
  double float2 = 0;
  double float3 = 0;
  double sum1 = 0;
  double avg1 = 0;
  double product1 = 0;
  double largest1 = 0;
  double smallest1 = 0;
  printf("-----part 3------\n");
  printf("enter the first of three floating point numbers:");
  scanf("%lf",&float1);
  printf("enter the second of three floating point numbers:");
  scanf("%lf",&float2);
  printf("enter the third of three floating point numbers:");
  scanf("%lf",&float3);
  sum1 = sum(float1,float2,float3);
  printf("the sum is %.2lf\n",sum1);
  avg1 = avg(float1,float2,float3);
  printf("the average is %.2lf\n",avg1);
  product1 = product(float1,float2,float3);
  printf("the product is %.2lf\n",product1);
  largest1 = largest(float1,float2,float3);
  printf("the largest value is %.2lf\n",largest1);
  smallest1 = smallest(float1,float2,float3);
  printf("the smallest value is %.2lf\n",smallest1);
}
double sum(double x,double y,double z){
  return x+y+z;
}
double avg(double x,double y,double z){
  return (x+y+z)/3;
}
double product(double x,double y,double z){
  return x*y*z;
}
double largest(double x,double y,double z){
  double largest = DBL_MIN;
  double smallest = DBL_MAX;
  if (x > largest){
    largest = x;
  }
  if (y > x && y > z){
    largest = y;
  }
  if (z > y && z > x){
    largest = z;
  }
  return largest;
}
double smallest(double x,double y,double z){
  double largest = DBL_MIN;
  double smallest = DBL_MAX;
  if (x < smallest){
    smallest = x;
  }
  if (y < x && y < z){
    smallest = y;
  }
  if (z < y && z < x){
    smallest = z;
  }
  return smallest;
}