#include <iostream>
using namespace std;

int main(){

    int  n;
    cout <<"Enter a Number:";
    cin >> n;

    bool isPrime = true;

    if ( n < 2){
        isPrime = false;


    }

    for (int i = 2; i < n ; i++){
        if ( n % i ==0){
            isPrime = false;
            break;

        }
    }
    if ( isPrime){
        cout << n << " Is prime number" << endl;

    } else {
        cout << n << " is Not Prime Number" << endl;

    }

        return 0;


}