
#include <iostream>
using namespace std;

int main()
{
    int size = 1;
    cin >> size;
    bool nums[size];
    for (int i = 0; i < size; i++)
    {
        nums[i] = 0;
    }
    for (int i = 1; i < size; i++)
    {
        int j;
        cin >> j;
        nums[j-1] = 1;
    }

    for(int i = 0; i < size; i++)
    {
        if (nums[i] == 1)
            continue;
        int num = i + 1;   
        cout << num << endl;
        break;
    }


    return 0;
}
