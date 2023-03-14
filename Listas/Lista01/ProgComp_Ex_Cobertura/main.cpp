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

    cout << "Dimensões do comodo em METROS" << endl;
    cout << "Digite a largura do comodo: " << endl;
    cin >> larguraC;
    cout << endl;

    cout << "Digite a profundidade do comodo: " << endl;
    cin >> profundC;
    cout << endl;
    system("clear||cls");

    areaC = larguraC*profundC;

    cout << "Dimensões do piso em CENTÍMETROS" << endl;
    cout << "Digite a largura do piso: " << endl;
    cin >> larguraP;
    cout << endl;

    cout << "Digite a profundidade do piso: " << endl;
    cin >> profundP;
    cout << endl;
    system("clear||cls");

    areaP = ((larguraP/100)*(profundP/100));

    qtdPiso = areaC/areaP;

    cout << "Serão nescessários " <<ceil(qtdPiso) << " pisos!" << endl;
}
