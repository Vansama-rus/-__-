#include <stdio.h>
int main(){
double t;
char i;
printf("введите температуру:\n");
scanf("%lf%c",&t, &i );
if(i == 'c' || i == 'C'){
    t=(1.8*t)+32;
    printf("%.1lf",t);
}else if(i == 'f' || i == 'F'){
    t=(5.0/9)*(t-32);
    printf("%.1lf",t);
}else {
    printf("Ошибка");
}
return 0;
}