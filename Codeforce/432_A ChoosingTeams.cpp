#include<iostream>
using namespace std;
int main()
{
    int n,k,count=0;
    cin>>n>>k;
    int arr[100];

    for(int i=0; i<n; i++)
    {
        int y;
        cin>>y;

        if(y+k <=5)
        {
            count++;
        }
    }

    cout<<count/3<<endl;
}
