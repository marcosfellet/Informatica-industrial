/********************************** funcao com argumentos opcionais (argumentos padrao) ************************************/
void foll(int a, int b = 1) // estabelece o valor de b caso esse nao seja passado
{
  cout << a*b;
}
int main()
{
  foll(1,3); // funcao roda com a = 1 e b = 3
  foll(4); // funcao foll roda com a = 4 e b = 1 (padrao) 
}

/***************************************************Modificadores***************************************************************/
// Modificadores mudam a forma na qual as variaveis sao trabalhadas
const // torna a variavel para apenas leitura
static 
  // com variaveis locais:
  void foo()
  {
    int cont = 0;
    cout << ++cont;
  }

  int main()
  {
    foo();
    foo();
    foo();
  }


