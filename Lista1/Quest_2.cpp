
#include <iostream>
using namespace std;
int main() {
int tempoF, cigarroPD, TL, op;
float precoC;
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
        cout << "\n How long have you been smoking? " << endl;
        cin >> tempoF;
        cout << "What is the price of the wallet:" << endl;
        cin >> precoC;
        cout << "How many cigarettes do you smoke a day?" << endl;
        cin >> cigarroPD;
        tempoF = tempoF * 365;
        precoC = precoC / 20;
        precoC = precoC * cigarroPD;
        TL = precoC * tempoF;
        cout << "You've spent" << TL <<", 00$ (Us) "<< " Dollar Ones with Cigarettes" << endl;
  break;
  case 2:
        cout << "\n Há quanto tempo fuma? " << endl;
        cin >> tempoF;
        cout << "Qual é o preco da carteira:" << endl;
        cin >> precoC;
        cout << "Quantos cigarros fuma por dia?" << endl;
        cin >> cigarroPD;
        tempoF = tempoF * 365;
        precoC = precoC / 20;
        precoC = precoC * cigarroPD;
        TL = precoC * tempoF;
        cout << "Voce gastou " << TL <<", 00$ (Eu)"<< " euros com cigarros" << endl;
  break;
  case 3:
        cout << "\n Há quanto tempo fuma? " << endl;
        cin >> tempoF;
        cout << "Qual é o preco da carteira:" << endl;
        cin >> precoC;
        cout << "Quantos cigarros fuma por dia?" << endl;
        cin >> cigarroPD;
        tempoF = tempoF * 365;
        precoC = precoC / 20;
        precoC = precoC * cigarroPD;
        TL = precoC * tempoF;
        cout << "Voce gastou " << TL <<", 00$ (Rs)"<< " Reais com cigarros" << endl;
  break;
  }
}