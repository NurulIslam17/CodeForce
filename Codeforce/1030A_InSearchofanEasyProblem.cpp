
#include<iostream>
using namespace std;
int main()
{
    int n,iN,flag=0;

    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>iN;
        if(iN==1)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"HARD"<<endl;
    }
    else
    {
        cout<<"EASY"<<endl;
    }

}
