#include<iostream>
using namespace std;

void increment (int &n){
  n++;
}

int main(){
  int i=10;
  int *p =&i;
  
  increment(p);
  
  cout<<i<<endl;
  
}
