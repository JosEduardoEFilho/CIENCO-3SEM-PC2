#include <iostream>
#include <locale>
using namespace std;

float Maior_Menor(float num1, float num2);

int main()
{
    setlocale(LC_ALL,"portuguese");

    float num1 = 0.0, num2 = 0.0;
    while (num1 == num2)
    {
        cout << "Digite um n�mero: ";
        cin >> num1;
        cout << "Digite outro n�mero: ";
        cin >> num2;
        cout << endl;

    }

    cout << "O maior n�mero � ";
    cout << Maior_Menor(num1, num2);
}

float Maior_Menor(float num1, float num2)
{
    if(num1 < num2)
    {
        return num2;
    }
    else
    {
        return num1;
    }
}
