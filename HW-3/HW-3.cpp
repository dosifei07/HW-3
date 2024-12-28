#include <iostream>
using namespace std;

void PrintArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}



void CopyArray(int* source, int* destination, int size) {
    for (int i = 0; i < size; i++) {
        *(destination + i) = *(source + i);
    }
}


void ReverseArray(int* arr, int size) {
    int* start = arr;
    int* end = arr + size - 1;

    while (start < end) {
        int temp = *start;

        *start = *end;

        *end = temp;

        start++;

        end--;
    }
}


void CopyArrayReversed(int* source, int* destination, int size) {
    int* sourceStart = source;
    int* destStart = destination;

    for (int i = 0; i < size; i++) {
        *(destStart + size - 1 - i) = *(sourceStart + i);
    }
}

int main() {

    int sourceArray[5] = { 1, 2, 3, 4, 5 };
    int destinationArray[5];
    int reversedArray[5];

    cout << "Завдання 1: Копіювання масиву" << endl;
    cout << "Вихідний масив: ";
    PrintArray(sourceArray, 5);

    CopyArray(sourceArray, destinationArray, 5);

    cout << "Скопійований масив: ";
    PrintArray(destinationArray, 5);

    cout << "\nЗавдання 2: Зміна порядку елементів" << endl;
    cout << "Вихідний масив: ";
    PrintArray(sourceArray, 5);

    ReverseArray(sourceArray, 5);

    cout << "Масив у зворотному порядку: ";
    PrintArray(sourceArray, 5);

    cout << "\nЗавдання 3: Копіювання масиву у зворотному порядку" << endl;
    int originalArray[5] = { 1, 2, 3, 4, 5 };

    cout << "Вихідний масив: ";
    PrintArray(originalArray, 5);

    CopyArrayReversed(originalArray, reversedArray, 5);

    cout << "Скопійований масив у зворотному порядку: ";
    PrintArray(reversedArray, 5);

    return 0;
}