#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int minJumps(int arr[], int n){
          int farthest(0),jump(0),reach(0);

        for(int i=0;i<n-1;i++)
        {
            farthest=max(farthest,arr[i]+i);

            if(i==reach)
            {
                jump++;
                reach=farthest;
            }

        }

        if(reach<n-1)
            return -1;


        return jump;

    }
};



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
