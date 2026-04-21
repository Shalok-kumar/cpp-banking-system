#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main() {
    string msg;

    cout << "Enter your message: ";
    getline(cin, msg);

    cout << "\nYou: " << msg << endl;

    // Sky blue color
    this_thread::sleep_for(chrono::seconds(1));

    cout << "\033[36m message seen\033[0m" << endl;

    this_thread::sleep_for(chrono::seconds(2));

    cout << "Basanti typing";
    for(int i = 0; i < 3; i++) {
        cout << ".";
        cout.flush();
        this_thread::sleep_for(chrono::milliseconds(500));
    }

    // small pause
    this_thread::sleep_for(chrono::seconds(1));

    // overwrite typing text
    cout << "\rBasanti: Euuhhhhh!        " << endl;

    this_thread::sleep_for(chrono::seconds(2));

    // Red color
    cout << "\033[31mYou are BLOCKED!\033[0m" << endl;

    return 0;
}