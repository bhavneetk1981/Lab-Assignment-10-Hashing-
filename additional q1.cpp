
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int arr[] = {1, 2, 2, 4, 1};
    int n = 5;

    unordered_map<int, int> freq;

    for(int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    int maxFreq = 0;
    int ans = 0;

    for(auto x : freq)
    {
        if(x.second > maxFreq ||
          (x.second == maxFreq && x.first > ans))
        {
            maxFreq = x.second;
            ans = x.first;
        }
    }

    cout << "Most frequent element: " << ans;

    return 0;
}

