#include <iostream>
using namespace std;
// #define N 5;
int N=5;
int stack[5];
int top=-1;

void push(){
    if(top==N-1){
        cout<<"Stack overflow"<<endl;
    }
    else{
     int num;
     cout<<"Enter number :-"<<endl;
     cin>>num;
     top++;
     stack[top]=num;
     cout<<"Number stored"<<endl;
    }
 }
 void pop(){
     if(top==-1){
         cout<<"Stack (underflow)is empty"<<endl;
     }
     else{
         cout<<"number deleted"<<stack[top]<<endl;
         top--;
         }
 }

int main(){
    int choice;
    cout<<"1.Push"<<endl;
    cout<<"2.Pop"<<endl;
    cout<<"3.Exit"<<endl;
    cin>>choice;
    if(choice==3){
        cout<<"Program exit"<<endl;
    }
    while(choice==1 || choice==2){
        switch(choice){
        case 1:
          push();
          break;
        case 2:
          pop();
          break;
        }
        cout<<"1.Push"<<endl;
        cout<<"2.Pop"<<endl;
        cout<<"3.Exit"<<endl;
        cin>>choice;
    }




    return 0;
}