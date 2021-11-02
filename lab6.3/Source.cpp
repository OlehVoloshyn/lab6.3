#include <iomanip>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include<iostream>
#include<ctime>
using namespace std;
void create(int*a, const int size, int i )
{
	a[i] = rand() % 100;
	if (i < size - 1)
		create(a, size, i + 1);
}
void Print(int* a, const int size, int i)
{
	cout << setw(4) << a[i];
	if (i < size - 1)
		Print(a, size, i + 1);
	else
		cout << endl;
}
int Sum(int* a, const int size, int i,int s)
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
	int n=1000;
	int *a = new int[n];
	cout << "enter array size = ";
	cin >> n; cout << endl;
	int s;
	create(a, n, 0);
	Print(a, n, 0);
	s=Sum(a, n, 0, 0);
	cout << "suma parnyh elementiv = " << s << endl;
	delete [n] a;
}




