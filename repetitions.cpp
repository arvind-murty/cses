

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int maxLength = 1;
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        char c = str.at(i);
        int len = 1;
        if (i < str.length() - 1)
        {
            while (c == str.at(i+1))
            {
                ++len;
                ++i;
                
                if (i >= (str.length()-1))
                    break;
            }
        }
        if (len > maxLength)
            maxLength = len;
    }

    cout << maxLength << endl;

    return 0;
}
