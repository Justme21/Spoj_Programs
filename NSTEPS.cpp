#include <iostream>
using namespace std;

int main(){
    int numTest,x,y;
    cin>>numTest;
    for(int i=0;i<numTest;i++){
        cin>>x>>y;
        if(x==y||x==y+2){
            cout<<x+y-x%2<<endl;
        }
        else{
            cout<<"No Number"<<endl;
        }
    }
    return 0;
}
