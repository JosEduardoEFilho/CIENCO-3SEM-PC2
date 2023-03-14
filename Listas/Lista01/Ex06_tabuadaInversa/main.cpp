#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");
    float num = 0.0;

    cout << "Digite um número: " << endl;
    cout << endl;
    cin >> num;
    system("Clear || cls");

    cout << "Tabuada do número " << num << endl;
    for (int i = 10; i >= 1; i--)
    {
        cout << num << " x " << i << " = " << num*i << endl;
    }
}
