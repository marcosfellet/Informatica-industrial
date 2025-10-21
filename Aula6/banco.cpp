#include "banco.h"
#include <iostream>

using namespace std;


Banco::Banco() //O construtor criara 4 contas
{
    //int Banco::CriaContas()

    this->numContas = 0;
    this->contas = new Contas[this->numContas];
    
    //this->CriaContas();
    
    
}
// como o construtor cria 4 contas, cria-se uma variavel para ser o indice a partir desse valor:
//unsigned char index = 4;
Banco::~Banco()
{
    
}

int Banco::CriaContas() // definindo o metodo de criacao de contas
{
    int nova_senha, novo_numero;
    string novo_titular, novo_tipo;
    double saldo_inicial;
    unsigned char cancela;
    
    cout<<"Para criar uma nova conta, primeiramente, digite o seu nome completo"<<endl;
    cin>> novo_titular;
    cout<<"Digite uma senha de 8 digitos"<<endl;
    cin>> nova_senha;
    cout<<"Digite o tipo da conta"<<endl;
    cin>> novo_tipo;
    cout<<"Para cancelar a operaca, digite 1"<<endl;
    cin>> cancela;
    if(cancela != 1)
    {
        novo_numero = this->numContas + 1;
        
        saldo_inicial = 0;
    
        Conta novaConta = Conta(nova_senha, novo_numero, novo_titular, novo_tipo, saldo_inicial);
    
        Conta* novo_vetor = new Conta[this->numContas + 1];
    
        for(int i = 0; i<this->numContas + 1; i++){
            novo_vetor[i] = this->contas[i];   
        }
        delete[] this->contas;
        
        novo_vetor[this->numContas] = novaConta;
        this->contas = novo_vetor; 
        this->numContas ++;
    
        return VALIDO;
    }
    else
    {
        return ERRO;
    }
}
/*
A ideia e nao apagar as posicoes das contas deletadas, mas sim, alterar seus dados com 
alguma informacao padrao, para que possam ser sobrescritas quand for criada uma conta nova
*/
int Banco::ApagaContas(*Conta contaCliente, int senha, *int numC)
{
    contaCliente 
    
    int* posicoes_livres = new ids[]; // cria poteiro para gardar as posicoes livres dos ids das contas
       
}

Conta *Banco::buscaConta(int numero)//Retorna o endereço da conta que possuir o mesmo numero informado
{
    for (int i = 0; i < this->numContas; i++)
    {
        if (numero == this->contas[i].numero)
        {
            return &this->contas[i];
        }
    }

    return nullptr;
}

void Banco::atendimento() //Realiza o atendimento ao cliente(Função chamada na main)
{
    Conta *contaCliente;
    int numC = 0;
    int senhain;
    //unsigned char flag = 100; // variavel que verifica quais mensagens irao aparecer no 
    bool atendimento = true;
    cout << "Bem vindo ao sistema de atendimento do banco" << endl;
    cout << "Caso deseje acessar a sua conta, digite seu numero, caso deseje criar uma nova conta, digite 1 ";
    cin >> numC;
    

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
                cout << "Qual operacao deseja fazer? (1 - Saque, 2 - Deposito, 3 - Transferencia 4 - Ver Saldo, 5 - Sair): ";
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
                        valor = 0;
                        cin >> valor;
                        if(contacliente->transferencia(valor, c1, c2, senhain))
                        {
                            cout<<"Transferencia de R$";
                            cout<<valor;
                            cout<<"efetuada">>endl;
                        }
                        else
                        {
                            cout<<"Senha invalida">>endl;
                        }
                case 4:
                    if()
                    {
                        cout << "Saldo: R$ "<<contaCliente->getSaldo(senhain)<<endl;
                        break;
                    }
                    else
                    {
                    
                        
                    }
                case 5:
                    atendimento = false;
                    break;
                
                }
            }
        }
        
    }
}
