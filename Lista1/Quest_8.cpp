
#include <iostream>
using namespace std;
int main() {
float cotacaoDolar, quantidadeDolares, valorEmReais;
int op;
  cout << "|Choose the default language you want? |:" << endl;
  cout << "|--------------------------------------|" << endl;
  cout << "| 1-English                            |" << endl;
  cout << "|--------------------------------------|" << endl;
  cout << "| 2-Portugues                          |" << endl;
  cout << "|--------------------------------------|" << endl;
  cout << "| 3-Language portuguesa                |" << endl;
  cout << "|--------------------------------------|" << endl;
  cin >> op;
  switch (op) {
    case 1:
      cout << "Enter the dollar quote ";
      cin >> cotacaoDolar;
      cout << "Enter the amount of dollars: ";
      cin >> quantidadeDolares;
      valorEmReais = cotacaoDolar * quantidadeDolares;
      cout << "The value in reais (R$) is: " << valorEmReais << std::endl;
      return 0;
      break;
    case 2:
      cout << "Insira a cotação do dólar: ";
      cin >> cotacaoDolar;
      cout << "Insira a quantidade de dólares: ";
      cin >> quantidadeDolares;
      valorEmReais = cotacaoDolar * quantidadeDolares;
      cout << "O valor em reais (R$) e: " << valorEmReais << std::endl;
      return 0;
      break;
    case 3:
      cout << "Digite a cotacao do dolar: ";
      cin >> cotacaoDolar;
      cout << "Digite a quantidade de dolares: ";
      cin >> quantidadeDolares;
      valorEmReais = cotacaoDolar * quantidadeDolares;
      cout << "O valor em reais (R$) e: " << valorEmReais << std::endl;
      return 0;
    break;
  }
}