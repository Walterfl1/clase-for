#include <iostream>
using namespace std;

int main()
{
    int n;
    int primo = 1;

    cout << "Ingresa un numero: ";
    cin >> n;

    if (n <= 1)
    {
        primo = 0;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                primo = 0;
                break;
            }
        }
    }

    if (primo == 1)
    {
        cout << "Es primo." << endl;
    }
    else
    {
        cout << "No es primo." << endl;
    }

    return 0;
}
