

#include <iostream>
using namespace std;

int main()
{
    long long int size;
    cin >> size;
    long long int xArr[size];
    long long int yArr[size];

    for (long long int i = 0; i < size; i++)
    {
        long long int xTemp, yTemp;
        cin >> yTemp;
        cin >> xTemp;
        xArr[i] = xTemp;
        yArr[i] = yTemp;
    }

    for (long long int i = 0; i < size; i++)
    {
        long long int x = xArr[i];
        long long int y = yArr[i];
        if (x >= y)
        {
            if (x % 2 == 0)
                cout << (x-1)*(x-1)+y << endl;
            else
                cout << x*x-y+1 << endl;
        }
        else
            if (y % 2 == 0)
                cout << y*y-x+1 << endl;
            else
                cout << (y-1)*(y-1)+x << endl;
    }

    return 0;
}
