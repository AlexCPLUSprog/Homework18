#include <iostream>
using namespace std;

double mean(int num1, int num2, int num3) {
	double av = (static_cast<double>(num1) + num2 + num3) / 3;	// эта надпись появилась как возможное решение, 
	return av;													// я не понимаю почему без нее он с остатком не делил
}

int max(int A, int B, int C) {	
	cout << "Тип данных - int.\n";
	return max(A, max(B, C));
}

double max(double A, double B, double C) {	
	cout << "Тип данных - double.\n";
	return max(A, max(B, C));
}

float max(float A, float B, float C) {	
	cout << "Тип данных - float.\n";
	return max(A, max(B, C));
}

template <typename T>
void show_arr(T arr[], const int lenght) {
	cout << "[";
	for (int i = 0; i < lenght; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";
}

template <typename T>
void min_arr(T arr[], const int lenght) {
	double k = arr[0];
	for (int i = 0; i < lenght; i++) {
		if (arr[i] < k)
			k = arr[i];			
	}
	cout << k;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m, v;

	// Задание 1
	cout << "Задание 1.\nВведите 3 числа: ";
	cin >> n >> m >> v;
	cout << "Среднее арифметическое трех чисел =  " << mean(n, m, v) << "\n\n";

	// Задание 2
	cout << "Задание 2.\n";	

	int u = 5, i = 7, o = 6;
	cout << "Наибольшим числом является " << max(u, i, o) << endl;

	float a = 1.3, b = 6.4, c = 4.3;
	cout << "Наибольшим числом является " << max(a, b, c) << endl;

	double d = 3.14, e = 2.71, f = 4.76;
	cout << "Наибольшим числом является " << max(d, e, f) << "\n\n";

	// Задание 3
	cout << "Задание 3.\n";
	const int size = 5;
	double arr[size] = { 3.1, 4, -2.2, 8, -4 };
	cout << "Изначальный массив:\n";
	show_arr(arr, size);
	cout << "Минимальное значение в массиве:\n";
	min_arr(arr, size);

	return 0;
}