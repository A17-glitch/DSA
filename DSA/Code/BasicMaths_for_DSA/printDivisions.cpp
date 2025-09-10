#include <iostream>
using namespace std;
int main() {

    int n;
    cin>>n;

    cout<<"The all divisors of "<<n<< " is: ";
    for(int i=1; i<=n; i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
  
  return 0;
}
