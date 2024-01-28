#include<iostream>
using namespace std;

void sumofnumberdigit(int num)
{
    int sum = 0;

    if(num <= 9){
        cout<<"Number should be 2 digit or more than 2 digits";
    }else{
        while(num!=0){
            sum = sum + (num%10);
            num = num / 10;
        }    
        cout<<"Sum of digits of number is "<<sum;
    }
}

int main()
{
    int num;
    cout<<"Enter the number to find sum of digits number: ";
    cin>>num;

    sumofnumberdigit(num);

    return 0;
}