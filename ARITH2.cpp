#include <iostream>
using namespace std;

long long int calc(long long int A, long long int B, char op){
    switch(op){
        case '+': return A+B;
        case '-': return A-B;
        case '*': return A*B;
        case '/': return A/B;
        default: return -1;
    }
}

int main(){
    bool cont;
    long long int T,A,B;
    char op;
    cin>>T;
    for(int i=0;i<T;i++){
        cont = true;
        cin>>A;
        while(cont){
            cin>>op;
            if(op=='='){cont = false;}
            else{
                cin>>B;
                A=calc(A,B,op);
            }
        }
        cout<<A<<endl;
    }
}
