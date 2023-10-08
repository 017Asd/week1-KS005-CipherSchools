#include<iostream>
using namespace std;
int sum(int a,int b){
    int c;
    c=a+b;
    a=10;
    b=11;
    return c;
}
int main(){
    int a,b,c;
    a=3;
    b=5;
    cout<<a<<" "<<b<<endl;//these values are before calling the sum function
    c=sum(a,b);
    cout<<c<<endl;
    cout<<a<<" "<<b<<endl;//these are the values after calling sum function
    
    return 0;
}

//factual parameters are given to a function and formal parameters are copied from actual and used functions 
//when function is called it must include a matching actual parameters present inside the function.There must be match of actual and formal parameters

/*int sum(int a,int b) here declaration of function is done but the function does not contain any body

after writing main function 
int sum(int a,int b){
    return a+b;
    
}*/