#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int N,numRect=0;
    cin>>N;
    for(int i=1;i<=int(sqrt(N));i++){
           numRect+=N/i-(i-1);
    }
    cout<<numRect<<endl;
    return 0;
}
