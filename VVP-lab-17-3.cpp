#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	cout << "Задача 3. \nДан массив A размера N. \nНайти минимальный элемент из его элементов с четными номерами: A2, A4, A6..." << endl;
	int N, t = 1000000000, ii rem;
	cout << "Введите значение N: "; cin >> N;
	int* arr = new int[N];
	cout << "Введите значения для каждого элемента массива:" << endl;
	for (int i = 0; i < N; i++) {
		cout << "arr[" << i << "] = "; cin >> arr[i];

	}
	cout << "Элементы с четными номерами: " << endl;
	for (int i = 0; i < N; i++) {
		if (i % 2 == 0) {
			cout << "arr[" << i << "] = " << arr[i] << endl;
			if (arr[i] < t) {
				rem = arr[i];
				t = arr[i];
				ii = i;
			}
		}

	}
	cout << "Минимальный элементс с четным номером: arr["<<ii<<"] = " << rem <<  endl;
}
