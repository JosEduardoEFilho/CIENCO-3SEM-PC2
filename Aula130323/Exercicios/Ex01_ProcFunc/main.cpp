#include <iostream>
#include <locale>
using namespace std;

void Entrada();

int main()
{
    setlocale(LC_ALL,"portuguese");

    Entrada();
}

void Entrada()
{
    int num = 0;

    cout << "informe um valor..." << endl;
    cin >> num;

    if(num%2 == 0)
    {
        cout << "O n�mero " << num << " � par!" << endl;
    }
    else
    {
        cout << "O n�mero " << num << " n�o � par!" << endl;
    }
}

