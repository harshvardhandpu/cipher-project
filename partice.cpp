#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;



int main(){
  ifstream ifs("harsh.txt");
  string name;
  int roll;
  string branch;
  ifs>>name>>roll>>branch;
  cout<<"Name: "<<name;
  cout<<"\nROll: "<<roll;
  cout<<"\nBranch: "<<branch;
   ifs.close();

   return 0;
}