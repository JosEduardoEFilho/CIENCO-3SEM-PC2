#include <iostream>
#include <cstdlib>
#include <locale>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");
    srand(time(NULL));

    int aleatorio = (rand()%6);
    int num = 0, falha = 0;

    cout << "Tente acertar o número que está de 0 à 6!" << endl;

    do
    {
        cout << "Digite um número: " << endl;
        cin >> num;
        system("clear||cls");
        falha++;

    }
    while((num!=aleatorio) && (falha != 3));

    if(falha == 3)
    {
        cout << "Você perdeu!!!" << endl;
        cout << "O número era: " << aleatorio << endl;
    }
    else
    {
        cout << "Parabéns você acertou!!!" << endl;
        cout << "Tentativas: " << falha << endl;
    }
}
