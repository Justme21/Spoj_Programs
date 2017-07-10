#include <iostream>
#include <math.h>
using namespace std;

//In hindsight this is quite a long winded approach
//Find primes <sqrt(n)= O(2n-m)
//test for primality of numbers between m and n = O(n-m)
//printing the resulting primes = O(n-m)

//Even numbers are known to not be prime
void initialise(long m, int * sieve, int length){
    int start = 0;
    if(m%2==0){start = 1;}
    for(int i=start;i<length;i+=2){
        sieve[i] = 1;
    }
}

int main(){
    bool print;
    int numTrials;
    int* sieve,*primeList;
    long m,n;
    cin>>numTrials;
    for(int i=0;i<numTrials;i++){
        cin>>m>>n;
        print = false;
        sieve = new int[n-m+1];//segmented eratosthenes sieve
        primeList = new int[(int)sqrt(n)-2]; //starting at 3
        initialise(m,sieve, n-m+1);
        if(m==2){sieve[0] = 1;}//account for the only even prime
        else if(m==1){//1 is not prime but odd, 2 is prime but even
            sieve[0] = 0;
            sieve[1] = 1;
        }
        initialise(3,primeList,sqrt(n)-2); //initialise the prime list
        for(int j=3;j<=sqrt(n);j++){
            if(primeList[j]){
                for(int k=2;k<=sqrt(n)/j;k++){
                    primeList[k*j-3]=0;
                }
            }
        }
        for(int j=3;j<=sqrt(n);j++){
            if(primeList[j-3]){
                for(int k=0;k<=n-m;k++){
                    if((m+k)%j == 0 && m+k!=j){
                        sieve[k]=0;
                    }
                }
            }
        }
        for(int j=0;j<=n-m;j++){
            if(print&&sieve[j]){cout<<endl;}
            if(sieve[j]){
                cout<<m+j;
                print = true;
            }
        }
        if(i!=numTrials-1){
            cout<<endl<<endl;
        }
    }
    return 0;
}
