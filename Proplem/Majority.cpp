#include<iostream>
using namespace std;
int main(){
    int a[]={3,2,1,4,1};
    int n=sizeof(a)/sizeof(a[0]);
    int count=0;
    int max;
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
            if(a[i]==a[j]){
               count++; 
            }
            if(count>n/2){
                max=a[i];
            }
        }
    }
    if(max){
        cout<<"majority number:-"<<max;
    }
    else{
        cout<<"majority number not present:-";
    }
    return 0;
}