#include <stdio.h>
int main() {
int a = 555;
printf("|%d|\n", a);
printf("|%8.d|\n", a);
printf("|%-8.d|\n", a);
printf("Words:%9.d\n", 59);
printf("Letters:%7.d\n", 1004);
printf("Digits:%8.d\n",8);
double a2 = 0.1, b = 0.2;
printf("%lf ; %lf",a2 ,b);
printf("%lf + %lf = %.17lf",a2, a2, a2+b );
    return 0;
}