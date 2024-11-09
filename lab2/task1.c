#include <stdio.h>

int main(void) {
int year;
printf("введите год:");
scanf("%d",&year);
if (year%400==0){
  printf("YES");
} else if(year%4==0){
  printf("YES");
} else if(year%100==0){
  printf("NO");
}
  else{
  printf("NO");
}

  return 0;
}