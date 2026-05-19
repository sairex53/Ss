#include <stdio.h>
#include <stdlib.h>

// Эту функцию мы должны запустить с помощью эксплойта
void win() {
    puts("SECRET ACCESS GRANTED. SHELL OPENED.");
    system("/bin/sh");
}

void process_input() {
    char buffer[64];
    puts("Enter password:");
    gets(buffer); // Функция gets() вызывает УЯЗВИМОСТЬ: она не проверяет длину ввода
}

int main() {
    process_input();
    return 0;
}
