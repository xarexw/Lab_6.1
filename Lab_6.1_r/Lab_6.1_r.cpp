#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <time.h>

using namespace std;
void Create(int* t, const int size, const int low, const int high, int i);
void Print(int* t, const int size, int i);
int Count(int* t, const int size, int i, int C);
int Sum(int* t, const int size, int i); 
void Newmas(int* t, const int size, int i);

void Create(int* t, const int size, const int low, const int high, int i) {
	t[i] = low + rand() % (high - low + 1);
	if (i < size - 1)
		Create(t, size, low, high, i + 1);
}

void Print(int* t, const int size, int i) {

	cout << setw(4) << t[i];
	if (i < size - 1)
		Print(t, size, i + 1);
	else
		cout << endl;
}

int Count(int* t, const int size, int i, int C) {
	if (t[i] % 2 == 0 && t[i] >= 0)
		C++;
	if (i < size - 1)
		return Count(t, size, i + 1, C);
	else
		return C;

}

int Sum(int* t, const int size, int i) {
	if (i < size)
		if (t[i] % 2 == 0 && t[i] >= 0)
			return t[i] + Sum(t, size, i + 1);
		else
			return Sum(t, size, i + 1);
	else
		return 0;
}

void Newmas(int* t, const int size, int i) {
	if (t[i] % 2 == 0 && t[i] >= 0)
		t[i] = 0;
	cout << setw(4) << t[i];
	if (i < size-1)
		return Newmas(t, size, i + 1);
	cout << endl;
}

int main() {

		srand((unsigned)time(NULL));
		const int n = 25;
		int t[n];

		int low = -5;
		int high = 12;

		Create(t, n, low, high, 0);
		cout << "t = ";
		Print(t, n, 0);
		cout << "Count = " << Count(t, n, 0, 0) << endl;
		cout << "S = " << Sum(t, n, 0) << endl;
		cout << "New_mas = ";
		Newmas(t, n, 0);


		system("pause");
		cin.get();
		return 0;
}

