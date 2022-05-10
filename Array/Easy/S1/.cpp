// { Driver Code Starts
#include <iostream>
#include <vector>

using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    vector<int> findMean(int arr[],int queries[],int n,int q)
    {
        vector<int> ans;
        int sum, j = 0;
        while(j < q){
            sum = 0;
            for(int i = queries[j]; i < queries[j + 1]; i++)
                sum += arr[i];
            ans.push_back(sum/(queries[j + 1] + 1 - queries[j]));
            j += 2;
        }
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int arr[n + 1],queries[2*q + 1];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        for(int i=0;i<2*q;i++){
            cin>>queries[i];
        }

        vector<int> ans;
        Solution ob;
        ans = ob.findMean(arr,queries,n,2*q);

        for(int i:ans)
            cout<<i<<" ";
        cout<<endl;

    }
    return 0;
}
  // } Driver Code Ends