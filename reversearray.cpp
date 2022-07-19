#include <iostream>
using namespace std;

int main() {
int t,n;
cin>>t;
for(int i=0;i<t;i++)
{
    cin>>n;
    int A[n];
     for(int j=0;j<n;j++)
   {
       cin>>A[j];
   }
   int a=0,b=n-1;
   while(a<b)
   {
       int temp=A[a];
       A[a]=A[b];
       A[b]=temp;
       a++;
       b--;
   }
   for(int j=0;j<n;j++)
   {
       cout<<A[j]<<" ";
   }
}

	return 0;
}
