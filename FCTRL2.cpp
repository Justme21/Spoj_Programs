#include <iostream>
using namespace std;

int main(){
    int numCases,number;
    long double fac;
    cin>>numCases;
    for(int i=0;i<numCases;i++){
        cin>>number;
        fac = 1;
        while(number>1){
            fac *= number;
            number--;
        }
        cout<<fixed<<fac<<endl;
    }
    return 0;
}
