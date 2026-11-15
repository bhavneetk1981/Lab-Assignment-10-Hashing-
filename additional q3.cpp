
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int a[] = {1, 2, 5, 4, 0, 2, 1};
    int b[] = {2, 4, 5, 0, 1, 1, 2};

    int n = 7;

    unordered_map<int, int> freq;

    for(int i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }

    for(int i = 0; i < n; i++)
    {
        freq[b[i]]--;
    }

    for(auto x : freq)
    {
        if(x.second != 0)
        {
            cout << "false";
            return 0;
        }
    }

    cout << "true";

    return 0;
}

