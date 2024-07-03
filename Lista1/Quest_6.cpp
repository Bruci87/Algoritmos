
#include <iostream>
using namespace std;
int main() {
  int op;
  float fabrica, soma, total;
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
    cout << "What is the value of the car?" << endl;
    cin >> fabrica;
    soma = fabrica * 0.28;
    total = fabrica + soma;
    soma = fabrica * 0.45;
    total = total + soma;
    cout << " Consumer value and: " << total << ", 00$ (USD)" << endl;
    break;
  case 2:
    cout << "Qual e o valor do carro?" << endl;
    cin >> fabrica;
    soma = fabrica * 0.28;
    total = fabrica + soma;
    soma = fabrica * 0.45;
    total = total + soma;
    cout << " Valor do consumidor e: " << total << ", 00$ (€)" << endl;
    break;
  case 3:
    cout << "Qual o valor do carro?" << endl;
    cin >> fabrica;
    soma = fabrica * 0.28;
    total = fabrica + soma;
    soma = fabrica * 0.45;
    total = total + soma;
    cout << " O valor do consumidor e: " << total << ", 00$ (BRL)" << endl;

    break;
  }
}