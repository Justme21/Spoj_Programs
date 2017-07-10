#include<stdio.h>
#include<iostream>
#include <cmath>
using namespace std;

int isItPrime(int test){
 //1 if prime, 0 otherwise
 int k;
 double rootTest;
 rootTest = pow(test, 0.5);
 rootTest = rootTest/1;
 if(test == 1){
  return 0;
 }
 if(test == 2){
  return 1;
 }
 if(test%2 == 0){
  return 0;
 }
 for(k = 3; k < (rootTest+1); k+=2){
  if(test%k == 0){
   return 0;
  }
 }
 return 1;
}

int main(){
 int i,j,lowbound,highbound,trials;
 scanf("%d\n", &trials);
 for(j = 0; j<trials; j++){
  scanf("%d\n", &lowbound);
  scanf("%d\n", &highbound);
  for(i = lowbound; i <(highbound+1); i++){
   if(isItPrime(i) == 1){
    printf("%d\n", i);
   }
  }
  if(j != (trials-1)){
   cout << "\n";
  }
 }
}
