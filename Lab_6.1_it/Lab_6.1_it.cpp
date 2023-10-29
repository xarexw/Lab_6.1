#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <time.h>

using namespace std;
void Create(int* t, const int size, const int low, const int high);
void Print(int* t, const int size);
int Count(int* t, const int size);
int Sum(int* t, const int size);
void Newmas(int* t, const int size);
//void Print_new(int* t, const int size);

void Create(int* t, const int size, const int low, const int high) {
	for (int i = 0; i < size; i++)
		t[i] = low + rand() % (high - low + 1);
}
void Print(int* t, const int size) {
	for (int i = 0; i < size; i++)
		cout << setw(4) << t[i];
	cout << endl;
}

int Count(int* t, const int size) {
	int C = 0;
	for (int i = 0; i < size; i++) {
		if (t[i] % 2 == 0 && t[i] >= 0)
			C++;
	}
	return C;
}

int Sum(int* t, const int size) {
	int S = 0;
	for (int i = 0; i < size; i++) {
		if (t[i] % 2 == 0 && t[i] >= 0)
			S += t[i];
	}
	return S;
}

void Newmas(int* t, const int size) {
	for (int i = 0; i < size; i++) {
		if (t[i] % 2 == 0 && t[i] >= 0)
			t[i] = 0;
		cout << setw(4) << t[i];
	}
	cout << endl;
}

//void Print_new(int* t, const int size) {
//	const int n = 25;
//	for (int i = 0; i < size; i++)
//		cout << setw(4) << t[i];
//	cout << endl;
//}

int main() {

	srand((unsigned)time(NULL));
	const int n = 25;
	int t[n];

	int low = -5;
	int high = 12;

	Create(t, n, low, high);
	cout << "t = ";
	Print(t, n);
	cout << "Count = " << Count(t, n) << endl;
	cout << "S = " << Sum(t, n) << endl;
	cout << "New_mas = ";
	Newmas(t, n);


	system("pause");
	cin.get();
	return 0;
}

//#include <iostream>
//#include <iomanip>
//#include <time.h>
//using namespace std;
//void Create(int* a, const int size, const int Low, const int High)
//{
//	for (int i = 0; i < size; i++)
//		a[i] = Low + rand() % (High - Low + 1);
//}
//void Print(int* a, const int size)
//{
//	for (int i = 0; i < size; i++)
//		cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
//	cout << endl;
//}
//int Count(int* a, const int size) {
//	int C = 0;
//	for (int i = 0; i < size; i++) {
//		if (i >= 0)
//			C++;
//
//	}
//	return C;
//}
//int Sum(int* a, const int size)
//{
//	int S = 0;
//	for (int i = 0; i < size; i++) {
//		if (i >= 0)
//			S += a[i];
//	}
//	return S;
//}
//int main()
//{
//	srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел
//	const int n = 5;
//	int a[n];
//	int Low = -10;
//	int High = 10;
//	Create(a, n, Low, High);
//	Print(a, n);
//	cout << "S = " << Sum(a, n) << endl;
//	cout << "C = " << Count(a, n) << endl;
//
//	system("pause"); 
//	return 0;
//}