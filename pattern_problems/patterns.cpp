#include <iostream>
using namespace std;


// sqaure pattern with number n
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


// sqaure pattern with alphabet n
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

int main(){
    int n = 4;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= i ; j++){
            cout << "* ";
        }
        cout << endl;
    }
}


