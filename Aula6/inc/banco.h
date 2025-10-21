#ifndef BANCO_H
#define BANCO_H

#include "conta.h"

class Banco
{
private:
    int numContas; 
    int contas_apagadas;
    Conta* contas;//Cria um vetor dinâmico de objetos do tipo Conta 
    int* posicoes_livres; // Cria um vetor dinamico de objetos do tipo int
public:
    Banco();
    ~Banco();
    Conta* buscaConta(int numero); //Metodo que retorna o endereço do objeto conta que possui o mesmo numero informado
    int CriaContas(int senha, string titular, string tipo);
    int ApagaContas(int numero, int numero);
    void atendimento();
};


#endif
