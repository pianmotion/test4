//#include <stdio.h>
//#include <stdlib.h>
//#include <Windows.h>
//
//#define MAX_SIZE 100
//
//void task_10_1_1_1() {
//    printf("===Задача 10.1.1.1===\n");
//
//    int N;
//    printf("Введите количество элементов: ");
//    scanf_s("%d", &N);
//
//    if (N > MAX_SIZE) {
//        printf("те сказали не боfbsfsльше ста вводить\n");
//        return;
//    }
//
//    int arr[MAX_SIZE];
//
//    printf("Введите элементы массива: ");
//    for (int i = 0; i < N; i++) {
//        scanf_s("%d", &arr[i]);
//    }
//
//    printf("Массив: ");
//    for (int i = 0; i < N; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    for (int i = 0; i < N - 1; i++) {
//        for (int j = 0; j < N - i - 1; j++) {
//            if (arr[j] > arr[j + 1]) {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//
//    printf("Отсортированный массив: ");
//    for (int i = 0; i < N; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n\n");
//}
//
//// Задача 10.1.1.2
//void task_10_1_1_2() {
//    printf("===Задача 10.1.1.2===\n");
//
//    int N;
//    printf("Введите количество элементов: ");
//    scanf_s("%d", &N);
//
//    if (N > MAX_SIZE) {
//        printf("тебе сказали не больше 100 вводить ало\n");
//        return;
//    }
//
//    int* arr = (int*)malloc(N * sizeof(int));
//
//    printf("Введите элементы массива: ");
//    for (int i = 0; i < N; i++) {
//        scanf_s("%d", &arr[i]);
//    }
//
//    printf("Введенный массив: ");
//    for (int i = 0; i < N; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    // Сортировка пузырьком
//    for (int i = 0; i < N - 1; i++) {
//        for (int j = 0; j < N - i - 1; j++) {
//            if (arr[j] > arr[j + 1]) {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//
//    printf("Отсортированный массив: ");
//    for (int i = 0; i < N; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    free(arr);
//    printf("\n");
//}
//
//// Задача 10.1.2 - Четные элементы
//void task_10_1_2() {
//    printf("=== Задача 10.1.2 ===\n");
//
//    int N;
//    printf("Введите количество элементов: ");
//    scanf_s("%d", &N);
//
//    int* arr = (int*)malloc(N * sizeof(int));
//
//    printf("Введите элементы массива: ");
//    for (int i = 0; i < N; i++) {
//        scanf_s("%d", &arr[i]);
//    }
//
//    // Подсчет четных элементов
//    int even_count = 0;
//    for (int i = 0; i < N; i++) {
//        if (arr[i] % 2 == 0) {
//            even_count++;
//        }
//    }
//
//    // Создание массива с четными элементами
//    int* even_arr = (int*)malloc(even_count * sizeof(int));
//    int index = 0;
//    for (int i = 0; i < N; i++) {
//        if (arr[i] % 2 == 0) {
//            even_arr[index++] = arr[i];
//        }
//    }
//
//    printf("Первый массив: ");
//    for (int i = 0; i < N; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    printf("Второй массив (четные): ");
//    for (int i = 0; i < even_count; i++) {
//        printf("%d ", even_arr[i]);
//    }
//    printf("\n");
//
//    free(arr);
//    free(even_arr);
//    printf("\n");
//}
//
//// Задача 10.1.3
//void task_10_1_3() {
//    printf("===Задача 10.1.3===\n");
//
//    int N;
//    printf("Введите количество элементов: ");
//    scanf_s("%d", &N);
//
//    int* arr = (int*)malloc(N * sizeof(int));
//
//    printf("Введите элементы массива: ");
//    for (int i = 0; i < N; i++) {
//        scanf_s("%d", &arr[i]);
//    }
//
//    int firstEvenIndex = -1, lastEvenIndex = -1;
//
//    //первый чётный элемент
//    for (int i = 0; i < N; i++) {
//        if (arr[i] % 2 == 0) {
//            firstEvenIndex = i;
//            break;
//        }
//    }
//
//    //последний чётный элемент
//    for (int i = N - 1; i >= 0; i--) {
//        if (arr[i] % 2 == 0) {
//            lastEvenIndex = i;
//            break;
//        }
//    }
//
//    int size = 0;
//    int* arr2 = NULL;
//
//    if (firstEvenIndex != -1 && lastEvenIndex != -1 && firstEvenIndex < lastEvenIndex) {
//        size = lastEvenIndex - firstEvenIndex - 1;
//        if (size > 0) {
//            arr2 = (int*)malloc(size * sizeof(int));
//            for (int i = 0; i < size; i++) {
//                arr2[i] = arr[firstEvenIndex + 1 + i];
//            }
//        }
//    }
//
//    printf("Первый массив: ");
//    for (int i = 0; i < N; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    printf("Второй массив: ");
//    if (size > 0 && arr2 != NULL) {
//        for (int i = 0; i < size; i++) {
//            printf("%d ", arr2[i]);
//        }
//    }
//    else {
//        printf("(нет элементов)");
//    }
//    printf("\n");
//
//    free(arr);
//    if (arr2 != NULL) free(arr2);
//    printf("\n");
//}
//
//int main() {
//
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//
//    task_10_1_1_1();
//    task_10_1_1_2();
//    task_10_1_2();
//    task_10_1_3();
//
//    return 0;
//}