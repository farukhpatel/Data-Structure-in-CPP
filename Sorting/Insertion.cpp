#include<iostream>
using namespace std;
int main(){
    //time Complexity Big(n2)
    int a[]={4,5,6,2};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=1;i<n;i++){
        int temp=a[i];
        int j=i-1;
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }
    return 0;
}