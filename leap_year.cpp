#include<iostream>
using namespace std;

void leap_year(int year)
{ 
    if(year%400 == 0){
        cout<<year<<" is a leap year";
    }else if(year%4 == 0 && year%100!=0){
        cout<<year<<" is a leap year";
    }else{
        cout<<year<<" is not a leap year";
    }
}

int main()
{
    int year;
    cout<<"Enter the year to check whether year is a leap year or not: ";
    cin>>year;

    leap_year(year);

    return 0;
}