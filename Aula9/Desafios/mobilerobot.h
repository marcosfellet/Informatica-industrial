#ifndef MOBILEROBOT_H
#define MOBILEROBOT_H

#define SENHA_CORRETA 1
#define CHAO 0
#define ERROR -1


class Robot
{
  private:
    double PosicaoAtual[3];
    unsigned char senha = 000000;
  public:
    Robot(char senha, double x, double y, double z);
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
  int Mover(double Xvel, double Yvel, double Zvel, double tempo) override;

};

class RoboTerrestre: public Robot
{
  private:
    
  public:
  int Mover(double Xvel, double Yvel, double Zvel, double tempo) override;

};

#endif
