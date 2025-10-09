#ifndef BANCO_H
#define BANCO_H

#include "conta.h"

#define NUMCONTAS 100 //Define que a palavar NUMCONTAS passa a valer como escrever 100

class Banco
{
private:
    int = numContas; 
    int* vet = new Conta contas[numContas];//Cria um vetor dinâmico de objetos do tipo Conta 
public:
    Banco();
    ~Banco();
    Conta* buscaConta(int numero); //Metodo que retorna o endereço do objeto conta que possui o mesmo numero informado
    int CriaContas(senha, titular, tipo);
    void atendimento();
};


#endif
