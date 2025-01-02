//Even Fibonacci Numbers
#include <iostream>
using namespace std;
int fibonacci(int n){
    int f = 0;
    if(n == 0){
        cout << 0 << endl;
        return 0;
    }
    int n1, n2;
    n1 = 0;
    n2 = 1;
    int sum;
    while(f <= n){
        if (f % 2 == 0) {
            sum = sum + f;
        }
        f = n1 + n2;
        n1 = n2;
        n2 = f;
    }
    return sum;
}
int main(){
    cout<<fibonacci(4000000);
    return 0;
}