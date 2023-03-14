#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");
    float vlrInicial = 0.0, taxaJuros = 0.0, vlrFuturo = 0.0;
    int qtdMes = 0;

    cout << "Digite o valor que deseja aplicar: " << endl;
    cout << "R$ ";
    cin >> vlrInicial;

    cout << "Digite a taxa de juros desejada: " << endl;
    cin >> taxaJuros;

    cout << "Digite o valor esperado: " << endl;
    cout << "R$ ";
    cin >> vlrFuturo;

    while(vlrInicial<=vlrFuturo)
    {
        cout << "Mês: " << qtdMes << endl;
        cout << "Valor: R$ " << vlrInicial << endl;
        vlrInicial = vlrInicial + (vlrInicial*(taxaJuros/100));
        qtdMes++;
    }

    cout << "Quantidade de meses: " << qtdMes << endl;
    cout << "Quantidade de anos: " << qtdMes/12 << endl;

}
