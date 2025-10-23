#include "mobilerobot.h"
#include <iostream>

using namespace std;

Robot::Robot(char senha, double x, double y, double z) // construtor dos objetos robos
{
    this->senha = senha;
}
~Robot::Robot() // destrutor dos objetos robos
{
    
}

int Robot::validaSenha(int senha)
{
    if(senha == this->senha)
    {
        return SENHA_CORRETA;
    }
    else
    {
        return ERROR;
    }
}

double Robot::getPosicaoAtual(char coordenada)
{
    double posicao;
    if(validaSenha() == SENHA_CORRETA)
    {
        if(coordenada == 'x')
        {
            posicao = this->PosicaoAtual[0];
            cout<<"Posicao em x: "<< posicao <<endl;
        }
        else if(coordenada == 'y')
        {
            posicao = this->PosicaoAtual[1];
            cout<<"Posicao em z: "<< posicao <<endl;
        }
        else if(coordenada == 'z')
        {
            posicao = this->PosicaoAtual[2];
            cout<<"Posicao em z: "<< posicao <<endl;
        }
        else
        {
            cout<<"Coordenada não suportada ou invalida"<<endl;    
        }
    }else
    {
        cout<<"Senha Incorreta"<<endl;
    }
   
      
}
void Robot::setPosicaoAtual(double x, double y, double z)
{
      if(validaSenha() == SENHA_CORRETA)
      {
           cout<<"Digite os valores de x, y e z:"<<endl;   
           cin>> this->PosicaoAtual[0] ; // le o valor em x
           cin>> this->PosicaoAtual[1]; // le o valor em y
           cin>> this->PosicaoAtual[2]; // le o valor em z  
      }
    else
      {
          cout<<"Senha Invalida"<<endl;
      }
  
}


