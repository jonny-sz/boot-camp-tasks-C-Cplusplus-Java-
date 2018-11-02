// Считать с клавиатуры целое положительное число.
// Вывести в строку все числа, кратные 3, от нуля до указанного числа включительно.
// Пример ввода

// 17

// Пример вывода

// 0 3 6 9 12 15

#include <stdio.h>

int main() {
    int max;
    
    scanf("%d", &max);
    max -= max % 3;
    
    for ( int i = 0; i < max; i += 3 ) {
        printf("%d ", i);
    }
    printf("%d\n", max);
    
    return 0;
}