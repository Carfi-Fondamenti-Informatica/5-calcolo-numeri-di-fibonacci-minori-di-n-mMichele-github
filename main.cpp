#include <iostream>
using namespace std;

void fibonacci(int a)
{
    int p=1, q=1, ris=0;
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
}

int main()
{
    int n=0;
    cout << "Stabilire dopo quanti passaggi fermarsi nella sequenza di Fibonacci: " << endl;
    cin >> n;
    fibonacci(n);
    return 0;
}
