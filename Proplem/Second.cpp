#include<iostream>
using namespace std;
int main(){
    int max=0;
    int trainne[3][3];
    int avg[3]={0};
    for(int i=0;i<3;i++){
        cout<<"Enter first trainne "<<endl;
        for(int j=0;j<3;j++){
          
           cin>>trainne[i][j];
           if(trainne[i][j]<1 || trainne[i][j]>100){
               trainne[i][j]=0;
           }
        }
    }
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           avg[i]=avg[i]+trainne[i][j];
        }
        avg[i]=avg[i]/3;
    }
    for(int i=0;i<3;i++){
      if(avg[i]>max){
          max=avg[i];
      } 
     }
  for(int i=0;i<3;i++){
      if(avg[i]<70){
      cout<<"trainee is unfit"<<i+1<<endl;
      }
      else{
          cout<<"trainee number:-"<<i+1;
      }
  }

    return 0;
}