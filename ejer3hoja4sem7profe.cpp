/* Realice una aplicación en C++ que solicite el ingreso de un 
numero entero positivo (n) y calcule la sumatoria de los n
primeros términos de la siguiente sumatoria:  
?? = 1!+2!+3!+4!+?…………………..+??! 
*/



#include<iostream>
#include<conio.h>

using namespace std;



int ingresenumero()
{
	int n;
	cout << "ingrese numero"; cin >> n;
	while (n<=0)
	{
		cout << "ingrese numero"; cin >> n;
	}
	return n;
}

float factorial(int n)
{
	
	float resu=1;
	for (int i = 1; i <= n; i++)
		resu = resu*i;
	return resu;
}

int main()
{
	float suma = 0;
	int m = ingresenumero();
	for(int i=1;i<=m;i++)
	suma = suma + factorial(i);
	cout << "la suma de los primeros" <<  m << "factoriales es:" << suma;
	_getch();
}