#include <iostream>
using namespace std;

//Prints the input until it is 42
int main()
{
    int number;
    cin>>number;
    while(number!=42){
        cout<<number<<endl;
	cin>>number;
    }
}
