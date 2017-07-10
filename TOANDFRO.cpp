#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int numCol,numLetter,numLine=1,posit=0,mover=1;
    char* message;
    char letter;
    string line;
    while(cin>>numCol&&numCol!=0){
        cin>>line;
        numLetter = line.size();
        message = new char[numLetter]; 
        strncpy(message,line.c_str(),numLetter);
        numLine = numLetter/numCol;
        for(int i=0;i<numCol;i++){
            for(int j=0;j<numLine;j++){
                if(j%2==0){ cout<<message[numCol*j+i];}
                else{cout<<message[numCol*(j+1)-1-i];}
            }
            posit = numCol-posit;
            mover*= -1;
        }
        cout<<endl;
        //delete [] message;
    }
    return 0;
}
