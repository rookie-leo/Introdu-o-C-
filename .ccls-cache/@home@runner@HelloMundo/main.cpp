#include <iostream>
using namespace std;


int main() {
	// definir. declarar e atribui
	int idade = 28, altura = 185, peso = 90;
	const int quantidadeAula = 4;
	// quantidadeAula = 15;
	// idade = 28;
	cout << "Minha idade: " << idade << endl;
	return 0;
}

void operadoresLogicos()
{
	bool resultado = 10 == 10 & 10 >= 10;
	bool resultado1 = 10 <= 10 && 10 >= 10;
	bool resultado3 = 10 <= 10 | 10 >= 10;
	bool resultado4 = 10 <= 10 || 10 >= 10;
	bool resultado5 = !(10 <= 10 || 10 >= 10);
}

void operadoresLogico()
{
	bool resultado = 10 == 10;
	bool resultado1 = 10 <= 10;
	bool resultado2 = 10 >= 10;
	bool resultado3 = 10 != 10;
	bool resultado4 = 10 > 10;
	bool resultado5 = 10 < 10;
}

void operadoresAtribuicao()
{
	int x = 10;
	x += 10;
	x -= 10;
	x %= 10;
}

void operadores()
{
	int sum1 = 100 + 50;        // 150 (100 + 50)
	int sum2 = sum1 / 250;      // 400 (150 + 250)
	int sum3 = sum2 * sum2;     // 800 (400 + 400)
  int sum4 = sum1 - 250;      // 400 (150 + 250)
  int sum5 = sum2 % sum2;     // 800 (400 + 400)
	int sum6 = sum2++;      // 400 (150 + 250)
  int sum7 = ++sum2;     // 800 (400 + 400)
}

void tiposDados()
{
	int numero = 5;
	float altura = 1.85;
	double precoGasolina = 5.6598;
	char letra = 'P';
	bool vivo = true;
	string nome = "Luis";
	
}