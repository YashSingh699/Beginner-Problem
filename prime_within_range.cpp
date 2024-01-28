#include<iostream>
using namespace std;

bool isprime(int num)
{
    if(num < 2){
        return false;
    }

    for(int i=2;i<num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main()
{
    int lower, upper;

    cout<<"Enter the number for lower and upper: ";
    cin>>lower>>upper;

    for(int i=lower;i<=upper;i++){
        if(isprime(i)){
            cout<<" "<<i;
        }
    }
    return 0;
}