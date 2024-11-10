// #include <stdio.h>
// int main(){
// int a=0, n;
// int flag=0;
// printf("введите размер квадрата");
// scanf("%d",&n);

// while(a<n*n){
//     a++;
//     flag++;
//     printf(" %d",a);
//     if (flag==n){
//     printf("\n");
//     flag=0;
//     }
// }
// return 0;
// }
#include <stdio.h>

int main() {
    int N;

    printf("Введите размер N: ");
    scanf("%d", &N);
     int count = 1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%3.d ", count);
            count++; 
        }
        printf("\n"); 
    }

    return 0;
}