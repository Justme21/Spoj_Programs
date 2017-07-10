#include <iostream>
using namespace std;

int main(){
    int a1,a2,a3;
    cin>>a1>>a2>>a3;
    while(true){
        if(a1==0 && a2==0 &&a3==0){
            break;
        }
	if(2*a2 == a3+a1){
            cout<<"AP "<<a3-a2+a3;
	}
        else{
            cout<<"GP "<<a3*a3/a2;
        }
	cout<<endl;
	cin>>a1>>a2>>a3; 
    }
    return 0;
}
