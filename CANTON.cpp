#include <iostream>
using namespace std;

int main(){
    int numCases,value,j,num,denom,diff,scale,tri_val;
    cin>>numCases;
    for(int i=0;i<numCases;i++){
        cin>>value;
        scale = 1;
        tri_val = 0;
        for(j=1;tri_val<value;j++){
            tri_val+=j;
        }
        j--;
        denom = j*(j%2)+((j+1)%2); //when even denom = j, when odd denom = 1
        num = j*((j+1)%2) + (j%2); //when even num = 1, when odd num=j
        diff = tri_val - value;
        if(num>denom){scale=-1;}
        num+=scale*diff;
        denom-=scale*diff;
        cout<<"TERM "<<value<<" IS "<<num<<"/"<<denom<<endl;
    }
}
