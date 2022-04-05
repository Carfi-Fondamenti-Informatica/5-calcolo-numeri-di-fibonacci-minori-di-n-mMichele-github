#include <iostream>
using namespace std;

int fibonacci(int a)
{
    int p=0, q=1, ris=0;
    if (a>=2)
    {
        cout << p << endl << q << endl;
        for(int i=3; i<=a; i++)
        {
            ris = p + q;
            cout << ris << endl;
            p = q;
            q = ris;
        }
    }
    else
    {
        cout <<"errore"<< endl;
    }
    return 0;
}

int main()
{
    int n=0;
    cout << "Stabilire dopo quanti passaggi fermarsi nella sequenza di Fibonacci: " << endl;
    cin >> n;
    int sequenza = fibonacci(n);
    return sequenza;
}
