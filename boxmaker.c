#include <stdio.h>
int square(int);
void char_int(char,int);
int main(void){
  int input = 0;
  char cha = 0;
  printf("give me a size: ");
  scanf(" %d",&input);
  square(input);
  printf("-------part 2--------\n");
  printf("give me a character and a size: ");
  scanf(" %c %d",&cha,&input);
  char_int(cha,input);
}
int square(int x){
  int counter = 1;
  int counter2 = 0;
  while (counter <= x){
    for (counter2 = 0;counter2 <= x;counter2++){
      if (counter2 == x){
        printf("\n");
      }
      else {
        printf("*");
      }
    }
    counter++;
  }
}
void char_int(char x,int y){
  int counter = 1;
  int counter2 = 0;
  while (counter <= y){
    for (counter2 = 0;counter2 <= y;counter2++){
      if (counter2 == y){
        printf("\n");
      }
      else {
        printf("%c",x);
      }
    }
    counter++;
  }
}