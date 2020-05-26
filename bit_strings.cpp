

#include <iostream>
using namespace std;

int main()
{
    long long int n;
    long long int result = 1;
    cin >> n;

    for (long long int i = 0; i < n; i++)
    {
        result *= 2;
        result = result % 1000000007;
    }
    cout << result << endl;

    return 0;
}
