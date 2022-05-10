#include <iostream>
#include <vector>

using namespace std;

vector<int> inversePermutation(vector<int> arr, int size);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<int> ans = inversePermutation(arr, n);
        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}

vector<int> inversePermutation(int arr[], int size)
{
    vector<int> ans(size);
    for (int i = 1; i <= size; i++)
        ans[arr[i - 1] - 1] = i;
    return ans;
}