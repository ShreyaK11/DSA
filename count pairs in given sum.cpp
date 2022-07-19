#include <bits/stdc++.h>
using namespace std;


class Solution{
public:
    int getPairsCount(int arr[], int n, int k) {

 unordered_map<int,int> map;
        int cnt=0;
        for(int i=0; i<n; i++){
            int diff=k-arr[i];
            if(map.find(diff)!=map.end())
                 cnt += map[diff];
            map[arr[i]]++;
        }
        return cnt;
    }
};



int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }

    return 0;
}
