#include <iostream>

#define SIZE_ARR 10

int get_last_index(int size);

int binary_search(int* arr, int data);

int main() {

    int arr[SIZE_ARR] = {1, 3, 5, 7, 9};

    int r1 = binary_search(arr, 3);

    std::cout << "Resultado r1: " << r1 << std::endl;

    int r2 = binary_search(arr, -1);

    std::cout << "Resultado r2: " << r2 << std::endl;

    return 0;
}

int binary_search(int* arr, int search) {

    int low = 0;
    int high = get_last_index(SIZE_ARR);


    while (low <= high) {

        int middle = (low + high) / 2; 

        int data = arr[middle];

        if (data == search) {

            return middle;
        }

        if (data < search) {

            low = middle + 1;
        } else {

            high = middle - 1;
        }
    }

    return -1;
}

int get_last_index(int size) {

    return (sizeof(int) * size) / sizeof(int) - 1;
}
