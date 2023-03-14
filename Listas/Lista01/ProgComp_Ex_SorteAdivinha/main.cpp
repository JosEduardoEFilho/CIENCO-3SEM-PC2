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

    cout << "Tente acertar o n�mero que est� de 0 � 6!" << endl;

    do
    {
        cout << "Digite um n�mero: " << endl;
        cin >> num;
        system("clear||cls");
        falha++;

    }
    while((num!=aleatorio) && (falha != 3));

    if(falha == 3)
    {
        cout << "Voc� perdeu!!!" << endl;
        cout << "O n�mero era: " << aleatorio << endl;
    }
    else
    {
        cout << "Parab�ns voc� acertou!!!" << endl;
        cout << "Tentativas: " << falha << endl;
    }
}
