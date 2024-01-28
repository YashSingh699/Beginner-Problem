#include<iostream>
using namespace std;

/*
formula:
sum_in_range = y*(y+1)/2-x*(x+1)/2
where x is minimum and y is maximum
*/

int nsum_in_range(int first,int second)
{
   
    if(first <= second){
        return first + nsum_in_range(first+1,second);
    }else{
        return 0;
    }
}

int main()
{
    int first,second;
    cout<<"Enter the first and second number: ";
    cin>>first>>second;

    int sum = nsum_in_range(first,second);
    cout<<sum;
    return 0;
}