#include<iostream>
using namespace std;

void prime_number(int num)
{
    //0 and 1 are not prime number
    bool isprime=true;
 
    if(num < 2){
       isprime = false;
    }else{
        for(int i=2;i<num;i++){
            if(num%i == 0){
                isprime = false;
                break;
            }
        }
    }

    if(isprime){
        cout<<"Number is prime";
    }else{
        cout<<"Number is not prime";
    }
}

int main()
{
    int number;
    cout<<"Enter the number to check if number is prime or not: ";
    cin>>number;

    prime_number(number);

    return 0;
}