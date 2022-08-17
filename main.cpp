#include <cmath>
#include <iostream>
#include <string>
// #include <cstdio>
using namespace std;

// Protótipos das funções. Isso é necessário
// para o compilador "saber" quais são as funções.
// disponíveis.
void variaveisLocais();
void operadoresLogicos();
void operadoresLogico();
void operadoresAtribuicao();
void ponteiros();
void trabalhandoString();

int main() {
  /*ponteiros();
  variaveisLocais();
  operadoresLogicos();
  operadoresLogico();
  operadoresAtribuicao();*/
  trabalhandoString();
  return 0;
}

void trabalhandoString()
{
	string nome = "Leonardo " ;
  string sobrenome = "Paulino";
	cout << nome + sobrenome << endl;

  printf("%s", nome.c_str());

  nome.append(sobrenome);

  cout << "\n" << endl;

  printf("%s", nome.c_str());
}

void variaveisLocais() {
  // Variavel local
  int x = 10;
  int y = 15;
  cout << "A soma entre x e y: " << x + y << endl;

  // definir. declarar e atribui
  // Exemplo de declaração de multiplas variáveis
  int idade = 28, altura = 185, peso = 90;
  cout << "Alguns dados\n: "
          " Idade: "
       << idade << " Altura: " << altura << " Peso: " << peso << endl;
}

void operadoresLogicos() {
  bool resultado = 10 == 10 & 10 >= 10;
  bool resultado1 = 10 <= 10 && 10 >= 10;
  bool resultado3 = 10 <= 10 | 10 >= 10;
  bool resultado4 = 10 <= 10 || 10 >= 10;
  bool resultado5 = !(10 <= 10 || 10 >= 10);
}

void operadoresLogico() {
  bool resultado = 10 == 10;
  bool resultado1 = 10 <= 10;
  bool resultado2 = 10 >= 10;
  bool resultado3 = 10 != 10;
  bool resultado4 = 10 > 10;
  bool resultado5 = 10 < 10;
}

void operadoresAtribuicao() {
  int x = 10;
  x += 10;
  x -= 10;
  x %= 10;
}

void operadores() {
  int sum1 = 100 + 50;    // 150 (100 + 50)
  int sum2 = sum1 / 250;  // 400 (150 + 250)
  int sum3 = sum2 * sum2; // 800 (400 + 400)
  int sum4 = sum1 - 250;  // 400 (150 + 250)
  int sum5 = sum2 % sum2; // 800 (400 + 400)
  int sum6 = sum2++;      // 400 (150 + 250)
  int sum7 = ++sum2;      // 800 (400 + 400)
}

void tiposDados() {
  int numero = 5;
  float altura = 1.85;
  double precoGasolina = 5.6598;
  char letra = 'P';
  bool vivo = true;
  string nome = "Luis";
}

void ponteiros() {
  // Ponteiros
  int valor;
  int *p = NULL;
  int **q;

  // Inicializando
  valor = 50;

  // Pegando a referência/endereço da var valor
  p = &valor;

  // Pegar o endereço da var p (ponteiro)
  q = &p;

  // Exibir o endereço
  printf("Endereco do valor1: %x\n", &valor);
  printf("Endereco do p: %x\n", p);
  printf("Endereco do q: %x\n", q);

  // Exibir os valores
  printf("Valor do valor1: %d\n", valor);
  printf("Valor do p: %d\n", *p);
  printf("Valor do p: %d\n", **q);
}