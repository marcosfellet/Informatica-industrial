#ifndef CONTA_H

class Robot
{
  private:
    double PosicaoAtual[3];

  public:
    double getPosicaoAtual(char coordenada);
    void setPosicaoAtual(double X, double Y, double Z);
    virtual void Mover(double Xvel, double Yvel, double Zvel, double tempo) =0;


}
#endif
