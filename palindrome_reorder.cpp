

#include <iostream>
#include <string>
using namespace std;

int main()
{
    long int count[26];

    for (int i = 0; i < 26; i++)
    {
        count[i] = 0;
    }

    string str;
    cin >> str;

    for (long int i = 0; i < str.length(); i++)
    {
        count[str.at(i) - 'A'] += 1;
    }

    bool solution = true;
    int numOdd = 0;
    int oddChar = 26;

    for (int i = 0; i < 26; i++)
    {
        if (count[i] % 2 != 0)
        {
            oddChar = i;
            ++numOdd;
        }
    }
    
    if (numOdd > 1)
    {
        cout << "NO SOLUTION";
        solution = false;
    }

    if (solution)
    {
        for (int i = 0; i < 26; i++)
        {
            if (i == oddChar)
                continue;
            
            for (long int j = 0; j < count[i]/2; j++)
                cout << ((char) ('A'+i));
        }
        if (oddChar < 26)
        {
            for (long int i = 0; i < count[oddChar]; i++)
                cout << ((char) ('A'+oddChar));
        }

        for (int i = 25; i >= 0; i--)
        {
            if (i == oddChar)
                continue;

            for (long int j = 0; j < count[i]/2; j++)
                cout << ((char) ('A'+i));
        }
    }
    cout << endl;
    
    for (int i = 0; i < 26; i++)
    {
        cout << count[i] << endl;
    }

    return 0;
}
