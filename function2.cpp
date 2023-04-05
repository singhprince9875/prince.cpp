/*#include<iostream>
using namespace std;
int oddnumber( ){
  if(p % 2=0 ){
    return = "even number";
    cout<<"even number"<<endl;
  }
}

int main(){
    oddnumber(9);
}*/
/*#include<iostream>
using namespace std;
int main(){
  int x=5;
  int*ptr=&x;
  cout<<*ptr<<endl;
}*/
// changing the value of the pointer through derefrence operator
/*#include<iostream>
using namespace std;
int main(){
  int x=10;
  int*ptr=&x;
  *ptr=28;
  int a=*ptr;
  cout<<*ptr<<endl;
  cout<<ptr<<endl;
  cout<<&x<<endl;
 cout<<a<<endl;}*/
 // addition of two number through pointer
/* #include<iostream>
 using namespace std;
 int main(){
  int x=10;
  int y=11;
  int*ptrx=&x;
  int*ptry=&y;
  cout<<*ptrx+*ptry<<endl;
 }*/
 // printing the address of the pointer through through &operator
 #include<iostream>
 using namespace std;
 int main(){
  int x=11;
  int y=12;
  int*ptr=&x;
  cout<<&ptr;
 }

 