#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,mg,pole=0;

    cin>>n;
    vector<int>val;
    for(int i=0; i<n; i++)
    {
        cin>>mg;
        val.push_back(mg);

    }
    for(int i=0; i<n; i++)
    {
        if(val[i]!=val[i+1]){
            pole+=1;
        }
    }
    cout<<pole<<endl;
}
