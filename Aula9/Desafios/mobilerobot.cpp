#include "mobilerobot.h"
#include <iostream>

using namespace std;

Robot::Robot(char senha, double x, double y, double z) // construtor dos objetos robos
{
    this->senha = senha;
    x = PosicaoAtual[0];
    y = PosicaoAtual[1];
    z = PosicaoAtual[2];
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
    if(validaSenha(senha) == SENHA_CORRETA)
    {
        if(coordenada == 'x')
        {
            posicao = this->x;
            cout<<"Posicao em x: "<< posicao <<endl;
        }
        else if(coordenada == 'y')
        {
            posicao = this->y;
            cout<<"Posicao em z: "<< posicao <<endl;
        }
        else if(coordenada == 'z')
        {
            posicao = this->z;
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
      if(validaSenha(senha) == SENHA_CORRETA)
      {
           cout<<"Digite os valores de x, y e z:"<<endl;   
           cin>> x ; // le o valor em x
           cin>> y; // le o valor em y
           cin>> z; // le o valor em z  
      }
    else
      {
          cout<<"Senha Invalida"<<endl;
      }
  
}


