#include<iostream>
using namespace std;

void greatest_of_three_number(int first,int second,int third)
{
   if((first > second) && (first > third)){
       cout<<"First is the greatest number";
   }else if((second > first) && (second > third)){
       cout<<"Second is the greatest numbber";
   }else {
       cout<<"Third is the greatest number";
   }
}

int main()
{
    int first,second,third;
    cout<<"Enter three number: ";
    cin>>first>>second>>third;

    if(first == second || second == third || third == first){
        cout<<"All three number should be distinct (Re-enter the input)";
    }else{
        greatest_of_three_number(first,second,third);
    }

    return 0;
}