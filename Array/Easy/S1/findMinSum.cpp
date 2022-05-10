#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    long long findMinSum(vector<int> A, vector<int> B, int N)
    {
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        long long ans = 0;
        for (int i = 0; i < N; i++)
            ans += abs(A[i] - B[i]);
        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        vector<int> A(N), B(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++)
        {
            cin >> B[i];
        }
        Solution ob;
        cout << ob.findMinSum(A, B, N) << endl;
    }
}