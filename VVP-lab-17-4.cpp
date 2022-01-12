#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	cout << "Задача 4. \nДан массив размера N. \nНайти номер его последнего локального максимума \n(локальный максимум — это элемент, который больше любого из своих соседей)." << endl;
	int N, i;
	cout << "Введите значение N: "; cin >> N;
	int* arr = new int[N];
	cout << "Введите значения для каждого элемента массива:" << endl;
	int rem = 0;
	for (i = 0; i < N; i++) {
		cout << "arr[" << i << "] = "; cin >> arr[i];
	}
	for (i = 0; i < N; i++) {
		if ((arr[i] > arr[i - 1]) && (arr[i]) > arr[i + 1]) {
			rem = arr[i];
			cout << "Локальный максимум: " << rem << endl;
			
		}
	}

		cout << "Последний локальный максимум: " << rem << endl;
	
}
