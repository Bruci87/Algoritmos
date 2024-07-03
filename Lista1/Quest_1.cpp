// Leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa
// apenas em dias. Obs: Considere cada mês com 30 dias.
#include <iostream>
using namespace std;
int main() {
  int A, M, D, TL, op, anoAtual;
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
    cout << "Type in the following order: Year/ Month/ Days...." << endl;
    cin >> A >> M >> D;
    cout << "Enter the year that is currently (Example; '2024'): " << endl;
    cin >> anoAtual;
    anoAtual = anoAtual * 365;
    A = A * 365;
    TL = (anoAtual - A);
    M = M * 30;
    TL = TL + M + D;
    cout << "\t\n DAYS: " << TL;
    break;
  case 2:
    cout << "Digite na seguinte ordem: Ano/ Mes/ Dias...." << endl;
    cin >> A >> M >> D;
    cout << "Insira o ano que esta atualmente(Exemplo; '2024'): " << endl;
    cin >> anoAtual;
    anoAtual = anoAtual * 365;
    A = A * 365;
    TL = (anoAtual - A);
    M = M * 30;
    TL = TL + M + D;
    cout << "\t\n Idade: " << TL;
    break;
  case 3:
    cout << "Digite na seguinte ordem: Ano/Mes?Dias...." << endl;
    cin >> A >> M >> D;
    cout << "Insira o ano que esta atualmente(Exemplo; '2024' ): " << endl;
    cin >> anoAtual;
    anoAtual = anoAtual * 365;
    A = A * 365;
    TL = (anoAtual - A);
    M = M * 30;
    TL = TL + M + D;
    cout << "\t\n DIAS: " << TL;
    break;
  }
}