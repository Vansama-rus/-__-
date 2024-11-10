#include <stdio.h>
int main(){
    char a = 'A';
    int space = 32;
for(int i=5 ; i>0 ; i=i-1){
    for(int j=0 ; j<i ; j++){
printf("%c", a);
    }
printf("\n");
a = a+1;
for(int y = 0; y<6-i ; y++)
printf("%c",space);
}
    return 0;
}