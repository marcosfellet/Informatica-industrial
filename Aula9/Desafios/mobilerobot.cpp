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
           cin>> x;
           cin>> y;
           cin>> z;
           this->PosicaoAtual[0] = x ; // le o valor em x
           this->PosicaoAtual[1] = y; // le o valor em y
           this->PosicaoAtual[2] = z; // le o valor em z  
      }
    else
      {
          cout<<"Senha Invalida"<<endl;
      }
  
}

virtual void Robot::mover(double xVel, double yVel, double zVel, double tempo) = 0;
{
    
    
}

