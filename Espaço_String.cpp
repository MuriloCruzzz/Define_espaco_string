#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
int main(void)
{

  cout << setprecision(6);
  cout << setiosflags(ios::fixed);
  char  STRING1[9] = "2.718281", STRING2[2] = "2";
  char  STRING3[11] = "2147483647";
  float VALOR1;
  long int VALOR2;

  VALOR1 = atof(STRING1); // pesquisa atof
  cout << "String = " << setw(20) << STRING1  << endl;
  cout << "Valor  = " << setw(20) << VALOR1   << endl;


  VALOR1 = atoi(STRING2); // pesquisa atoi
  cout << "String = " << setw(20) << STRING2  << endl;
  cout << "Valor  = " << setw(20) << VALOR1   << endl;

  VALOR2 = atol(STRING3); // pesquisa atol
  cout << "String = " << setw(20) << STRING3 << endl;
  cout << "Valor  = " << setw(20) << VALOR2  << endl;

  cout << "\nTecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
