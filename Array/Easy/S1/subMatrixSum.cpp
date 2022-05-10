#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    long long subMatrixSum(vector<vector<int>> arr, int n, int m, int x1, int y1, int x2, int y2)
    {
        --x1;
        --x2;
        --y1;
        --y2;
        long long ans = 0;
        for (int i = x1; i <= x2; i++)
            for (int j = y1; j <= y2; j++)
                ans += arr[i][j];
        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x1, y1, x2, y2, x;
        cin >> n >> m;
        vector<vector<int>> arr(n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> x;
                arr[i].push_back(x);
            }
        }
        cin >> x1 >> y1 >> x2 >> y2;
        Solution ob;
        auto ans = ob.subMatrixSum(arr, n, m, x1, y1, x2, y2);
        cout << ans << "\n";
    }
    return 0;
}