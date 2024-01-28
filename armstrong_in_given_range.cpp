#include<iostream>
#include<math.h>
using namespace std;

int order(int num)
{
    int len=0;
    while(num){
        len++;
        num = num/10;
    }
    return len;
}

void armstrong_in_range(int low,int high)
{
    for(int num=low;num<=high;num++){
        int temp = num,sum,digits,len_of_num;
        sum=0;         //resetting to 0 for every iteration 
        len_of_num = order(temp);

        while(temp!=0){
            digits = temp%10;
            sum = sum + pow(digits,len_of_num);
            temp = temp / 10;
        }

        if(num == sum)
          cout<<sum<<" ";
    }
}

int main()
{
    int low,high;
    
    cout<<"Enter the number: ";
    cin>>low>>high;

    if(low < 9 || low > high){  
        cout<<"Invalid input";
    }else{
        armstrong_in_range(low,high);
    }
    return 0;
}