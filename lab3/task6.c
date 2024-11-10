#include <stdio.h>
int main(){
    int s=0, n, a;
    scanf("%d",&a);
    if (a<2) puts("0");
    else{
for ( int n=2; n<a; n++)
      if (a%n==0) s++;
if (s==0) puts("1");
else puts("0");}
    return 0;
}