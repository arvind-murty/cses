

#include <iostream>
#include <string>
using namespace std;

int factorial(unsigned int n);
string listAll(int count[26], int length);

int main()
{
    string str;
    cin >> str;

    int count[26];
    
    for (int i = 0; i < 26; i++)
        count[i] = 0;

    for (int i = 0; i < str.length(); i++)
        count[str.at(i) - 'a'] += 1;

    int numStrings = factorial(str.length());
    for (int i = 0; i < 26; i++)
    {
        if (count[i] == 0)
            continue;

        numStrings /= factorial(count[i]);
    }
    cout << numStrings << endl;
    
    cout << listAll(count, str.length()); 

    return 0;
}

int factorial(unsigned int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n-1);
}

string listAll(int count[26], int length)
{
    if (length <= 1)
    {
        for (int i = 0; i < 26; i++)
        {
            if (count[i] != 0)
            {
                return string(1, (char) ('a' + i)) + "\n";
            }
        }
    }
    
    string str = "";
    for (int i = 0; i < 26; i++)
    {
        if (count[i] == 0)
            continue;
        
        --count[i];
        string temp = listAll(count, length-1);
        ++count[i];

        for (int j = 0; j < temp.length(); j += length)
        {
            str = str + string(1, (char) ('a' + i));
            str = str + temp.substr(j, length);
        }
    }

    return str;
}
