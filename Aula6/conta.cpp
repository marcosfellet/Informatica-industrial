#include "conta.h"
#include <iostream>


bool validacao = ERRO;

Conta::Conta()
{
    this->numero = 0;
    this->senha = 1111;
    this->titular = "Nenhum";
    this->tipo = "Corrente";
    this->saldo = 0;
}

Conta::Conta(int senha, int numero, std::string titular, std::string tipo, double saldo)
{
    this->senha = senha;
    this->numero = numero;
    this->titular = titular;
    this->tipo = tipo;
    if(saldo>0)
    {
        this->saldo = saldo;
    }
    else
    {
        return INVALIDO; 
    }    
}

Conta::~Conta()
{
}

void Conta::exibeDados()
{

    int* dados[3];
    dados[0] = &titular;
    dados[1] = &numero;
    dados[2] = &tipo;
    return dados;
}

double Conta::getSaldo(int senha)
{
    
    
    if(senha==this->senha)
    {
        return this->saldo;
    }
    else
    {
       // std::cout<<"Senha inválida"<<std::endl;
        return ERRO;
    }    

}

void Conta::setSaldo(double valor)
{
    if(valor>0)
    {
        this->saldo = valor;
    }
    else
    {
        return INVALIDO;
    }
    //std::cout<<"Valor inválido"<<std::endl;
}

void Conta::setSenha(int novaSenha)
{
    
    if(senha==this->senha)
    {
        this->senha = novaSenha;
    }        
    else
    {
        return ERRO;
    }
}

void Conta::deposito(double valor)
{
    if(valor>0)
    {
        this->saldo+=valor;
        return VALIDO;
    }
    else
    {
        return INVALIDO;
        //std::cout<<"Valor invalido"<<std::endl;
    }
    
}

void Conta::saque(int senha, double valor)
{
    bool validacao;
    Conta::validaSenha)()
    if(senha==this->senha)
    {
        if(this->saldo>valor)
        {
            this->saldo-=valor;
            return valor;
            //std::cout<<"Saque de R$"<<valor<<" realizado com sucesso."<<std::endl;
        }
        else
        {
            return INVALIDO;
            //std::cout<<"Saldo insuficiente"<<std::endl;
        }    
    }
    else
    {
        return ERRO;
        //std::cout<<"Senha invalida"<<std::endl;
    }
    
}

int Conta::transacao(double &valor, Conta* c1, Conta* c2, int senha)
{
    if(c1->validaSenha(senha))
    { 
        this->c1.saque(valor);   
        this->c2.deposito(valor);
        return VALIDO;

    }
    else
    {
        return INVALIDO;
    }
}

bool Conta::validaSenha(int senha)
{
    if(this->senha == senha)
    {
        return SENHA_CORRETA;
    }
    else
    {
        return ERRO;
    }
}

