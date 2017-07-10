#include <iostream>
using namespace std;

int main(){
    int max,min,temp;
    while(cin>>max>>min){
        if(max==-1||min==-1){break;}
        if(min>max){
            temp=max;
            max=min;
            min=temp;
        }
        cout<<(max/(min+1))+int(max%(min+1)!=0)<<endl;
    }
}
