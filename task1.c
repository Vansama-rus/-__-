#include <stdio.h>

int main() {
    int a;
    printf("Введите целое число: ");
    scanf("%d", &a);
    int last_bit = a & 1;
    a >>= 1;
    int flag = 1; 
    while (a > 0) {
        int current_bit = a & 1; 
        if (current_bit == last_bit) {
            flag = 0; 
            break;
        }
        last_bit = current_bit;
        a >>= 1; 
    }

    // Выводим результат проверки
    if (flag) {
        printf("Биты чередуются.\n");
    } else {
        printf("Биты не чередуются.\n");
    }

    return 0;
}
    // for (int i = sizeof(dec)*8 - 1; i >= 0 ; i--) {
    //     printf("%d", (dec >> i) & 1);
