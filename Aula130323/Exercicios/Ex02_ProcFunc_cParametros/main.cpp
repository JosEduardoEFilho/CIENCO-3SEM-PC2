#include <iostream>
#include <locale>

using namespace std;

void vPrimo(int num);

int main()
{
    setlocale(LC_ALL,"portuguese");

    int num = 0;

    cout << "Digite um n�mero..." << endl;
    cin >> num;

    vPrimo(num);
}

void vPrimo(int num)
{
    int cont = 0;
    for(int i = 1; i <= num; i++)
    {
        if(num%i == 0)
        {
            cont++;
        }
    }

    if(cont == 2)
    {
        cout << "O n�mero " << num << " � primo!" << endl;
    }
    else
    {
        cout << "O n�mero " << num << " n�o � primo!" << endl;

    }
}
