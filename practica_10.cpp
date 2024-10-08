#include <iostream>
using namespace std;

int sumainteriva(int n)
{
	int suma = 0;

	while (n > 9)
	{
		suma += n % 10;
		n /= 10;
	}
	return (suma + n);
}

int sumarecursiva(int n)
{
	if (n <= 9)
		return n;
	else
		return sumarecursiva(n / 10) + n % 10;
}

int main()
{
	int Numero;

	cout << "Este programa suma todos los digitos que se coloquen" << endl;
	cout << "Ingrese un numero entero: ";
	cin >> Numero;

	cout << "El resultado de la suma iterativa es: " << sumainteriva(Numero) << endl;
	cout << "El resultado de la suma recursiva es: " << sumarecursiva(Numero) << endl;

	return 0;
}