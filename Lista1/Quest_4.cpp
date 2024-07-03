
#include <iostream>
using namespace std;
int main() {
  int op, numero;
  float porcentagem, percentual;
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
    cout << "Enter a number (Integer) that you want to know the percentage of: "<< endl;
    cin >> numero;
    cout << "Enter the percentage: " << endl;
    cin >> percentual;
    porcentagem = percentual / 100;
    percentual= numero * porcentagem;
    cout <<"The percentage applied to the chosen number is: "<< percentual<<endl;
    break;
  case 2:
    cout << "Introduza um número (Inteiro) que pretende saber a percentagem: "<< endl;
    cin >> numero;
    cout << "Introduza a percentagem: " << endl;
    cin >> percentual;
    porcentagem = percentual / 100;
    percentual= numero * porcentagem;
    cout <<"A percentagem aplicada ao número repetido é: "<< percentual<<endl;
    break;
  case 3:
    cout << "Digite um numero (Inteiro) que deseja saber o percentual: "<< endl;
    cin >> numero;
    cout << "Digite o percentual: " << endl;
    cin >> percentual;
    porcentagem = percentual / 100;
    percentual= numero * porcentagem;
    cout <<"O percentual aplicado ao numero escolhido e: "<< percentual<<endl;
    break;
  }
}