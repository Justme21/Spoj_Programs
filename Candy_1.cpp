#include <iostream>
using namespace std;

int main(){
    int numPacks,total,optVal,numSteps;
    cin>>numPacks;
    while(numPacks!=-1){
        int* packs = new int[numPacks];
        total = 0;
        for(int i=0; i<numPacks;i++){
            cin>>packs[i];
	    total+=packs[i];
        }
        if(total%numPacks!=0){cout<<-1<<endl;}
        else{
            numSteps = 0;
	    optVal = total/numPacks;
            for(int i=0;i<numPacks;i++){
                if(packs[i] < optVal){
                   numSteps += optVal - packs[i];
                }
            }
	    cout<<numSteps<<endl;
        }
        delete [] packs;
	cin>>numPacks;
    }
    return 0;
}
