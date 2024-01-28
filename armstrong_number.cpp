#include<iostream>
#include<math.h>
using namespace std;

int order(int num)
{
    int len = 0;
    while(num){
        len++;
        num=num/10;
    }
    return len;
}

bool armstrong_number(int len,int num)
{
    int temp, digits, sum;
    sum = 0;
    temp = num;

    while(temp!=0){
        digits = temp % 10;
        sum = sum + pow(digits,len);
        temp = temp/10;
    }
    return num == sum;
}

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    int n = order(num);

    bool check = armstrong_number(n,num);

    if(check){
        cout<<"Given number is armstrong number";
    }else{
        cout<<"Given number is not armstrong number";
    }
    return 0;
}