#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

int quad();

int main()
{
    setlocale(LC_ALL,"portuguese");

    quad();
}

int quad()
{
    int num = 0;

    cout << "Digite um n�mero..." << endl;
    cin >> num;

    cout << endl;
    cout << num <<"� = " << pow(num,2) << endl;

    return pow(num,2);
}
