#include<iostream>
using namespace std;

int main(){
int i=65;
int *p =&i;
char *cp = (char*)p;

cout<< *P <<endl;
cout<< *cp <<endl;

return 0;
}
