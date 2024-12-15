#include <stdio.h>
int main(){
int max=-1000000;
int count = 0;
double sum = 0;
int A[6]={1,4,-9,3,9,0};
int B[6]={3, -6, 3, 2, 1, 13};
int C[6];
for (int i=0; i<6; i++){
    C[i]=A[i]+B[i];
    //printf("%d,",C[i]);
}
for(int i=0; i<6; i=i+2){
    if (A[i]>max)
        max = A[i];
}
printf("%d\n", max);
for(int i=0; i<6; i++){
    if (B[i]<0)
    count++;
}
printf("%d\n", count);
for(int i; i<6; i++){
    sum = sum + C[i];
}
printf("%lf\n",sum/6);
return 0;
}
