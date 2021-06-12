#include<iostream>
using namespace std;
int main(){
    int a[]={3,3,3,3,3,3,33,3,3,2,1,4,1,2,2,2};
    int n=sizeof(a)/sizeof(a[0]);
    int count=0;
    int max=0;
    int oldcount=0;
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
            if(a[i]==a[j]){
               count++; 
            }
        }
        if(count>n/2  && count>oldcount){
                max=a[i];
                oldcount=count;
                count=0;
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