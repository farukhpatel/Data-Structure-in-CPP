#include<iostream>
using namespace std;


//Ask in TCS NQT Coding Question 2021 – Day 1 – Slot 1
int main(){
    int N=10; //user given 10
    int k=5;  //minimum 5
    int userInput=0;
    if(userInput==0){
        cout<<  "INVALID INPUT"<<endl;
        cout<<"NUMBER OF CANDIES AVAILABLE:"<<N<<endl;
        
    }
    else if(k>=userInput){
        cout<<"lets calculate"<<endl;
        //NUMBER OF CANDIES SOLD : 3
        int remember=N-userInput;
        cout<<"NUMBER OF CANDIES SOLD :"<<userInput<<endl;

        cout<<"NUMBER OF CANDIES AVAILABLE:"<<remember<<endl;
        
    }
    else{
        cout<<"Wrong user input"<<endl;
    }

    
    return 0;
}