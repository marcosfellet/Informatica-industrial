#ifndef CONTA_H
#define SENHA_CORRETA 1
#define ERRO -2 // utilizado para senha invalida
#define VALIDO 2
#define INVALIDO -1

class Conta
{
private:
    double saldo;
    int senha;
public:
    Conta();
    Conta(int senha, int numero, std::string titular, std::string tipo, double saldo);
    ~Conta();
    int numero;
    std::string titular;
    std::string tipo;
    void exibeDados();
    double getSaldo(int senha);
    void setSaldo(double valor);
    void setSenha(int novaSenha);
    void deposito(double valor);
    void saque(int senha, double valor);
    void transacao(double valor, int id1, int id2);
    bool validaSenha(int senha);

};


#endif
