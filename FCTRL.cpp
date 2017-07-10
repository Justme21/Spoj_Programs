#include <iostream>
using namespace std;

int main(){
    long len,N,numZeroes;
    cin>>len;
    for(int i=0;i<len;i++){
        cin>>N;
        numZeroes = 0;
        while(N>=5){
            N = N/5;
            numZeroes += N;
        }
        cout<<numZeroes<<endl;
    }
}
