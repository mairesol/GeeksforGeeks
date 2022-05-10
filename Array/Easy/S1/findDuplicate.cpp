#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int findDuplicate(int a[]);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A[10];
        for (int i = 0; i < 10; i++)
            cin >> A[i];

        cout << findDuplicate(A) << endl;
    }
    return 0;
}

int findDuplicate(int A[])
{
    sort(A, A + 10);
    for (int i = 0; i < 10; i++)
        if (A[i] == A[i + 1])
            return A[i];
    return -1;
}