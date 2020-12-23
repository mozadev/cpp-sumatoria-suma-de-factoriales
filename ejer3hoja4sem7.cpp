#include <iostream>
#include <conio.h>
using namespace std;

int ingresen()
{
	int n;
	cout << "ingrese n"; cin >> n;
	while (n <= 0)
	{
		cout << "ingrese n:"; cin >> n;
	}
	return n;
}

float factorial(int b)
{
	float res = 1;
	int i = 1;
	while (i <= b)//mientrs que
	{
		res = res*i;
		i++;
	}
	return res;
}



int main()
{
	int n, suma = 0;
	n = ingresen();
	for (i = 1, i <= n, i++)
		suma = suma + factorial(i);

	cout << "la suma de los facoriales de" << n << "numeros es:" << suma;

	_getch();
}
