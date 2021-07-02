#include <iostream>
using namespace std;
// #define N 5;
int N=5;
int queue[5];
int front=-1;
int rear=-1;

void Enqueue(){
  if(rear==N-1){
      cout<<"overflow queue"<<endl;
  }
  //base condistion when queue is empty    
  else if(front==-1 && rear==-1){
          front=rear=0;
          int num;
          cout<<"Enter number:-"<<endl;
          cin>>num;
          queue[rear]=num;
          cout<<"number inserted:-"<<queue[rear]<<endl;
  }
  else{
      int num;
      cout<<"Enter number:-"<<endl;
      cin>>num;
      rear++;
      queue[rear]=num;
      cout<<"number inserted:-"<<queue[rear]<<endl;
  }
}

void Dequeue(){
    if(front==-1 && rear==-1){             
        cout<<"underflow queue"<<endl;
    }
    else if(front==rear){
        cout<<"Number deleted at index:-"<<front<<endl;
        cout<<"Number deleted:-"<<queue[front];
        front=rear=-1;
    }
    else{
        cout<<"Number deleted at index:-"<<front<<endl;
        cout<<"Number deleted:-"<<queue[front];
        front++;
    }
 }

int main(){
    int choice;
    cout<<"1.Enqueue"<<endl;
    cout<<"2.Dequeue"<<endl;
    cout<<"3.Exit"<<endl;
    cin>>choice;
    if(choice==3){
        cout<<"Program exit"<<endl;
    }
    while(choice==1 || choice==2){
        switch(choice){
        case 1:
          Enqueue();
          break;
        case 2:
          Dequeue();
          break;
        }
        cout<<"1.Enqueue"<<endl;
        cout<<"2.Dequue"<<endl;
        cout<<"3.Exit"<<endl;
        cin>>choice;
    }




    return 0;
}