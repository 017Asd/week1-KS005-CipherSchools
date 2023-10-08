#include<iostream>
using namespace std;
int main(){
    //looping is something in which a similar action is repeated until the condition metnioned doesnt satisy or the loop is breaked.
    //action performed in the loop is decided by os and can be changed after every loop
    //action should be decided in every loop 


    //for loop 
    //for(intiilization,condition,updation) example  
    /*for(int i=0;i=5;i++){
        cout<<i<<endl;   here the for loop prints 0,1,2,3,4,5 as per the parameters
    }*/
    // when the condition is not satisfied the loop terminates 

    //printing upto n numbers
    int n;
    cout<<"Enter an integer until which number must be printed";
    cin>>n;
    for(int i=0;i<=n;i++){
        cout<<i<<" ";
    }
    

}