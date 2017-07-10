#include <iostream>
using namespace std;

int translate(char letter){
    if(letter=='H')return 1;
    return 0;
}

int main(){
    int numTrials,sum=0,trialNum,posit=0;
    int score []={0,0,0,0,0,0,0,0};
    char letter;
    cin>>numTrials;
    for(int i=0;i<numTrials;i++){
        cin>>trialNum;
        posit=0;
        for(int j=0;j<2;j++){
            cin>>letter;
            posit=2*posit+translate(letter);
        }
        for(int j=2;j<40;j++){
            cin>>letter;
            posit=(2*posit+translate(letter))%8;
            score[posit]++;
        }
        cout<<trialNum<<" ";
        for(int j=0;j<8;j++){
            cout<<score[j];
            if(j!=7){cout<<" ";}
            score[j]=0;
        }
        cout<<endl;
    }
    return 0;
}
