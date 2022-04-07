#include<iostream>
using namespace std;

int main()
{
    int n,m,crimeUntreate=0,police=0;

    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>m;

        if(m>0)
        {
            police+=m;
        }
        else
        {
            if(police<1)
            {
                crimeUntreate++;
            }
            else{
                police--;
            }
        }

    }
    cout<<crimeUntreate<<endl;
    return 0;
}
