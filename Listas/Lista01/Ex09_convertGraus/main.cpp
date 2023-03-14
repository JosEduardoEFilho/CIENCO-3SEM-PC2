#include <iostream>

using namespace std;

float convert(float GrausC, float GrausF);

int main()
{
    float GrausC, GrausF;

    cout << "Digite a temperatura em Graus Celsius: " <<endl;
    cin >> GrausC;

    cout << "Temperatura em °C: " << GrausC << "°" << endl;
    cout << "Temperatura em °F: " << convert(GrausC, GrausF) << "°" <<endl;
}

float convert(float GrausC, float GrausF)
{
    GrausF = (GrausC * 1.8) + 32;
    return GrausF;
}
