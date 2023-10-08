#include<iostream>
using namespace std;
int main(){
    /*int password;

    do{
    cin>>password;
    }
    while(password<99){ //the condition in the while loop,until it is true, the loop will run
        cout<<"choclates"<<endl;
        // cout<<"The password doesnot match the required conditions.Please reenter the password";
        // cin>>password;
    }
    cout<<"The user has now entered a correct password"<<endl;
//infinite loop condition 
    while(1){
        cout<<"choclates"<<endl;

    }*/
    //do while the statements execute atleast once irrespective of the condidtion satisfaction 
    
    
    /*int password;
    int count=0;
    while(1){
        cout<<"chocoaltes";
        count++;
        if(count>100)break;
    }*/


    int i;
    for(i=0;;i++){
        cout<<i<<" ";
        if(i>100)break; //this statement gets executed when the value of i is 101
    }
    return 0;

}