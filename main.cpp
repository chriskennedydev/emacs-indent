#include <iostream>
#include <limits.h>

int find_max(int numbers[], int length) {
    int max = 0;

    for (int i = 0; i < length; i++) {
	if (numbers[i] > max) {
	    max = numbers[i];
	}
    }

    return max;
}

int find_min(int numbers[], int length) {
    int min = INT_MAX;

    for (int i = 0; i < length; i++) {
	if (numbers[i] < min) {
	    min = numbers[i];
	}
    }

    return min;
}

int main() {
    int numbers[] = { 2, 53, 18, 292, 340, 1, 83, 29 };
    int numbers_length = sizeof(numbers) / sizeof(int);

    int max = find_max(numbers, numbers_length);
    int min = find_min(numbers, numbers_length);

    std::cout << "The largest number is " << max << " and the smallest is " << min << std::endl;
}
