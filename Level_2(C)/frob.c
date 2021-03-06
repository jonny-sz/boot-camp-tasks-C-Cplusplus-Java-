// Ввести положительную длину последовательности чисел, затем саму последовательность.
// Вывести искаженную последовательность, полученную применением к исходным членам побитовой операции xor с числом 42.
// Каждый член вывести на отдельной строке.
// Пример ввода

// 2
// 0 42

// Пример вывода

// 42
// 0

#include <stdio.h>

int main() {
    int length;
    int member;
    
    scanf("%d", &length);
    
    for ( int i = 0; i < length; i++ ) {
        scanf("%d", &member);
        member ^= 42;
        printf("%d\n", member);
    }
    
    return 0;
}
