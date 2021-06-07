
#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key ){
    int s=0;
    int e=n-1;
    while (s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key){
          return mid;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
       cin>>arr[i];    
    }
    int key;
    cin>>key;
    cout<<binarySearch(arr,n,key);
    return 0;
}










// #include<iostream>
// #include<stdio.h>
// // #include<conio.h>
// using namespace std;
// bool voter(int age){
//     if(age>=18){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// int * TotalMarks(int marks[]){
//     return marks;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
    // Initializing the array elements
    // int ar[6] =new Array();
    // ar={1,2,3,4,5,6};
  
    // // Printing number of array elements
    // cout << "The number of array elements is : ";
    // cout << ar.size() << endl;
  
    // // Printing maximum elements array can hold
    // cout << "Maximum elements array can hold is : ";
    // cout << ar.max_size() << endl;
    
    // int a[3];
    // int s1=sizeof(a);
    // int s12=sizeof(a[0]);
    // int len=s1/s12;
    // for(int i=0;i<len;i++){
        
    //     cout<<"Enter number"<<endl;
    //     cin>>a[i];
    // }
    //  for(int i=0;i<len;i++){
        
    //     cout<<"Enter show"<<endl;
    //     cout<<a[i]<<endl;
    // }
    // char s="a";
    // // cout<<s.size();
    // cout<<s;
    // int year;
    // cout<<"Enter year:-"<<endl;
    // cin>>year;
    // if(year%4==0){
    //     if(year%100==0){
    //         if(year%400==0){
    //         cout<<"year is"<<year;
    //         }
    //         else{
    //             cout<<"year is not a"<<year; 
    //         }
    //     }
    //     else{
    //         cout<<"year2 is not "<<year;
    //     }
    // }
    // else{
    //      cout<<"year1  is not a"<<year; 
    // }
    // string s[]={"a","b","c"};
    // int i=2;
    // cout<<s[i-1];
//   








// int main(){
    // int marks[6];
    
    // for(int i=0;i<=5;i++){
    //   cout<<"Value of Index i:-"<<i<<endl;
    //   cout<<"Enter Your Marks"<<endl;
    //   cin>>marks[i];    
    // }
    // int *address;
    // address=TotalMarks(marks);
    // cout<<address;
    // for(int i=0;i<=5;i++){
    //      cout << *(address+i) << endl;
    // }
    // int _2d[2][3]={
    //  {1,2,3},
    //  {4,5,6}
    // };
    // for(int i=0;i<=1;i++){
    //     for(int j=0;j<=2;j++){
    //         cout<<_2d[i][j];    
    //     }
    // }
//    string fullName;
    // string name="farukh";
    // string last="patel";
    // string fullname=name.append(last);
    // cout<<fullname.length();
    // cout<<min(5,10);
    // cout << "Type your full name: ";
    // getline (cin, fullName);
    // cout << "Your name is: " << fullName;
    // int arr=new Array(3);
    // arr={1,2,3};
    // // cout<<arr[0];
//    int ar[6] = {1, 2, 3, 4, 5, 6};
//     cout << "First element of array is : ";
//     cout << ar.front() << endl;
  
//     // Printing last element of array
//     cout << "Last element of array is : ";
//     cout << ar.back() << endl;

//         return 0;
// }