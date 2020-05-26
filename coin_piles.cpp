

#include <iostream>
using namespace std;

int main()
{
    long int t;
    cin >> t;
    long int aArr[t];
    long int bArr[t];

    for (long int i = 0; i < t; i++)
    {
        cin >> aArr[i];
        cin >> bArr[i];
    }

    for (long int i = 0; i < t; i++)
    {
        if (2*aArr[i] - bArr[i] < 0 || 2*bArr[i] - aArr[i] < 0)
            cout << "NO" << endl;
        else if ((2*aArr[i] - bArr[i]) % 3 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
