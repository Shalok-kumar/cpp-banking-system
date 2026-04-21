#include <iostream>
using namespace std;

int main() {
    int num, original, reversed = 0, remainder;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while(num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    if(original == reversed)
        cout << "Palindrome Number";
    else
        cout << "Not a Palindrome Number";

    return 0;
}