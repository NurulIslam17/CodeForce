
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int c,d,b,cost=0,borrow=0;
    cin >> c >> d >> b;

    for(int i=1;i<=b;i++){
        cost = cost + (i*c);
    }
    if(cost<=d){
        cout<<"0"<<endl;
    }
    else{
        borrow = cost-d;
        cout<<borrow<<endl;
    }


}
