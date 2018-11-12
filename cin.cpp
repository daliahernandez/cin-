#include "main.hpp"
int main(){

  string name;
  string age;
    string yes;
  string no;


  cout<<"Enter Name";
  cin>>name;
  cout<<"Enter age";
  cin>>age;
  cout<<"This is the information you entered"<<name<<age;

  cout<<"is the information you entered correct (yes/no)?";
  cin>>yes;
  if(yes == "yes"){
    cout<<"thanks for your submission";
  }else{
    cout<<"fill out your information again";
  }
  return 0;



}
