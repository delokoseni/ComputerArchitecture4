#include <iostream>
#include <Windows.h>
#include <cmath>
#include <ctime>
using namespace std;

int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int arr[1000], i, j, averagevalue, difference;
	srand(time(NULL));
	for (i = 0; i < 1000; i++)
		arr[i] = rand() % 100;
	averagevalue = arr[0];
	for (i = 1; i < 1000; i++)
		averagevalue += arr[i];
	averagevalue /= 1000;
	difference = abs(arr[0] - averagevalue);
	j = 0;
	for (i = 1; i < 1000; i++) {
		if (abs(arr[i] - averagevalue) < difference) {
			j = i;
			difference = abs(arr[i] - averagevalue);
		}
	}
	cout << "»ндекс элемента, наиболее близкого к среднему значению всех элементов массива: " << j << endl;
	cout << "—реднее значение всех элементов массива: "<< averagevalue << endl;
	cout << "Ёлемент, наиболее близкий к нему: " << arr[j] << endl;
	return 0;
}