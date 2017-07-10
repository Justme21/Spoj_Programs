#include <iostream>
using namespace std;

long long procedure(long long number){
    if(number%2==0){
        return number/2;
    }
    else{
        cout<<"HERE  WE ARE"<<endl;
        return 3*number+3;
    }
}

int main(){
    long long number;
    cin>>number;
    while(number>1){
       if(number%2==0){
           number=number/2;
       }
       else{
          cout<<"NIE"<<endl;
          return 0;
       }
    }
    cout<<"TAK"<<endl;
    return 0;
}
