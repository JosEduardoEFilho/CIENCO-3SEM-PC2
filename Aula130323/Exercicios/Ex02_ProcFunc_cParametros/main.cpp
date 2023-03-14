#include <iostream>
#include <locale>

using namespace std;

void vPrimo(int num);

int main()
{
    setlocale(LC_ALL,"portuguese");

    int num = 0;

    cout << "Digite um número..." << endl;
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
        cout << "O número " << num << " é primo!" << endl;
    }
    else
    {
        cout << "O número " << num << " não é primo!" << endl;

    }
}
