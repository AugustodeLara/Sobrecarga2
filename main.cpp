#include<iostream>
using namespace std;

#pragma warning(disable : 4996)

class numeros
{
	char valor[2];

public:
	numeros();
	numeros(const char *i);

	friend long operator+ (numeros x, numeros y);
	friend long operator- (numeros x, numeros y);
	friend long operator* (numeros x, numeros y);
	friend long operator/ (numeros x, numeros y);

};

numeros::numeros()
{
	strncpy(valor, "1", 2);
}

numeros::numeros(const char *i)
{
	strncpy(valor, i, 2);
}

int main()
{
	numeros x = "10";
	numeros y = "2";


	cout << "X + Y = " << (x + y) << endl;
	cout << "X - Y = " << (x - y) << endl;
	cout << "X * Y = " << (x * y) << endl;
	cout << "X / Y = " << (x / y) << endl;

	system("pause");
	return 0;
}

long operator+(numeros x, numeros y)
{
	return(atol(x.valor) + atol(x.valor));
}

long operator-(numeros x, numeros y)
{
	return(atol(x.valor) - atol(x.valor));
}

long operator*(numeros x, numeros y)
{
	return(atol(x.valor) * atol(x.valor));
}

long operator/(numeros x, numeros y)
{
	return(atol(x.valor) / atol(x.valor));
}