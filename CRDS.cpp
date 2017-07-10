#include <iostream>
using namespace std;

int main(){
    int T;
    long long N;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>N;
        cout<<((3*N*(N+1)/2)-N)%1000007<<endl;
    }
}
