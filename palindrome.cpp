#include<iostream>
using namespace std;

void palindrome_number(int num)
{
    int rem,reverse = 0;
    int temp = num;

    if(num <= 9){
        cout<<"Number should be grater then or equal to two digits";
    }else{
        while(num!=0){
            rem = num % 10;
            reverse = reverse * 10 + rem;
            num = num/10;
        }
    }
    if(temp == reverse){
        cout<<"Given number is palindrome number "<<temp<<"="<<reverse;
    }else{
        cout<<"Given number is not palindrome number";
    }
}

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    palindrome_number(num);

    return 0;
}