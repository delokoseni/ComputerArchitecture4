#include <iostream>
#include <Windows.h>
#include <cmath>
#include <ctime>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int* arr, i, j, averagevalue, difference, N = 100000;
	arr = new int[N];
	srand(time(NULL));
	for (i = 0; i < N; i++)
		arr[i] = rand() % N;
	unsigned int start_time = clock();
	averagevalue = arr[0];
	for (i = 1; i < N; i++)
		averagevalue += arr[i];
	averagevalue /= N;
	difference = abs(arr[0] - averagevalue);
	j = 0;
	for (i = 1; i < N; i++) {
		if (abs(arr[i] - averagevalue) < difference) {
			j = i;
			difference = abs(arr[i] - averagevalue);
		}
	}
	unsigned int end_time = clock();
	cout << "»ндекс элемента, наиболее близкого к среднему значению всех элементов массива: " << j << endl;
	cout << "—реднее значение всех элементов массива: "<< averagevalue << endl;
	cout << "Ёлемент, наиболее близкий к нему: " << arr[j] << endl;
	cout << "¬рем€ выполнени€ основного алгоритма программы: " << end_time - start_time << endl;
	return 0;
}