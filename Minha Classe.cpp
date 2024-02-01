#include <iostream>
#include <string>
class Minha Classe
{
      public:
      int ni, n2, n3;
      void Calcular(int);
};
void Minha Classe::Calcular(int x = 1)
{ 
      n1 = 0 ;
      n2 = 1;
      std::cout << n1 << “ “ << n2;
      for (int i = 1; i<= x-2; i++) {
          n3 = n1 + n2;
          std::cout << “ “ « n3;
          n1 = n2;
          n2 = n3;
      }
}

int main()
{
      int numero = 5;
      Minhaclasse objeto;
      objeto.Calcular();
}
