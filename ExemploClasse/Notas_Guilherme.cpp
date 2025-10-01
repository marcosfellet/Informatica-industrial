
Class C1
  Public:
  //Acessivel a qualquer parte do codigo
  // Exemplo:
  int attrpub;
  void set_attr(int v) // funcao capaz de manipular o valor de attr1
  {
    this->attr1 = (v>0) v:0; // attr1 ou vai valer v ou vai valer 0, se v for maior q 0, attr1 valera v, caso contrario, valera 0
  } 
  Private:
  //So e acessivel dentro dos metodos da propria classe
  //Exemplo:
  int attr1;

void mai()
{
  C1 a; 
  a.ttrpub = 10; // e possivel fazer isso
  a.ttr1 = 50; // nao e possivel fazer isso
  
}

