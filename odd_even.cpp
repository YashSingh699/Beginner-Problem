#include<iostream>
using namespace std;

void odd_even(int num)
{
    //  if(num%2 == 0){
    //     cout<<"The given is even";
    //  }else{
    //     cout<<"The given is odd";
    //  }

    if((num&1) == 0){
        cout<<"Even";
    }else{
        cout<<"Odd";
    }
}

int main()
{
    int n;
    cout<<"Enter the number to check whether number is odd or even: ";
    cin>>n;

    odd_even(n);

    return 0;
}