#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    void rearrange(vector<int> a, int n, vector<int> &answer)
    {
        sort(a.begin(), a.end());
        int j = 0, k = n - 1;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                answer[i] = a[j++];
            else
                answer[i] = a[k--];
        }
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), answer(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        ob.rearrange(a, n, answer);

        for (int i = 0; i < n; i++)
            cout << answer[i] << " ";
        cout << endl;
    }
    return 0;
}