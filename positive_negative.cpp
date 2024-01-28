#include<iostream>
using namespace std;

void positive_negative(int num)
{
     if(num > 0){
        cout<<"Number is positive";
     }else if(num < 0){
        cout<<"Number is negative";
     }else{
        cout<<"Zero";
     }
} 

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    positive_negative(n);

    return 0;
}