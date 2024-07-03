
#include <iostream>
using namespace std;
int main() {
  int op;
  float x, celsius;
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
    cout << "Enter the temperature in degrees C° (Celsius): " << endl;
    cin >> celsius;
    cout << " C°" << celsius << endl;
    if (celsius < -273.15) {
      cout << "Invalid temperature!";
    } else {
      x = ((9 * celsius + 160) / 5);
      cout << " Degrees Fahrenheit " << x << " F°";
      break;
    case 2:
      cout << "Insira a temperatura em graus C° (Celsius): " << endl;
      cin >> celsius;
      cout << " C°" << celsius << endl;
      if (celsius < -273.15) {
        cout << "Temperatura invalida!";
      } else {
        x = ((9 * celsius + 160) / 5);
        cout << " Graus Fahrenheit " << x << " F°";
        break;
      case 3:
        cout << "Digite a temperatura em graus C° (Celsius): " << endl;
        cin >> celsius;
        cout << " C°" << celsius << endl;
        if (celsius < -273.15) {
          cout << "Temperatura invalida!";
        } else {
          x = ((9 * celsius + 160) / 5);
          cout << " Graus Fahrenheit " << x << " F°";
          break;
        }
      }
    }
  }
}