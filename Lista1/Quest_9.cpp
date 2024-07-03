
#include <iostream>
using namespace std;
int main() {
  int Val1, Val2, temp;
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
    cout << "Enter the value of Value1: ";
    cin >> Val1;
    cout << "Enter the value of Value2: ";
    cin >> Val2;
    temp = Val1;
    Val1 = Val2;
    Val2 = temp;
    cout << "After the exchange, Value1 = " << Val1 << " e Value2 = " << Val2
         << endl;
    return 0;
    break;
  case 2:
    cout << "Insira o valor de Valor 1: ";
    cin >> Val1;
    cout << "Insira o valor de Valor 2: ";
    cin >> Val2;
    temp = Val1;
    Val1 = Val2;
    Val2 = temp;
    cout << "Após a troca, Valor1 = " << Val1 << " e Valor 2 = " << Val2
         << endl;
    return 0;
    break;
  case 3:
    cout << "Digite o valor de Val1: ";
    cin >> Val1;
    cout << "Digite o valor de Val2: ";
    cin >> Val2;
    temp = Val1;
    Val1 = Val2;
    Val2 = temp;
    cout << "Depois da troca, Val1 = " << Val1 << " e Val2 = " << Val2 << endl;
    return 0;
    break;
  }
}