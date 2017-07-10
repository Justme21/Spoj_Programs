#include <iostream>
using namespace std;

int main(){
    int numSquare,res;
    cin>>numSquare;
    while(numSquare!=0){
        res=0;
        for(int i=1;i<=numSquare;i++){
            res+=i*i;
        }
        cout<<res<<endl;
        cin>>numSquare;
    }
    return 0;
}
