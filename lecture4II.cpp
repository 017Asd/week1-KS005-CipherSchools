#include<iostream>
using namespace std;
int main(){
    //when a condition is written in if statement if theat is true then the if statement executes if it is not true then the  the else statement executes
    int a,b;
    cin>>a>>b;
    if(a==b){
        cout<<"Given inputs are equal"<<endl;//here in if statement we have the condiiton if the input given by the user then the statement inside if executes 
    }
    else{
        cout<<"The inputs are different"<<endl;
        if(a>b){
            cout<<"first input is greater"<<endl;
        }
        else{
            cout<<"second input is greater"<<endl;
        }
    }


    //grading a student 
    int marks;
    cin>>marks;
    if(marks>91){
        cout<<"Grade O"<<endl;
    }
    else if(marks<90 && marks>80){
        cout<<"Grade A"<<endl;
    }
    else if(marks<81 && marks>70){
        cout<<"Grade B"<<endl;
    }
    else if(marks<70 && marks>60){
        cout<<"Grade C"<<endl;
    }
    else{
        cout<<"Passed"<<endl;
    }

    cout<<"enter an integer a";
    cin>>a;
    switch(a){
        case 1:
        cout<<"value is 1";
        break;
        case 2:
        cout<<"value is 2";
        break;
        case 3:
        cout<<"value is 3";
        break;  //here the input given by user is considered in cases and the statemetns are executed and we use break statement because without it all the statements inside cases would be executed irrespective of theinput
        default:
        cout<<"Out of range";//we have a default case in case the input doesnt match the case we provided
    }
}