
#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int arr[] = {0, -1, 2, -3, 1};
    int n = 5;
    int target = -2;

    unordered_set<int> s;

    for(int i = 0; i < n; i++)
    {
        int required = target - arr[i];

        if(s.find(required) != s.end())
        {
            cout << "true";
            return 0;
        }

        s.insert(arr[i]);
    }

    cout << "false";

    return 0;
}

