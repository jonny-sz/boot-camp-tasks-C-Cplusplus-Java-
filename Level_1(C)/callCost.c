// Считать с клавиатуры 2 целых числа - номер телефона и количество минут.
// Стоимость минуты разговора составляет 1$ за звонок на городской номер и 40$ за звонок на короткий номер. За звонок по номерам специальных служб плата не взимается. В случае неопределенности вывести -1.
// Пример ввода

// 1488666 10

// Пример вывода

// 10$

// Пояснение

// Коротким номером считается любой трехзначный номер.
// Городским номером считается любой семизначный номер.
// Номера телефонов не могут начинаться с ноля.
// Номера спецслужб: 101, 102, 103, 104, 112.

#include <stdio.h>

int main() {
    int phone, minutes;
    
    scanf("%d %d", &phone, &minutes);
    
    if ( phone > 104 && phone <= 999 && phone != 112 ) {
        printf("%d$\n", 40*minutes);
    } else if ( phone > 1000000 && phone < 9999999 ) {
        printf("%d$\n", minutes);
    } else if ( phone == 101 || phone == 102 || phone == 103 || phone == 104 || phone == 112 ) {
        printf("0$\n");
    } else {
        printf("-1\n");
    }
    
    return 0;
}
