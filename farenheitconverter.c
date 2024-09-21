#include <stdio.h>
double toC(double);
double toF(double);
int main(void){
  double F = 32;
  double C = 0;
  printf("Celcius to Farenheit\n");
  for (int counter = 0;counter <= 100;counter = counter + 10){
    double convertF = toF(C);
    printf(" %.1f\t\t\t%.1f\n",C,convertF);
    C = C + 10;
  }
  printf("Farenheit to Celcius\n");
  for (int counter2 = 32;counter2 <= 212;counter2 = counter2 + 20){
    double convertC = toC(F);
    printf(" %.1f\t\t\t%.1f\n",F,convertC);
    F = F + 20;
  }
}
double toC(double x){
  return (x-32)*.55555555;
}
double toF(double x){
  return x*1.8+32;
}