#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    int arr[100];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0; i<n; i++)
    {
        if(arr[i]<arr[n-1])
        {
            sum+=(arr[n-1]-arr[i]);
        }
    }
    cout<<sum<<endl;
    return 0;
}
