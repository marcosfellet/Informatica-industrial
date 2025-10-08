#include <iostream>
#include "horario.h"

using namespace std;

int main()
{

    Horario h1(15);
    const Horario h2(12); // objeto constante, no qual so podem ser usados metodos constantes
    h1.imprimeHorario();

    return 0;
}
