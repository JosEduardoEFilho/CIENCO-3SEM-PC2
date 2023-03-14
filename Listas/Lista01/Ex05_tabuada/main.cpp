#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");
    float num = 0.0;

    cout << "Digite um número: " << endl;
    cin >> num;
    system("Clear || cls");

    cout << "Tabuada do número " << num << endl;
    cout << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << num << " x " << i << " = " << num*i << endl;
    }
}
