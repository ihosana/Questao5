/*ALGORITMO: Escreva um programa que inverta os caracteres de um string.*/

#include <cstring>
#include <iostream>
using namespace std;
int main() {
  string palavra, reverso;
  int i;
  cout << "Digite uma palavra: ";
  getline(cin, palavra);
  /*revertendo a palavra*/
  cout << "Palavra invertida: ";
  for (i = 0; i <= palavra.size(); i++) {
    reverso = palavra[palavra.size() - i];
    cout << "" << reverso;
  }
}