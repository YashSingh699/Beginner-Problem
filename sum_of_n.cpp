#include<iostream>
using namespace std;

/*
formula for computer sum of n number = n*(n+1)/2; 
*/

void sumo_of_n(int num)
{
   int sum = 0;
   for(int i=1;i<=num;i++){
    sum = sum + i;
   }
   cout<<sum;
}

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    sumo_of_n(num);

    return 0;
}