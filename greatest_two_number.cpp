#include<iostream>
using namespace std;

void greatest_twonumber(int first, int second)
{
    if(first == second){
        cout<<"Both number are equal";
    }else if(first > second){
        cout<<"First is greater number and second is smaller number";
    }else
        cout<<"First is smaller number and second is greater number";
}

int main()
{
    int first,second;
    cout<<"Enter the first and second number: ";
    cin>>first>>second;

    greatest_twonumber(first,second);

    return 0;
}