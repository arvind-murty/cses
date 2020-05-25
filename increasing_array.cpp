

#include <iostream>
using namespace std;

int main()
{
    long int size;
    cin >> size;
    long int max = 0;
    long int total = 0;

    for (int i = 0; i < size; i++)
    {
        long int num;
        cin >> num;
        if (num > max)
            max = num;
        total += max - num;
    }

    cout << total << endl;

    return 0;
}
