#include <iostream>
#include <locale>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");

    double areaC, larguraC, profundC;
    double areaP, larguraP, profundP;
    double qtdPiso;

    cout << "Dimens�es do comodo em METROS" << endl;
    cout << "Digite a largura do comodo: " << endl;
    cin >> larguraC;
    cout << endl;

    cout << "Digite a profundidade do comodo: " << endl;
    cin >> profundC;
    cout << endl;
    system("clear||cls");

    areaC = larguraC*profundC;

    cout << "Dimens�es do piso em CENT�METROS" << endl;
    cout << "Digite a largura do piso: " << endl;
    cin >> larguraP;
    cout << endl;

    cout << "Digite a profundidade do piso: " << endl;
    cin >> profundP;
    cout << endl;
    system("clear||cls");

    areaP = ((larguraP/100)*(profundP/100));

    qtdPiso = areaC/areaP;

    cout << "Ser�o nescess�rios " <<ceil(qtdPiso) << " pisos!" << endl;
}
