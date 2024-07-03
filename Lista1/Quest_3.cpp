
#include <iostream>
using namespace std;
int main() {
  int op, parcela;
  float compras;
  char escl;
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
    cout << "Enter the purchase amount: " << endl;
    cin >> compras;
    cout << "Do you want to pay in installments? (y/n): " << endl;
    cin >> escl;
    if ((escl == 'y') || (escl == 'Y')) {
      cout << "In how many installments do you want? (Pointing out that we divide it in up to 10 interest-free installments!): " << endl;
      cin >> parcela;
      if ((parcela <=0) || (parcela > 10)) {
        cout << "We do not accept more than 10 installments! and the limit is 1" << endl;
      }
      compras = compras / parcela;
      cout << "The value of the installments is: " << compras << ", 00$ (USD)" << endl;
    } else {
      cout << "The value of the purchase in installments is: " << compras << ", 00$ (USD)"<< endl;
    }
    break;
  case 2:
    cout << "Digite o valor da compra:" << endl;
    cin >> compras;
    cout << "Quer pagar a compra em prestacoes? (s/n)" << endl;
    cin >> escl;
    if ((escl == 's') || (escl == 'S')) {
      cout << "Em quantas parcelas voce quer? (Ressaltando que dividimos em ate 10 parcelas sem juros!): "<< endl;
      cin >> parcela;
      if ((parcela <=0) || (parcela > 10)){
        cout << "Nao aceitamos mais de 10 parcelas! e o limite é 1" << endl;
      }
      compras = compras / parcela;
      cout << "O valor das prestações é: " << compras << ", 00$ (€)" << endl;
    } else {
      cout << "O valor da compra parcelada e: " << compras << ", 00$ (€)"<< endl;
    }
    break;
  case 3:
    cout << "Digite o valor da compra: " << endl;
    cin >> compras;
    cout << "Deseja parcelar a compra? (s/n)" << endl;
    cin >> escl;
    if ((escl == 's') || (escl == 'S')) {
      cout << "Em quantas parcelas deseja? (Salientando que dividimos em até 10x sem juros!):"<< endl;
      cin >> parcela;
      if ((parcela <=0) || (parcela > 10)){
        cout << "Nao aceitamos mais de 10 parcelas! e o limite é 1" << endl;
      }else{
        compras = compras / parcela;
        cout << "O valor das parcelas e de: " << compras << ", 00$ (BRL)" << endl;
      }
    } else {
      cout << "O valor da compra parcelada e: " << compras << ", 00$ (BRL)"<< endl;
    }
    break;
  }
}