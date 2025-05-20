#include <iostream>

using namespace std;
int main()
{
   
    int n;
    cout << "Cuantos veces quieres que cuente? ";
    cin >> n;
    for (int i = 0; i < n + 1; i++)
    {
        if (i%2==0)
        {
            cout<<"es par"<< i << endl; 
        } else
        {
            cout<<"es impar"<< endl;
        }
        
        
    }

    return 0;
}