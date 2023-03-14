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

    cout << "Digite um número..." << endl;
    cin >> num;

    cout << endl;
    cout << num <<"² = " << pow(num,2) << endl;

    return pow(num,2);
}
