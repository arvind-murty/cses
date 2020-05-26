

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int zeros = 0;

    for (int i = 1; true; i++)
    {
        if ((int) pow(5,i) > n)
            break;

        zeros += n / ((int) pow(5, i));
    }

    cout << zeros << endl;

    return 0;
}
