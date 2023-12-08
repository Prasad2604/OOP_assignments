#include <iostream>

template <typename T>
void selectionSort(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            std::swap(arr[i], arr[minIndex]);
        }
    }
}

template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int intArraySize, floatArraySize;

    std::cout << "Enter the size of the integer array: ";
    std::cin >> intArraySize;
    int* intArray = new int[intArraySize];
   
    std::cout << "Enter " << intArraySize << " integer elements: ";
    for (int i = 0; i < intArraySize; i++) {
        std::cin >> intArray[i];
    }

    std::cout << "Enter the size of the float array: ";
    std::cin >> floatArraySize;
    float* floatArray = new float[floatArraySize];
   
    std::cout << "Enter " << floatArraySize << " float elements: ";
    for (int i = 0; i < floatArraySize; i++) {
        std::cin >> floatArray[i];
    }

    std::cout << "Original Integer Array: ";
    printArray(intArray, intArraySize);
    selectionSort(intArray, intArraySize);
    std::cout << "Sorted Integer Array: ";
    printArray(intArray, intArraySize);

    std::cout << "Original Float Array: ";
    printArray(floatArray, floatArraySize);
    selectionSort(floatArray, floatArraySize);
    std::cout << "Sorted Float Array: ";
    printArray(floatArray, floatArraySize);

    delete[] intArray;
    delete[] floatArray;

    return 0;
}
