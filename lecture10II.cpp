#include<iostream>
using namespace std;
void swap(int a,int b){
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"The values of a and b are after inside swapping are:"<<a<<" "<<b<<endl;


}
int main(){
    int a,b,c;
    a=5;
    b=7;
    swap(a,b);
    cout<<"The values of a and b are after outside  swapping are:"<<a<<" "<<b<<endl;

}
