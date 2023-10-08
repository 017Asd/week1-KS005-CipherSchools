#include<iostream>
using namespace std;
void printHi(){
    cout<<"Hi"<<endl;
    return;

}
int sum(int a,int b){
    int c;
    c=a+b; //a+b will result in 10, therefure the value of c over here is 10
    a=500;
    cout<<"The value of c is "<<c;
    

    return c;
}
int main(){
    printHi();
    int a,b,c;
    a=4;
    b=6;
    int d;
    d=sum(a,b);
    cout<<"The sum is equal to "<<d<<endl;
    cout<<"The value of c is "<<c;
    return 0;
}