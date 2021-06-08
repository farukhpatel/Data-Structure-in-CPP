#include<iostream>
using namespace std;
int main(){
    //selection sort time complexity big O(n^2)
    //select the minumum value and swap it with first value 
    int a[]={9,1,4,5,2};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        if(min!=i){
            int temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        }
    }
    for(int p=0;p<n;p++){
        cout<<a[p]<<"  ";
    }
    return 0;
}