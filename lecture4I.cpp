//conditional statements are required to satisy some conditions and make solving easier
//ususally when a condition is true a set of instructions are executed if it is false another set of instructions are executed in if else statements
//we use and or not operators also to check the conditions in a program which are part of boolean algebra

#include<iostream>
using namespace std;
int main(){
    //And or statements
    int a,b,c,d;
    cout<<"Input 2 integers a and b";
    cin>>a>>b>>c>>d;
    cout<<(a>b && c>d); //when the condition statement is true the output would be 1 or else it would be zero
    //when we use && operator the two conditions must be true then we get the output as 1 else it would be 0
    cout<<(a>b) || (c==d);
    //when we use || if atleast one of the condition is true then the output would be 1 else it would be 0

}
