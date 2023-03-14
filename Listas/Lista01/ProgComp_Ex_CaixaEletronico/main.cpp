#include <iostream>

using namespace std;

int main()
{
    int valor = 0, rest = 0, total = 0;
    int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0;

    cout << "Digite um valor: " << endl;
    cout << "R$";
    cin >> valor;

    if(valor >= 100)
    {
        n100 = valor/100;
        rest = valor%100;
    }

    if(rest >= 50)
    {
        n50 = rest/50;
        rest = rest%50;
    }

    if(rest >= 20)
    {
        n20 = rest/20;
        rest = rest%20;
    }
    if(rest >= 10)
    {
        n10 = rest/10;
        rest = rest%10;
    }
    if(rest >= 5)
    {
        n5 = rest/5;
        rest = rest%5;
    }
    if(rest >= 2)
    {
        n2 = rest/2;
        rest = rest%2;
    }
    if(rest >= 1)
    {
        n1 = rest/1;
        rest = rest%1;
    }

    total = ((n100*100)+(n50*50)+(n20*20)+(n10*10)+(n5*5)+(n2*2)+(n1*1));


    cout << "|NOTAS|\tQuantidade|\tSoma|" << endl;
    cout << "|---------------------------|" << endl;
    cout << "|R$100\t" << n100 <<"\t\t"<< n100*100 << endl;
    cout << "|R$050\t" << n50 <<"\t\t"<< n50*50 << endl;
    cout << "|R$020\t" << n20 <<"\t\t"<< n20*20 <<endl;
    cout << "|R$010\t" << n10 <<"\t\t"<< n10*10 <<endl;
    cout << "|R$005\t" << n5 <<"\t\t"<< n5*5 <<endl;
    cout << "|R$002\t" << n2 <<"\t\t"<< n2*2 <<endl;
    cout << "|R$001\t" << n1 <<"\t\t"<< n1*1 <<endl;
    cout << "|---------------------------|" << endl;
    cout << "|TOTAL\t\t\t" << total << endl;
    cout << "+---------------------------+" << endl;



}
