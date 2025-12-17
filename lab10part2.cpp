#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* first = NULL;


void printList() {
    struct Node* ptr = first;
    while (ptr != NULL) {
        printf("(%d) -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

void addToHead(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->next = first;
    newNode->data = value;
    first = newNode;
}

int deleteFromHead() {
    int value = first->data;
    struct Node* delNode = first;
    first = first->next;
    free(delNode);
    return value;
}

int contains(int value) {
    struct Node* ptr = first;
    while (ptr != NULL) {
        if (ptr->data == value) {
            return 1;
        }
        ptr = ptr->next;
    }
    return 0;
}

void clearList() {
    while (first != NULL) {
        struct Node* delNode = first;
        first = first->next;
        free(delNode);
    }
}


// Задача 10.2.2 
int sumList() {
    int sum = 0;
    struct Node* ptr = first;
    while (ptr != NULL) {
        sum += ptr->data;
        ptr = ptr->next;
    }
    return sum;
}

// Задача 10.2.3
int countEven() {
    int count = 0;
    struct Node* ptr = first;
    while (ptr != NULL) {
        if (ptr->data % 2 == 0) {
            count++;
        }
        ptr = ptr->next;
    }
    return count;
}

// Задача 10.2.4 
void multiplyOddBy10() {
    struct Node* ptr = first;
    while (ptr != NULL) {
        if (ptr->data % 2 != 0) {
            ptr->data *= 10;
        }
        ptr = ptr->next;
    }
}

// Задача 10.2.5 
void multiplyIthBy100(int index) {
    struct Node* ptr = first;
    int i = 0;
    while (ptr != NULL && i < index) {
        ptr = ptr->next;
        i++;
    }
    if (ptr != NULL) {
        ptr->data *= 100;
    }
}

// Задача 10.2.6 
void multiplyLeftBy10(int index) {
    struct Node* ptr = first;
    int i = 0;
    while (ptr != NULL && i < index) {
        ptr->data *= 10;
        ptr = ptr->next;
        i++;
    }
}


void demoBasicFunctions() {

    printf("1. Создание пустого списка:\n");
    first = NULL;
    printList();

    printf("\n2. Добавление элементов в голову (10, 20, 30):\n");
    addToHead(10);
    printList();
    addToHead(20);
    printList();
    addToHead(30);
    printList();

    printf("\n3. Поиск элементов:\n");
    printf("contains(20) = %d\n", contains(20));
    printf("contains(50) = %d\n", contains(50));

    printf("\n4. Удаление из головы:\n");
    int x1 = deleteFromHead();
    printf("x1 = %d\n", x1);
    printList();
    int x2 = deleteFromHead();
    printf("x2 = %d\n", x2);
    printList();

    printf("\n5. Очистка списка:\n");
    clearList();
    printList();
}

void demoTasks() {
    printf("\n  Zadachi 10.2.2 - 10.2.6\n\n");

    printf("Создаем нfbsfbvsvdvavовый список:\n");
    addToHead(15);
    addToHead(8);
    addToHead(23);
    addToHead(42);
    addToHead(17);
    addToHead(6);
    printList();

    // Задача 10.2.2
    printf("\n--- Задача 10.2.2 ---\n");
    int sum = sumList();
    printf("Сумма = %d\n", sum);

    // Задача 10.2.3
    printf("\n--- Задача 10.2.3 ---\n");
    int evenCount = countEven();
    printf("Количество четных = %d\n", evenCount);

    // Задача 10.2.4
    printf("\n--- Задача 10.2.4 ---\n");
    printf("До: ");
    printList();
    multiplyOddBy10();
    printf("После: ");
    printList();

    // Задача 10.2.5
    printf("\n--- Задача 10.2.5 ---\n");
    printf("До: ");
    printList();
    multiplyIthBy100(2); 
    printf("После: ");
    printList();

    // Задача 10.2.6
    printf("\n--- Задача 10.2.6 ---\n");
    printf("До: ");
    printList();
    multiplyLeftBy10(3); 
    printf("После: ");
    printList();

    // Очистка
    printf("\nОчистка списка:\n");
    clearList();
    printList();
}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    demoBasicFunctions();
    demoTasks();


    return 0;
}