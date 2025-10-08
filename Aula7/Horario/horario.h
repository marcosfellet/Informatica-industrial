#ifndef HORARIO_H
#define HORARIO_H

class Horario
{
private:
    int hora;
    int minuto;
    int segundo;
public:
    Horario(int = 12, int = 0, int = 0); // construtor com parametros-padrao => 4 formas de estanciar os objetos

    // funções get
    int getHora() const; // const garante que as funcoes ge nao alterem as variaveis, mas apenas, leem-nas 
    int getMinuto() const;
    int getSegundo() const;

    // funções set
    void setHorario(int, int, int);
    void setHora(int);
    void setMinuto(int);
    void setSegundo(int);

    void imprimeHorario() const;
};

#endif
