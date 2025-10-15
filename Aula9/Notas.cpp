/* Novas Classes: 
  acrescenta atributos, metodos e modificar metodos existentes
*/

/***************************************************************EXEMPLO: JOGO DE LUTA (HERANCA)***************************************************************/
Class Personagem
{
  private: 
    hp;
    estamina;
  public:
    pular();
    atacar();
    especial();
    calcularVida();  
}
// classes derivadas da classe padrao, personagens
  Fighter
    correr();
    atacar();
  Mago
    mp;
    voar();
    atacar();

// protected: tipo de atributo que permite que apenas a classe e a suas derivadas "enchergam" os atributos

/***************************************************************POLIMORFISMO***************************************************************/
/*
        no C++:
            o polimorfismo nao e automatico
            utilizar a palavra "virtual" antes da funcao da funcao da classe base
            Polimorfismo funciona apenas, se ponteiros de objetos estiverem sendo utilizados!!
        Polimorfismo esta relacionado a metodos e NAO A CLASSES!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

        funcao de forma pura: funcao a ser sobrescrita por uma funcao de uma classe derivada
*/
           virtual void atacar() = 0;













