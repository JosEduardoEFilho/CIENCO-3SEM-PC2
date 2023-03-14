#include <iostream>
#include <locale>

using namespace std;

double Calculo(double salAtual, double percReaj);

int main()
{
    setlocale(LC_ALL,"portuguese");

    double salAtual, percReaj;

    Calculo(salAtual, percReaj);
}

double Calculo(double salAtual, double percReaj)
{
    double novoSal = 0.0;

    cout << "Digite o salário atual..." << endl;
    cout << "R$";
    cin >> salAtual;

    cout << "Digite o percentual de reajuste..." << endl;
    cin >> percReaj;

    novoSal = (salAtual + (salAtual * (percReaj/100)));

    cout << endl;
    cout << "Novo salário..." << endl;
    cout << "R$" << novoSal << endl;

    return novoSal;
}
