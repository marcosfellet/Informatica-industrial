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
/**********************************************************Memorias**********************************************************************
Stack: tamanho definido durante a compilacao. 
       Memoria alocada e desalocada a automaticamente.
       Uso excessivo gera alto gasto de memoria RAM

variaveis armazenadas: a, var, vet, p

Heap: alocamento dinamico e nao ordenado, sob demanda
      comandos: new e delete

variaveis armazenadas: (espaco pra um inteiro) => desalocado apos o uso do delete

Data e bss: para variaveis globais ou estaticas
*****************************************************************************************************************************************/
void foo()
{
  int var;
  int* p2 = new int;
  *p2 = 10;
}

int main()
{
  int a = 10;
  int vet[100];
  int* p = new int; // guarda espaco suficiente para para um inteiro na Heap, necessitando do uso de ponteiro
  *p = 10;
  delete p; // desaloca o endereco da Heap
  for(int i = 0; i < 10; i++)
    {
      foo();
    }
  // for chama a funcao foo 100 vezes, cada execucao aloca espaco na memoria Heap, mas como nao ha o comando delete, ocorre o esgotamento da memoria Heap
}

/**************************************Template*****************************************************************/
int soma(int a, int b)
{
  return a+b;
}
float soma(float a, float b)
{
  return a+b;
}
      /*
      .
      .
      .
      */
double soma(double a, double b)
{
  return a+b;
}
// o template resolve esse problema:
tempalate<typename T>
  T soma(T a, T b)
  {
    return a+b;
  }

void main()
{
  int a = 10, b = 20;
  double c = 32.40, d = 55.37;
  soma(a,b); // compilador cira funcao com o template para tipo int
  soma(c,d); // compilador cira funcao com o template para tipo double
}
// Template serve para mudar os tipos de de variaveis

/********************************************Classe pilha******************************************************/
/*
   Objetivo:   Guardar dados de modo que sejao inseridos e o primeiro que entra e o ultimo que sai
   T *pPtr; => ponteiro que aponta para a memoria Heap, formando o vetor de variaveis
   .hpp serve para a declaracao da classe e implementacao os metodos no mesmo arquivo
   
   O TEMPLATE PRECISA DA IMPLEMENTACAO DOS METODOS PARA QUE O COMPILADOR POSSA FAZER A IMLEMENTACAO PARA OS TIPOS ESPECIFICOS 

detalhe importante: 
  int tam;
  cout<< "digite o tamanho do vetor"
  cin>>tam;
  
  ESTA ERRADO!!!  tam e uma variavel nao constante

  Forma correta:
  int* vetD = new int[tam];
*/




