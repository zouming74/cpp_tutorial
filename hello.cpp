#include<iostream>
using namespace std;
int main(){
    cout<<"hello,this is a program using cmake to build !"<<endl;
    int a ;
    cout<<"please,input a number"<<endl;
    cin>>a;
    if(a>20)
    {
        cout<<"what you input is greater than 20"<<endl;
    }
    else{
        cout<<"what you input is less than 20"<<endl;
    }
    return 0;
}