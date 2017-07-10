#include <iostream>
using namespace std;

int resolve(int a,long b){
    int list[5];
    int posit = 1,a_temp = a;
    list[0] = a;
    a=(a*a_temp)%10;
    while(a!=a_temp){
         list[posit] = a;
         posit++;
         a=(a*a_temp)%10;
    }
    return(list[(b-1)%posit]);
}

int main(){
    int numCases,a,a_temp,temp;
    long b;
    cin>>numCases;
    for(int i=0;i<numCases;i++){
        cin>>a>>b;
        if(b==0){cout<<1;}
        else{
            while(a>=10){a=a%10;}
            if(a==0){cout<<0;}
            else{
                a = resolve(a,b);
                cout<<a;
            }
        }
        if(i!=numCases-1){cout<<endl;}
    }
    return 0;
}
