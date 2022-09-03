#include <iostream>
using namespace std;

double mean(int num1, int num2, int num3) {
	double av = (static_cast<double>(num1) + num2 + num3) / 3;	// ��� ������� ��������� ��� ��������� �������, 
	return av;													// � �� ������� ������ ��� ��� �� � �������� �� �����
}

int max(int A, int B, int C) {	
	cout << "��� ������ - int.\n";
	return max(A, max(B, C));
}

double max(double A, double B, double C) {	
	cout << "��� ������ - double.\n";
	return max(A, max(B, C));
}

float max(float A, float B, float C) {	
	cout << "��� ������ - float.\n";
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

	// ������� 1
	cout << "������� 1.\n������� 3 �����: ";
	cin >> n >> m >> v;
	cout << "������� �������������� ���� ����� =  " << mean(n, m, v) << "\n\n";

	// ������� 2
	cout << "������� 2.\n";	

	int u = 5, i = 7, o = 6;
	cout << "���������� ������ �������� " << max(u, i, o) << endl;

	float a = 1.3, b = 6.4, c = 4.3;
	cout << "���������� ������ �������� " << max(a, b, c) << endl;

	double d = 3.14, e = 2.71, f = 4.76;
	cout << "���������� ������ �������� " << max(d, e, f) << "\n\n";

	// ������� 3
	cout << "������� 3.\n";
	const int size = 5;
	double arr[size] = { 3.1, 4, -2.2, 8, -4 };
	cout << "����������� ������:\n";
	show_arr(arr, size);
	cout << "����������� �������� � �������:\n";
	min_arr(arr, size);

	return 0;
}