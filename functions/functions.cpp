#include <iostream>
using namespace std;



// if a function return nothing then we can use (void)
// void print(){
//     cout << "Hello World" << endl;
//     return;
// }

// int main(){
//     print();
//     return 0;
// }

// calculate sum of number from 1 to n;

// int sum(int n){
//     int sum = 0;
//     for(int i = 1 ; i <= n ; i++){
//         sum += i;
//     }
//     return sum;
// }

// int main(){
//     cout << "sum = " << sum(5) << endl;
//     return 0;
// }



// calculate nth factorial;

// int factorial(int n){
//     int fact = 1;
//     for(int i = 1 ; i <= n ; i++){
//         fact *= i;
//     }
//     return fact;
// }

// int main(){
//     cout << "Factorial = " << factorial(5) << endl;
//     return 0;
// }


// PASS BY VALUE example

int sum(int a, int b){
    int sum = 0;
    a = a + 10;
    b = b + 10;
    sum += a + b;
    return sum;
}

int main(){
    int a = 5;
    int b = 4;
    cout << "sum of a and b = " << sum(a,b) << endl;
    return 0;
}


