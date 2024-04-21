#include <stdio.h>

int binarySearch(int numbers[], int low, int high, int value) {
    if (low > high) {
        return -1; // Value not found
    }

    int mid = low + (high - low) / 2;

    if (numbers[mid] == value) {
        return mid; // Value found at index mid
    } else if (numbers[mid] > value) {
        return binarySearch(numbers, low, mid - 1, value); // Search left half
    } else {
        return binarySearch(numbers, mid + 1, high, value); // Search right half
    }
}

int search(int numbers[], int low, int high, int value) {
    return binarySearch(numbers, low, high, value);
}

int main() {
    int numbers[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int low = 0;
    int high = sizeof(numbers) / sizeof(numbers[0]) - 1;
    int value = 11;

    int index = search(numbers, low, high, value);

    if (index != -1) {
        printf("Value found at index: %d\n", index);
    } else {
        printf("Value not found.\n");
    }

    return 0;
}
