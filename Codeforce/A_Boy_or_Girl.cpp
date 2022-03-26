#include<iostream>
#include<string>
using namespace std;
int  main()
{
    string s;
    cin>>s;
    int l = s.length();
    int same=0;
    for(int i=0;i<s.length()-1;i++){
        for(int j=i+1;j<s.length();j++){
            if(s[i]==s[j]){
                same++;
                break;
            }
        }
    }
    int distinct = s.length()-same;
    if(distinct%2==0){
        cout<< "CHAT WITH HER!" <<endl;
    }else{
        cout<< "IGNORE HIM!" <<endl;
    }
}
