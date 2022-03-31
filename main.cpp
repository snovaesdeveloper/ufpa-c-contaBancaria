#include <iostream>
#include "contaBancaria.h"

using  namespace std;

int main() {
  contaBancaria conta;
  conta = inicializa (11,100);
  cout << "antes da movimentacao!\n" << "\n";
  imprime(conta);

  deposito (&conta, 50);
  imprime(conta);

  saque (&conta, 100);
  cout << "depois  da movimentacao " << "\n";
  imprime(conta);
}