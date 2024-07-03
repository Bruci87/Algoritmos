
#include <iostream>
using namespace std;
int main() {
  float adicao, subtracao, multiplicacao, divisao, A, B;
  char C, D;
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
    break;
  case 2:
    break;
  case 3:
    cout << " Digite um valor A e um valor B: " << endl;
    cin >> A >> B;
    cout << " Digite um valor lógico C e um valor lógico D (F-Falso | "
            "V-Verdadeiro): "
         << endl;
    cin >> C >> D;
    adicao = A + B;
    subtracao = A - B;
    multiplicacao = A * B;
    divisao = A / B;
    if (C != 'V' && D != 'V' || C != 'v' && D != 'f') {
      if (C == 'V' || D == 'V') {
        cout << " Verdadeiro" << endl;
      } else {
        cout << " Falso" << endl;
      }
      if (C == 'V' || D == 'F') {
        cout << " Verdadeiro " << endl;
      } else {
        cout << "Verdadeiro" << endl;
      }
    }

    break;
  }