#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");

    float volts, resist, amp, pot;
    char op;

    cout << "Digite o valor da voltagem (V): " << endl;
    cin >> volts;

    cout << "Digite o valor da resistência (R): " << endl;
    cin >> resist;

    cout << "Escolha qual grandeza deseja saber: " << endl;
    cout << "(P) - Potência" << endl;
    cout << "(V) - Voltagem" << endl;
    cout << "(I) - Corrente" << endl;
    cout << "(R) - Resistência" << endl;
    cout << "Pressione qualquer tecla para finalizar!" << endl;
    cin >> op;

    op = toupper(op);

    switch(op)
    {
    case 'P':

        amp = volts/resist;
        pot = volts*amp;

        cout << "Potência: " << pot << endl;
        break;

    case 'V':

        cout << "Voltagem: " << volts << endl;
        break;

    case 'I':

        amp = volts/resist;
        cout << "Corrente: " << amp << endl;
        break;

    case 'R':

        cout << "Resistência: " << resist << endl;
        break;

    default:
        break;
    }
}
