#include<iostream>
using namespace std;
int main(){
    int i=0;
    //while loop 
    /*while(condition){

    }*/
    while(i<101)//condition
    {
        cout<<i<<" "; //loop
        i++; //updation
    }

    int i;
    int input;
    //guess the number 65 the user has 100 chances
    i=100;
    for(i=1;i<100;i++){
        cin>>input; //'=' assignment operator '==' equivalent operator 
        if(input==65){
            cout<<"Congrats you have guessed correct";
            break;
        }
    }
}