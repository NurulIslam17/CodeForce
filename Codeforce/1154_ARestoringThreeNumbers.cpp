#include<iostream>
#include<algorithm>40 40 40 60

using namespace std;
int main()
{
    int a[4];

    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    sort(a,a+4);

    cout<<a[3]-a[2]<<" ";
    cout<<a[3]-a[1]<<" ";
    cout<<a[3]-a[0]<<" ";

    return 0;
}
