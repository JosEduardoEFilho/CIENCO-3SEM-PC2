#include <iostream>
#include <locale>
#include <cstdlib>
using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");

    double distPerc = 0.0, vlrComb = 0.0, Km_lts = 0.0;
    double qtdComb = 0.0, vlrTotalComb = 0.0;

    cout << "Digite quantos quilometros voc� ir� percorrer: " << endl;
    cin >> distPerc;
    system("clear || cls");

    cout << "Digite o valor do combust�vel: R$ ";
    cin >> vlrComb;
    system("clear || cls");

    cout << "Digite quantos Km/L o ve�culo faz: " << endl;
    cin >> Km_lts;
    system("clear || cls");

    qtdComb = (distPerc/Km_lts);
    vlrTotalComb = (qtdComb * vlrComb);

    cout << "Combut�vel nescess�rio: " << qtdComb << " litros" << endl;
    cout << "Gasto de combust�vel: R$" << vlrTotalComb << endl;
}
