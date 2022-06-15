#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,k,points,participants=0;
    cin>>n>>k;
    if(n>=k)
    {
        vector<int>sel;
        for(int i=0; i<n; i++)
        {
            cin>>points;
            sel.push_back(points);
        }

        for(int i=0; i<n; i++)
        {
            if(sel[i]>=sel[k-1] && sel[i]>0)
            {
                participants+=1;
            }
        }

        cout<<participants;

    }
}
