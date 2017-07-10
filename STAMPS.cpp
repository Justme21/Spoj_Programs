#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int numCases,numStamp,numFriend,j;
    int * friendList;
    cin>>numCases;
    for(int i=0;i<numCases;i++){
        cin>>numStamp>>numFriend;
        friendList = new int [numFriend];
        for(int j=0;j<numFriend;j++){
            cin>>friendList[j];
        }
        sort(friendList,friendList+numFriend,greater<int>());
        for(j=0;j<numFriend&&numStamp>0;j++){
            numStamp-=friendList[j];
        }
        cout<<"Scenario #"<<(i+1)<<":"<<endl;
        if(numStamp>0){cout<<"impossible"<<endl;}
        else{ cout<<j<<endl<<endl;}
    }
}
