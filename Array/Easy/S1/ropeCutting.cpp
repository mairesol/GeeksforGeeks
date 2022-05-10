#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> RopeCutting(vector<int> arr, int n)
    {
        vector<int> ans;
        sort(arr.rbegin(), arr.rend());

        int a;
        while (arr.size())
        {
            a = arr.back();
            while (arr.back() == a)
                arr.pop_back();
            ans.push_back(arr.size());
        }
        ans.pop_back();
        return ans;
    }
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<int> v;
        Solution ob;
        v = ob.RopeCutting(arr, n);
        for (int i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}