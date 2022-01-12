#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "ru");
	cout << "Задача 5. \nДан целочисленный массив размера N, содержащий ровно два одинаковых элемента. \nНайти номера одинаковых элементов и вывести эти номера в порядке возрастания." << endl;
	int N, rem, P1, P2;
	cout << "Введите значение N: "; cin >> N;
	int* arr = new int[N];
	cout << "Введите значения для каждого элемента массива, в соответствии с условием: " << endl;
	for (int i = 0; i < N; i++) {
		cout << "arr[" << i << "] = "; cin >> arr[i];
	}
	for (int i = 0; i < N; i++) {
		rem = arr[i];
		for (int j = i + 1; j < N; j++) {
			if (rem == arr[j]) {
				P1 = i;
				P2 = j;
			}
		}
	}
	cout << "Ответ: arr[" << P1 << "], arr[" << P2 << "]" << endl;
}
