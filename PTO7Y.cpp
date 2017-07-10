#include <iostream>
using namespace std;

int main(){
    int nNodes,nEdges,from,to,index;
    int* rootList;
    cin>>nNodes>>nEdges;
    rootList = new int[nNodes];
    for(int i=0;i<nNodes;i++){rootList[i] = i;}
    for(int i=0;i<nEdges;i++){
        cin>>from>>to;
        if(rootList[from-1]==rootList[to-1]){
            cout<<"NO"<<endl;
            return 0;
        }
        else if(rootList[from-1]<rootList[to-1]){
            rootList[to-1] = rootList[from-1];
        }
        else{ rootList[from-1] = rootList[to-1];}
    }
    index = rootList[0];
    for(int i=1;i<nNodes;i++){
        if(rootList[i]!=index){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
