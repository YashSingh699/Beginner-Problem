#include<iostream>
using namespace std;

/*

=> Problem with this algorithm is that it cannot reverse number when place '0' at the end of the 
   digits.
   for example: input = 100 (you pass input as 100)
                output = 1  (instead of 1, it should be 001)
*/
void reverse_number(int num)
{
    int reverse=0,rem;

    if(num <= 9){
        cout<<"Single digits number cannot be reverse";
    }else{
        while(num!=0){        //checking whether digits in the number exist
            rem = num % 10;
            reverse = reverse*10+rem;
            num = num/10;
        }
        cout<<"Reverse Number is "<<reverse;
    }
}

// void reverse_number(int num)
// {
//     int count = 0,rem,reverse=0;

//      if(num <= 9){
//         cout<<"Single digits number cannot be reverse";
//      }else{
//         while(num!=0){
//             rem = num%10;
//             if(rem > 0){
//                 reverse = rem;
//                 for(int i=0;i<count;i++){
//                     reverse = reverse * 10;
//                 }
//             }else{
//                 count++;
//             }
//             reverse = reverse * 10 + rem;
//             num = num/10;
//         }
//         cout<<reverse;
//      }
// }

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    reverse_number(num);

    return 0;
}