#include <stdio.h>
int main() {
int a;
int k;
printf("Введите целое число:");
scanf("%d",&a);
printf("введите на сколько бит сдвинуть число:\n");
scanf("%d", &k);
    for( int i = 0 ; i<k ; i++){
        a = (a<<1)|1;
    }
printf("%d\n",a);
    for (int i = sizeof(a)*8-1 ; i>=0 ; i-- ){
        printf("%d", (a>>i) & 1);
    }
printf("\n");
return 0;
}
//сдвиг налево и замена единцами