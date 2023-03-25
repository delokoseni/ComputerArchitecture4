#include <iostream>
#include <Windows.h>
#include <cmath>
#include <omp.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int* arr, i, j, averagevalue, difference, N = 900000;
	arr = new int[N];
	for (i = 0; i < N; i++)
		arr[i] = rand() % N;
	double start_time, end_time;
	start_time = omp_get_wtime();
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
	end_time = omp_get_wtime();
	cout << "������ ��������, �������� �������� � �������� �������� ���� ��������� �������: " << j << endl;
	cout << "������� �������� ���� ��������� �������: " << averagevalue << endl;
	cout << "�������, �������� ������� � ����: " << arr[j] << endl;
	cout << "����� ���������� ��������� ��������� ���������: " << end_time - start_time << endl;
	return 0;
}