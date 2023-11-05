#include <iostream>
#include <cmath>
#include <random>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

void printArray(int* arr, int size);
void generateArray(int* arr, int size, int min, int max);
int countElements(int* arr, int size);
int sumElements(int* arr, int size);
void replaceElements(int* arr, int size);

int main() {
	const int arrSize = 22;
	int a[arrSize];

	generateArray(a, arrSize, -10, 35);

	cout << "Original array: ";
	printArray(a, arrSize);


	cout << "Number of elemnts: " << countElements(a, arrSize) << endl;

	cout << "Sum of elements: " << sumElements(a, arrSize) << endl;

	replaceElements(a, arrSize);

	cout << "Modified:       ";
	printArray(a, arrSize);

	return 0;
}

void generateArray(int* arr, int size, int min, int max) {
	srand(unsigned(time(NULL)));
	for (int i = 0; i < size; i++) {
		arr[i] = min + rand() % (max - min + 1);
	}
}
void printArray(int* array, int size) {
	for (int i = 0; i < size; i++) {
		cout << setw(4) << array[i] << " ";
	}
	cout << endl;
}

int sumElements(int* arr, int size) {

	int sum = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] > 0 || (arr[i] % 3 != 0))
		{
			sum += arr[i];
		};
	}
	return sum;
}

int countElements(int* arr, int size) {
	int count = 0;
	for (int k = 0; k < size; k++) {
		if (arr[k] > 0 || (arr[k] % 3 != 0)) {
			count++;
		};
	}
	return count;
}

void replaceElements(int* arr, int size) {
	for (int j = 0; j < size; j++) {
		if (arr[j] > 0 || (arr[j] % 3 != 0)) {
			arr[j] = 0;
		}
	}
}