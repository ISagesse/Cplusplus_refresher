#include <iostream>

// return a function with multiple values using a pointer

using namespace std;

int get_min(int numbers[], int size) {
	int min = numbers[0];
	for (int i = 1; i < size; i++) {
		if (numbers[i] < min) {
			min = numbers[i];
		}
	}
	return min;
}

int get_max(int numbers[], int size) {
	int max = numbers[0];
	for (int i = 1; i < size; i++) {
		if (numbers[i] > max){
			max = numbers[i];
		}
	}
	return max;
}

void get_min_and_max(int numbers[], int size, int* min, int* max) {
	for (int i = 1; i < size; i++) {
		if (numbers[i] > *max) {
			*max = numbers[i];
		}
		if (numbers[i] < *min) {
			*min = numbers[i];
		}
	}
}

int main() {

	int numbers[] = { 3, 6, 2, 1, -5, 19 };
	//cout << "The min is " << get_min(numbers, 6) << endl;
	//cout << "The max is " << get_max(numbers, 6) << endl;
	int min = numbers[0];
	int max = numbers[0];
	get_min_and_max(numbers, 6, &min, &max);
	cout << "The min value is " << min << endl;
	cout << "The max value is " << max << endl;

	return 0;
}