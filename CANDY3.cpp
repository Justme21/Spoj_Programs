#include <iostream>
using namespace std;

int main(){
    int T;
    long long int N,val,tot=0;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>N;
        for(int j=0;j<N;j++){
            cin>>val;
            tot=(tot + val%N)%N;
        }
        if(tot==0){cout<<"YES";}
        else{cout<<"NO";}
        if(i!=T-1){cout<<endl;}
    }
}
