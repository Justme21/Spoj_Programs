#include <iostream>
using namespace std;

int issymb(char symb){
    char ops[] = {'(','+','-','*','/','^'};
    for(int i=0;i<6;i++){
       if(symb == ops[i]){
           return 1;
       }
    }
    return 0;
}

int main(){
    int numCases,numSymb=0;
    char symb;
    char* symblist = new char[400];
    cin>>numCases;
    for(int i=0;i<numCases;i++){
	cin>>symb;
        symblist[numSymb] = symb;
        numSymb++;
        while(numSymb>0){
            cin>>symb;
            if(symb == ')'){
                while(symblist[numSymb-1]!='('){
                    cout<<symblist[numSymb-1];
                    numSymb--;
                }
                numSymb--;
            }
            else if(issymb(symb)){
                symblist[numSymb]=symb;
                numSymb++;
            }
            else{
                cout<<symb;
            }
        }
	cout<<endl;
    }
    return 0;
}
