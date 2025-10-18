#ifndef MOBILEROBOT_H
#define MOBILEROBOT_H

#define CHAO 0
#define ERROR -1


class Robot
{
  private:
    double PosicaoAtual[3];

  public:
    double getPosicaoAtual(char coordenada);
    void setPosicaoAtual(double X, double Y, double Z);
    virtual void Mover(double Xvel, double Yvel, double Zvel, double tempo) =0;
    int validaPosicao(double X, double Y, double Z);


}

class Quadrotor: public Robot
{
  private:

  public:

  

class RoboTerrestre: public Robot
{
  private:
    
  public:



}

#endif
