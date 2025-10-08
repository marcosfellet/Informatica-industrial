#include "banco.h"
#include <iostream>

using namespace std;
/*
void confere_flags(char flag)
{
    if(flag == ERRO)
    {
        cout<<"Senha invalida">>endl;
    }
    else if(flag == INVALIDO)
    {
        cout<<"Valor invalido">>endl;
    }
   
}*/

Banco::Banco() //O construtor criara 4 contas
{
    this->contas[0] = Conta(1234, 1, "Joao", "Corrente", 300);
    this->contas[1] = {4567, 2, "Jose", "Poupanca", 800};
    this->contas[2] = {7890, 3, "Maria", "Corrente", 1000};
    this->contas[3] = {8956, 4, "Madalena", "Poupanca", 2000};
}
// como o construtor cria 4 contas, cria-se uma variavel para ser o indice a partir desse valor:
unsigned char index = 4;
Banco::~Banco()
{
}

Conta *Banco::buscaConta(int numero)//Retorna o endereço da conta que possuir o mesmo numero informado
{
    for (int i = 0; i < NUMCONTAS; i++)
    {
        if (numero == this->contas[i].numero)
        {
            return &this->contas[i];
        }
    }

    return nullptr;
}

Conta CriaContas(char numC, int &index) //funcao responsavel por criar novas contas
{
    if(index <= 100)
    {
        Banco::Banco()
        {
            this->contas[index] = Conta(1234, 1, "Joao", "Corrente", 300);
        }
    {
    index++;
    else
        {
            cout <<"Numero maximo de contas atinjido">> endl;
        }
}

void Banco::atendimento() //Realiza o atendimento ao cliente(Função chamada na main)
{
    Conta *contaCliente;
    int numC = 0;
    int senhain;
    //unsigned char flag = 100; // variavel que verifica quais mensagens irao aparecer no 
    bool atendimento = true;

    cout << "Bem vindo ao sistema de atendimento do banco" << endl;
    cout<< "Caso deseje criar uma conta, digite '101'" >> endl;
    cout << "Caso deseje acessar a sua conta, digite seu numero: ";
    cin >> numC;
    if(numC == 101)
    {
            
    }
    

    contaCliente = this->buscaConta(numC); //Chama o Metodo buscaConta() do banco para achar o objeto conta que possui o numero numC

    if (contaCliente == nullptr)//Se não achar nenhuma conta que corresponda entra nesse if
    {
        cout << "Conta invalida" << endl;
    }
    else
    {
        cout << "Digite a sua senha: ";
        cin >> senhain;

        if (contaCliente->validaSenha(senhain))
        {
            cout << "Ola " << contaCliente->titular << endl;
            while (atendimento) //Realiza o atendimento
            {
                int op;
                double valor;
                cout << "Qual operacao deseja fazer? (1 - Saque, 2 - Deposito, 3 - Ver Saldo, 4 - Sair): ";
                cin >> op;
                switch (op)
                {
                case 1:
                    cout << "Digite o valor: ";
                    cin>>valor;
                    if(contaCliente->saque(senhain,valor) == 1)
                    {
                        contaCliente->saque(senhain,valor)
                        cout<<"Saque de R$"<<contaCliente->saque(senhain,valor)r<<" realizado com sucesso."<<endl;
                        break;   
                    }
                    else if(contaCliente->saque(senhain,valor) == 0)
                    {
                        flag = ERRO;
                        confere_flags(flag);
                        flag = 100;
                        //cout<<"Senha invalida">>endl;
                        continue;
                    }
                    else
                    {
                        cout<<"Saldo insuficiente"<<endl;
                       // op = 1;
                        continue;
                    }
                case 2:
                    cout << "Digite o valor: ";
                    cin>>valor;
                    if(contaCliente->deposito(valor) == 1)
                    {
                        cout<<"Deposito de R$ "<<contaCliente->deposito(valor);
                        cout<<"efetuado">>endl;
                        break;
                    }
                    else
                    {
                        cout<<"Valor invalido">>endl;
                        //op = 2
                        continue;
                    }
                    
                    break;
                case 3:
                    if()
                    {
                        cout << "Saldo: R$ "<<contaCliente->getSaldo(senhain)<<endl;
                        break;
                    }
                    else
                    {
                    
                        
                    }
                
                }
                case 4:
                    atendimento = false;
                    break;
                }
            }
        }
        else
        {
            //confere_flags
            cout << "Senha invalida" << endl;
        }
    }
}
