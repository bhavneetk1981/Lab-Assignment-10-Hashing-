
#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 1};
    int n = 4;

    unordered_set<int> s;

    for(int i = 0; i < n; i++)
    {
        if(s.find(arr[i]) != s.end())
        {
            cout << "true";
            return 0;
        }

        s.insert(arr[i]);
    }

    cout << "false";

    return 0;
}

