#include<iostream>
using namespace std;
int main()
{
    int tc,n,rem=0,i=0,count=0;
    cin>>tc;
    while(tc--)
    {
        int j, arr[100000];
        cin>>n;

        if(n>=1000)
        {
            rem=n%1000;
            arr[i++]=n-rem;
            count++;
            n=n%1000;
        }
        if(n>=100)
        {
            rem=n%100;
            arr[i++]=n-rem;
            count++;
            n=n%100;
        }
        if(n>=10)
        {
            rem=n%10;
            arr[i++]=n-rem;
            count++;;
            n=n%10;
        }
        if(n<10 && n>0)
        {
            arr[i++]=n;
            count++;
        }

        cout<<count<<endl;

        for(j=0; j<i; j++)
        {
            cout<<arr[j]<<" ";
        }
        count=0;
        i=0;
    }
}
