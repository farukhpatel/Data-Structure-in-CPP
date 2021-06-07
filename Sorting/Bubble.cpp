#include<iostream>
using namespace std;
int Bubble(int arr[],int n){
    //logic for bubble sort
    int count=0;
    for(int i=0;i<n-1;i++){
    //for optimize the code
    bool swap=false;
        for(int j=0;j<n-i-1;j++){
             //right side element>left side elment
            if(arr[j]>arr[j+1]){
                count++;
                swap=true;
               int temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
            }
        }
            if(!swap){
                break;
            }
    }
    for(int s=0;s<n;s++){
        cout<<arr[s]<<endl;
    }
    cout<<count<<endl;
    return arr[0];   
}
int main(){
//time Complexity Big(n2)
// Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.
    int arr[]={1,2,3,4,5};
    int n;
    int s1=sizeof(arr);
    int s2=sizeof(arr[0]);
    n=s1/s2;
    cout<<Bubble(arr,n);

    return 0;
}