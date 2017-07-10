#include <iostream>
using namespace std;

int reverse_num(int num1){
    int new_num = 0;
    while(num1>0){
         new_num = new_num*10+num1%10;
         num1/=10;
    }
    return new_num;
}

int main(){
    int numCases,num1,num2,revNum1,revNum2,revRes;
    cin>>numCases;
    for(int i=0;i<numCases;i++){
        cin>>num1>>num2;
	revNum1 = reverse_num(num1);
        revNum2 = reverse_num(num2);
	revRes = revNum1 + revNum2;
        cout<<reverse_num(revRes)<<endl;
    }
   return 0;
}
