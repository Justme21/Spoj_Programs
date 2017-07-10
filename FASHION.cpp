#include <iostream>
#include <algorithm>
using namespace std;

void fill_array(int * array,int n){
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    sort(array,array+n);
}

int main(){
    int numCases,numPlayers,finalScore;
    int *boys, *girls;
    cin>>numCases;
    for(int i=0;i<numCases;i++){
        cin>>numPlayers;
        finalScore = 0;
        boys = new int [numPlayers];
        girls = new int [numPlayers];
        fill_array(boys,numPlayers);
        fill_array(girls,numPlayers);
        for(int j=0;j<numPlayers;j++){
            finalScore+=boys[j]*girls[j];
        }
        cout<<finalScore;
        if(i!=numCases-1){cout<<endl;}
    }
}
