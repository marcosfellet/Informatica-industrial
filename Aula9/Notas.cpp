/* Novas Classes: 
  acrescenta atributos, metodos e modificar metodos existentes
*/

/***************************************************************EXEMPLO: JOGO DE LUTA***************************************************************/
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

