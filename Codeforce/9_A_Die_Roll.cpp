#include<iostream>
using namespace std;

void solve(int bigNum)
{
       if(bigNum==1) {
        cout<<"1/6"<<endl;
    } else if(bigNum==2) {
        cout<<"1/3"<<endl;
    } else if(bigNum==3) {
        cout<<"1/2"<<endl;
    } else if(bigNum==4) {
        cout<<"2/3"<<endl;
    } else if(bigNum==5) {
        cout<<"5/6"<<endl;
    }
}

int main() {
    int a,b,pos=0;
    cin>>a>>b;
    if(a>=b) {
        pos=(6-a)+1;
    } else {
        pos=b;
    }
   solve(pos);

}
