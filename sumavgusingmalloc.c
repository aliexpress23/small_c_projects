#include <stdio.h>
#include <stdlib.h>
int main(void){
  int *pcounter = malloc(sizeof(int));
  double *pstorage = malloc(sizeof(double));
  double *sum = malloc(sizeof(double));
  double *avg = malloc(sizeof(double));
  *pcounter = 0;
  for (; *pcounter < 10; (*pcounter)++){
    printf("enter a value: ");
    scanf("%lf",pstorage);
    *sum += (*pstorage);
  }
  printf("you entered %d values\n",*pcounter);
  *avg = *sum / *pcounter;
  printf("the average is %.2lf", *avg);
  pcounter = 0;
  pstorage = 0;
  sum = 0;
  avg = 0;
  free(pcounter);
  free(pstorage);
  free(sum);
  free(avg);
}