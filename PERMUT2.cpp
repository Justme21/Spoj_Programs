#include <iostream>
using namespace std;

int main(){
    bool cont;
    long n;
    long* permut;
    cin>>n;
    while(n!=0){
        cont = true;
        permut = new long[n];
        for(int i=0;i<n;i++){
            cin>>permut[i];
        }
        for(int i=0;i<n&&cont;i++){
            if(permut[permut[i]-1]!=i+1){cont=false;}
        }
        if(cont){cout<<"ambiguous"<<endl;}
        else{cout<<"not ambiguous"<<endl;}
        cin>>n;
    }
}
