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
        cout << "O número " << num << " é par!" << endl;
    }
    else
    {
        cout << "O número " << num << " não é par!" << endl;
    }
}

