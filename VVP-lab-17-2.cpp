#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	cout << "Задача 2. \nДан целочисленный массив размера N, не содержащий одинаковых чисел. \nПроверить, образуют ли его элементы арифметическую прогрессию. \nЕсли образуют, то вывести разность прогрессии, если нет — вывести 0." << endl;
	int N, t = 0, d, d2, rem, rem2;
	cout << "Введите значение N: "; cin >> N;
	int* arr = new int[N];
	cout << "Введите значения для каждого элемента массива, избегая повтора:" << endl;
	for (int i = 0; i < N; i++) {
		cout << "arr[" << i << "] = "; cin >> arr[i];
		if (t != 0) {
			d = arr[1] - arr[0];
			d2 = arr[i] - t;
			t = arr[i];
			//cout << "D = " << d2 << endl;
			if (d2 != d) {
				rem = d2;
			}
		}
		else {
			t = arr[i];
		}
	}
	if (rem != d2) {
		cout << "Элементы образуют арифметическую прогрессию с шагом: " << d << endl;
		//cout << d << endl;

	}
	else {
		cout << "Элементы не образуют арифметическую прогрессию" << endl;
		//cout << 0 << endl;
	}
}
