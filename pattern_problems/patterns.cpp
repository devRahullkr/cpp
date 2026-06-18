#include <iostream>
using namespace std;


// square pattern with number n
// int main(){

//     int n = 5;
//     for(int i = 1 ; i <= n ; i++){
//         for(int j = 1 ; j <= n ; j++){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
    
//     return 0;
// }


// square pattern with alphabet n
// int main(){

//     int n = 5;
//     for(int i = 1 ; i <= n ; i++){
//         char ch = 'A';
//         for(int j = 1 ; j <= n ; j++){
//             cout << ch << " ";
//             ch += 1;
//         }
//         cout << endl;
//     }
//     return 0;
// }


// square pattern with * of n times
// int main(){

//     int n = 4;
//     for(int i = 1 ; i <= n ; i++){
//         for(int j = 1 ; j <=n ; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// square pattern with continuos number with start from n

// int main(){
//     int n = 4;
//     int num = 1;

//     for(int i = 0 ; i < n ; i++){
//         for(int j = 0 ; j < n ; j++){
//             cout << num << " ";
//             num += 1;
//         }
//         cout << endl;
//     }

//     return 0;
// }


// square pattern with increasing alphabet order with n times
// int main(){

//     int n = 3;
//     char ch = 'A';
//     for(int i = 0 ; i < n ; i++){
//         for(int j = 0 ; j < n ; j++){
//             cout << ch << " ";
//             ch += 1;
//         }
//         cout << endl;
//     }
//     return 0;
// }


// triangle pattern with n rows

// int main(){
//     int n = 4;
//     for(int i = 0 ; i < n ; i++){
//         for(int j = 0 ; j <= i ; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }


// triangle pattern with constant num in each row with n times

// int main(){
//     int n = 4;
//     for(int i = 0 ; i < n ; i++){
//         for(int j = 0 ; j <= i ; j++){
//             cout << (i + 1) << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// character triangle pattern with n rows

// int main(){
//     int n = 5;
//     char ch = 'A';
//     for(int i = 0 ; i < n ; i++){
//         for(int j = 0 ; j <= i ; j++){
//             cout << ch << " ";   
//         }
//         ch += 1;
//         cout << endl;
//     }
//     return 0;
// }


// triangle pattern with each row start from 1 to nth time;

// int main(){
//     int n = 4;
//     for(int i = 0 ; i < n ; i++){
//         for(int j = 0 ; j <= i ; j++){
//             cout << (j+1) << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// reverse numeric triangle

// int main(){
//     int n = 5;
//     for(int i = 0 ; i < n ; i++){
//         for(int j = i+1 ; j >= 1 ; j--){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// revers characters triangle

// int main(){
//     int n = 4;
//     for(int i = 0 ; i < n ; i++){
//         char ch = 65 + i;
//         for(int j = i ; j >= 0 ; j--){
//             cout << ch << " ";
//             ch -= 1;
//         }
//         cout << endl;
//     }
//     return 0;
// }


// floyd's triangle pattern with numbers

// int main(){
//     int n = 4;
//     int num = 1;
//     for(int i = 0 ; i < n ; i++){
//         for(int j = 0 ; j <= i ; j++){
//             cout << num << " ";
//             num += 1;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// floyd's triangle pattern with character

// int main(){
//     int n = 4;
//     char ch = 'A';
//     for(int i = 0 ; i < n ; i++){
//         for(int j = 0 ; j <= i ; j++){
//             cout << ch << " ";
//             ch += 1;
//         }
//         cout << endl;
//     }
//     return 0;
// }


// inverted triangle pattern with number and star's

// int main(){
//     int n = 4;
//     for(int i = 0 ; i < n ; i++){

//         for(int j = 0 ; j < i ; j++){
//             cout << " ";
//         }

//         for(int j = 0 ; j < n-i ; j++){
//             // cout << "*" ;
//             cout << i+1 ;
//         }
//         cout << endl;
//     }
//     return 0;
// }


// inverted triangle pattern with character

// int main(){
//     int n = 4;
//     char ch = 'A';
//     for(int i = 0 ; i < n ; i++){

//         for(int j = 0 ; j < i ; j++){
//             cout << " ";
//         }

//         for(int k = 0 ; k < n-i ; k++){
//             cout << ch ;
//         }
//         ch += 1;
//         cout << endl;
//     }
//     return 0;
// }


// Pyramid pattern with numbers

int main(){
    int n = 4;

    for(int i = 0 ; i < n ; i++){

        for(int j = 0 ; j < n-1-i ; j++){
            cout << " ";
        }
        for(int j = 1 ; j <= i+1 ; j++){
            cout << j ;
        }
        for(int j = i ; j >= 1 ; j--){
            cout << j ;
        }
        cout << endl;

    }
    return 0;
}






