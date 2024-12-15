#include <stdio.h>

int is_perfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num && num != 0; // Возвращаем 1, если число совершенное
}

int main() {
    int X[] = {1, 2, 3, 6, 10, 15, 21, 28, 4}; // Пример массива
    int n = sizeof(X) / sizeof(X[0]);
    int max_odd = 0;
    int min_even = __INT_MAX__;
    int removed_count = 0;

    // Поиск максимального нечетного и минимального четного положительных чисел
    for (int i = 0; i < n; i++) {
        if (X[i] > 0) {
            if (X[i] % 2 != 0 && X[i] > max_odd) {
                max_odd = X[i];
            }
            if (X[i] % 2 == 0 && X[i] < min_even) {
                min_even = X[i];
            }
        }
    }

    // Удаление совершенных чисел из массива
    for (int i = 0; i < n; i++) {
        if (is_perfect(X[i])) {
            removed_count++;
            for (int j = i; j < n - 1; j++) {
                X[j] = X[j + 1];
            }
             n--; // Уменьшаем размер массива
             i--; // Проверяем текущую позицию снова
        }
    }
    // for(int i=0; i<9; i++){
    // printf("%d ", X[i]);}

    // Вывод результатов
    printf("Максимальный положительный нечетный элемент: %d\n", max_odd);
    printf("Минимальный положительный четный элемент: %d\n", min_even);
    printf("Количество удаленных совершенных чисел: %d\n", removed_count);

    return 0;
}
