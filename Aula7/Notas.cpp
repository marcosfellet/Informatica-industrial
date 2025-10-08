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
  // com variaveis locais: variavel local nao e mais desalocada no final de execucao de sua funcao
    // variavel estatica continua com o seu escopo na funcao local, ela nao e vista na main, diferente das variaveis globais
    void foo()
    {
      static int cont = 0; // cont sera armazenado na regiao de memoria "data" ao inves da "stack", ou seja, cont nao sera desalocada mais
      cout << ++cont;
    }
  
    int main()
    {
      foo(); // imprime 1
      foo(); // imprime 2
      foo(); // imprime 3
    }
// com objetos e metodos:
  class C
  {
    private:
      static int attr; // como attr vai para o data, o attr1 sera compartilhado entre c1 e c2, logo o programa gasta 12 bytes, mas attr2 sera individual
      int attr2;
  }
  static void set2()
  {
    this -> attr2 = 10; // metodo estatico nao tem acesso ao ponteiro "this", pois nao esta vinculado a um objeto em especifico. PORTANTO: metodo estatico so manipula 
                         // atributos estaticos   
  }
  int main()
  {
    C c1;
    C c2;
    C::attr1 = 10; // this->attr1 = 10; nao funciona, pois attr1 nao e de variavel, mas sim da classe    
  }
// 

  

