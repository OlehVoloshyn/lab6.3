#include <iomanip>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include<iostream>
#include<ctime>
using namespace std;
template <typename T>
void create(T* a, const T size, T i)
{
	a[i] = rand() % 100;
	if (i < size - 1)
		create(a, size, i + 1);
}
template <typename T>
void Print(T* a, const T size, T i)
{
	cout << setw(4) << a[i];
	if (i < size - 1)
		Print(a, size, i + 1);
	else
		cout << endl;
}
template <typename T>
const T& Sum(const T* a, const T size, T i, T s)
{
	if (a[i] % 2 == 0)
		s += a[i];
	if (i < size - 1)
		Sum(a, size, i + 1, s);
	else
		return s;
}
int main()
{
	srand((unsigned)time(NULL));
	const int n = 10;
	int a[n];
	int s;
	create(a, n, 0);
	Print(a, n, 0);
	s = Sum(a, n, 0, 0);

	cout << "suma parnyh elementiv = " << s << endl;
}