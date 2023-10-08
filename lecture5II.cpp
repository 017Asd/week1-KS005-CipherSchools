#include<iostream>
using namespace std;
int main(){
    int arr[10]; //here an integer data type named arr of size is defined
    //to access element of an array we must mention the name of array and the index
    int a[4]={10,4,5,6};
    // here the array contains 4 values to access the value 5
    cout<<a[2];//here a[2] we are specifying the array name and index of the required value
    //the size of array can never be decimal number it will always be an integer
    int arr[10];
    //to take input from user we use a loop to take the input of size of the array amd to print the output that is the values of array we use loop to access the array
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    for(int i=0;i<10;i++){
        cout<<arr[i];
    }
}