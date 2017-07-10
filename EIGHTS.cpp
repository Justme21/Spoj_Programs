#include <iostream>
#include <cmath>
using namespace std;

//Trick involes noting last value in desired number is 2, and the remaining 
// digits are 19+n*25 => the kth such number is (19+(k-1)*25)2
int main(){
    long numCases;
    long long k, num;
    cin>>numCases;
    for(int i=0;i<numCases;i++){
        cin>>k;
        cout<<((19+(k-1)*25)*10+2)<<endl;
    }
}
