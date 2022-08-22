
#include <iostream>
using namespace std;

class fafCompany{
    public:
     int countt=0;
     
      void result(int num)
      {
          for(int i=1; i<=(num/2); i++)
          {
              if((num-i)%i==0)
              {
                  countt++;
              }
          }
          
          cout<<countt<<endl;
      }
};

int main() {

    int n;
    cin>>n;
    fafCompany obj;
    obj.result(n);
    
    return 0;
}