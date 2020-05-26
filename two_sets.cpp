

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 4 == 1 || n % 4 == 2)
        cout << "NO" << endl;
    else if (n % 4 == 0)
    {
        cout << "YES" << endl;
        cout << n/2 << endl;
        for (int i = 1; i <= n/4; i++)
        {
            cout << i << " " << n-i+1 << " ";
        }
        cout << endl << n/2 << endl;
        
        for (int i = 1 + n/4; i <= n/2; i++)
        {
            cout << i << " " << n-i+1 << " ";
        }
        cout << endl;
    }
    else if (n == 3)
    {
        cout << "YES" << endl << "2" << endl << "1 2" << endl << "1" << endl << "3" << endl;
    }
    else
    {
        cout << "YES" << endl;
        cout << (n+1)/2 << endl;

        for (int i = 1; i <= (n+1)/4; i++)
        {
            cout << i << " " << n-i << " ";
        }
        cout << endl << (n-1)/2 << endl;

        cout << (n+5)/4 << " " << n << " " << (n+1)/2 << " ";
        for (int i = (n+9)/4; i <= (n-1)/2; i++)
        {
            cout << i << " " << n-i+1 << " ";
        }
        cout << endl;
    }
    
    return 0;
}
