#include <iostream>
#include <string>
using namespace std;

int main(){
    int numCases,length;
    string word;
    cin>>numCases;
    for(int i=0;i<numCases;i++){
        cin>>word;
	length = word.size();
        for(int j=0;j<length/2;j+=2){
            cout<<word[j];
        }
        cout<<endl;
    }
}
