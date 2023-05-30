#include <stdio.h>//оголошення змінних
int main() {
    int numbers[5];
    int i;
    int sum = 0;//оголошення змінних
    printf("Введіть п'ять цілих додатних чисел:\n");
    for (i = 0; i < 5; i++) {
        int input;
        if (scanf("%d", &input) != 1 || input <= 0) {
            printf("Некоректний ввід. Будь ласка, спробуйте ще раз.\n");
            return 1; // Повертаємо код помилки
        }
        numbers[i] = input;
        sum += input;
    }
    // Обчислення середнього арифметичного
    double average = (double)sum / 5;
    // Виведення середнього арифметичного
    printf("Середнє арифметичне введених чисел: %f\n", average);
    return 0;
}