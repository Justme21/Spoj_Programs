#include<iostream>
using namespace std;

class BigNumber{
    private:
        int size;
        int* number;

    public:
        BigNumber(){
            size=100;
            number = new int[100];
            for(int i=0;i<100;i++){number[i]=0;}
        }

        void readNum(string num){
            int temp = num.length();
            size = temp;
            for(int i=0;i<temp;i++){
                number[i] = num[temp-1-i]-'0'; //number stored reverse order
            }
        }

        void addNum(string num){
            int temp = num.length(),val,overlap = 0;
            for(int i=0;i<temp;i++){
                val = number[i]+(num[temp-1-i]-'0')+overlap;
                number[i]=val%10;
                overlap = val/10;
            }
            while(overlap!=0){
                val = number[temp]+overlap;
                number[temp] = val%10;
                overlap = val/10;
                temp++;
            }
            if(temp>size){size = temp;}
        }

        void divNum(int N){
            int overlap = 0,val;
            for(int i=size-1;i>=0;i--){
                val = (overlap*10+number[i]);
                number[i] = val/N;
                overlap = val%N;
            }
        }

        void printNum(){
            int temp=size-1;
            while(temp>=0&&number[temp]==0){temp--;}
            if(temp==-1){cout<<0;}
            else{
                for(int i=temp;i>=0;i--){
                    cout<<number[i];
                }
            }
            cout<<endl;
        }

        void subNum(string N){
            int overlap=0,len=N.length(),val;
            for(int i=0;i<len;i++){
                number[i]-=((N[len-1-i]-'0')+overlap);
                overlap=0;
                if(number[i]<0){
                    number[i]+=10;
                    overlap+=1;
                }
            }
            while(overlap!=0){
                number[len]-=overlap;
                overlap=0;
                if(number[len]<0){number[len]+=10;overlap+=1;}
                len++;
            } 
        }
};

int main(){
    BigNumber val;
    string N,X;
    for(int i=0;i<10;i++){
        cin>>N;
        val.readNum(N);
        cin>>X;
        val.addNum(X);
        val.divNum(2);
        val.printNum();
        val.subNum(X);
        val.printNum();
    }
}
