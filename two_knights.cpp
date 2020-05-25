

#include <iostream>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    for (long long int i = 1; i <= n; i++)
    {
        cout << ((i-4)*(i-4)*(i*i-9) + 4*(i-4)*(i*i-7) + (4*(i-4) + 4)*(i*i-5) + 8*(i*i-4) + 4*(i*i-3))/2 << endl;
    }

    return 0;
}
