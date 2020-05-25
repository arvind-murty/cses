

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    if (n == 1)
        cout << "1" << endl;
    else if (n <= 3 && n > 1)
        cout << "NO SOLUTION" << endl;
    else if (n == 4)
        cout << "2 4 1 3" << endl;
    else
    {
        for (int i = 0; i < (n + 1)/2; i++)
            cout << 2*i+1 << " ";
        
        for (int i = 1; i <= n/2; i++)
            cout << 2*i << " ";

        cout << endl;
    }

    return 0;
}
