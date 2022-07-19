
#include <bits/stdc++.h>

using namespace std;

int maxwater(int Arr[] , int n)
{
    int reserve=0;
    for(int i=1; i < n-1; i++)
    {
        int left=Arr[i];
        for(int j=0; j < i; j++)
        {
            left=max(left , Arr[j]);
        }
        int right=Arr[i];
        for(int j=i+1; j < n; j++)
        {
            right=max(right,Arr[j]);
        }
        reserve=reserve+(min(left,right)-Arr[i]);
    }
    return reserve;
}
int main()
{

    int arr[] = {1, 4, 2, 3, 5, 1, 0, 2, 5, 1, 1, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << maxwater(arr, n);


    return 0;
}
