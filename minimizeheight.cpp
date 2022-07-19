#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {

        sort(arr,arr+n);
        int res=arr[n-1]-arr[0];
        for(int i=1;i<n;i++)
        {
            int small=min(arr[0]+k,arr[i]-k);
            int large=max(arr[n-1]-k,arr[i-1]+k);
            if(small>=0)
            res=min(res,large-small);
        }
        return res;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
