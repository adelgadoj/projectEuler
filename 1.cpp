//Multiples of 3 or 5
//Find the sum of all the multiples of 3 or 5 below 1000.
#include <iostream>
using namespace std;
int main(){
    int sum=0;
    for(int i=0 ; i<1000 ; i++){
        if(i % 3 == 0 || i % 5 == 0){
            sum=sum+i;
        }
    }
    cout<<sum;
    return 0;
}