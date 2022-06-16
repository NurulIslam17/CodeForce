#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int  n,k, l, c, d, p, nl, np;
    cin>> n>>k>>l >>c >>d>> p>>nl>>np;

    int drink_for_tost = (l*k)/nl;
    int lime_for_tost = (c*d);
    int solt_for_tost = (p/np);

    int res = min(min(drink_for_tost,lime_for_tost),solt_for_tost);
    cout<<res/n<<endl;
}
