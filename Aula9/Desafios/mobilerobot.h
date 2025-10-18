#ifndef MOBILEROBOT_H
#define MOBILEROBOT_H

#define CHAO 0
#define ERROR -1


class Robot
{
  private:
    double PosicaoAtual[3];
    double x, y, z;
  public:
    Robot(x, y, z);
    ~Robot();
    double getPosicaoAtual(char coordenada);
    void setPosicaoAtual(double X, double Y, double Z);
    virtual void Mover(double Xvel, double Yvel, double Zvel, double tempo) =0;
    int validaPosicao(double X, double Y, double Z);


};

class Quadrotor: public Robot
{
  private:

  public:
  Mover(double Xvel, double Yvel, double Zvel, double tempo);

};

class RoboTerrestre: public Robot
{
  private:
    
  public:
  Mover(double Xvel, double Yvel, double Zvel, double tempo);

};

#endif
