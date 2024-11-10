#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int n = 2;
    if (a<2){
        puts("0");
    }//натуральные числа больше 1
if (n==a) puts("1");//если a=2
for ( int n=2; n<a; n++)
      if (a%n==0){
        puts("0") ;break;
      }
else if (a==n+1)
puts("1");

    return 0;
}