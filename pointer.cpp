#include <iostream>
#include <stdlib.h>
#include <time.h>

int getRandomInt(int min = 1, int max = 9) {
	return rand() % (max - min + 1) + min;
}

int* initCollection(int* collection, int size) {
	for (int iter { 0 }; iter < size; iter++) {
		collection[iter] = getRandomInt();
	}

	return std::move(collection);
}

void showCollection(int* collection, int size) {
	for (int iter { 0 }; iter < size; iter++) {
		std::cout << collection[iter] << ' ';
	}

	std::cout << '\n';
}

void swap(int& num1, int& num2) {
	int num3 = num1;
	num1 = num2;
	num2 = num3;
}

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "ru");
	srand((unsigned)time(NULL));

	int size { 10 };
	int
		*collection1 = new int[size] { 0 },
		*collection2 = new int[size] { 0 };

	/*
	// задание 1
	initCollection(collection1, size);
	std::cout << "Массив1: ";
	showCollection(collection1, size);

	for (int *iter = collection1, count = 0; iter < (collection1 + size); iter++, count++) {
		collection2[count] = *iter;
	}

	std::cout << "Массив2: ";
	showCollection(collection2, size);
	*/

	/*
	// задание 2
	initCollection(collection1, size);
	showCollection(collection1, size);

	for (int* iter = collection1, count = 1; iter < ((collection1 + size / 2)); count++, iter++) {
		swap(*iter, *(collection1 + size - count));
	}

	showCollection(collection1, size);
	*/

	/*
	// задание 3
	initCollection(collection1, size);
	showCollection(collection1, size);

	for (int* iter = collection1, count = size - 1; iter < collection1 + size; iter++, count--) {
		collection2[count] = *iter;
	}

	showCollection(collection2, size);
	*/

	return 0;
}