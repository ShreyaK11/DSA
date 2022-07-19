#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
       vector<int>pos,neg;
       for(int i=0;i<n;i++)
       {
           if(arr[i]>0)
           pos.push_back(arr[i]);
           else
           neg.push_back(arr[i]);
       }
       int i=0,j=0;
       for(int k=0;k<n;k++)
       {
           if(k<pos.size())
           {
           arr[k]=pos[i];
           i++;}
           else
           {
                arr[k]=neg[j];
                j++;
           }
       }
    }
};

int main() {

	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);

        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}
