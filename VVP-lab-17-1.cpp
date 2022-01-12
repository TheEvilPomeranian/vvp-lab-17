#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	cout << "Задача 1. \nДан массив размера N и целые числа K и L (1 <= K <= L <= N).\nНайти среднее арифметическое элементов массива с номерами от K до L включительно. " << endl;
	double N = 0, j = 1, K, L, q=0, answ;
	int* arr = new int[N];
	cout << "Введите N: "; cin >> N;
	if (N >= 1) {
		for (int i = 0; i < N; i++) {
			arr[i] = j;
			j++;
			cout << "arr[" << i << "] = " << arr[i] << endl;
		}
		cout << "Введите значение K (1 <= K <= L): "; cin >> K;
		cout << "Введите значение L (K <= L <= N): "; cin >> L;
		if ((K >= 2)&&(K <= L)&&(L>=K)&&(L<=N)) {
			cout << "Элементы масиива между K и L включительно:" << endl;
			int t = K - 1;
			int z = t, z2;
			for (t = K - 1; t <= L - 1; t++) {
				z2 = t;
				arr[t] = K;
				K++;
				cout << "arr[" << t << "] = " << arr[t] << endl;
				q = q + arr[t];
			}
			z = z2 - z + 1;
			cout << "Сумма чисел в промежутке между K и L включительно: " << q << endl;
			cout << "Количество элементов в массиве межу K и L включительно: " << z << endl;
			answ = q / z;
			cout << "Среднее арифметическое: " << answ << endl;
		}
		else {
			cout << "Введены неверные значения!" << endl;
		
		}
	}
	else {
		cout << "Введено неверное значение для N!" << endl;
	}
}
