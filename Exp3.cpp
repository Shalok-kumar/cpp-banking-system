#include <iostream>
#include <iomanip>
using namespace std;

int main(){

        int num  = 123;
        float  value = 45.2265;


        cout << "Default Output :\n";
        cout << num  << " " << value << value << endl;

        cout << "\nUnsing setw():\n";
        cout <<setw(10) << num << setw(10) << value << endl;

        cout << " \n Using setprecision():\n";
        cout << setprecision(3) << value << endl;

        cout << "\n Using Fixed + setprecision: \n";
        cout << fixed << setprecision(2) << value << endl;

        cout << " \nAlignment:\n";
        cout << left << setw(10) << num <<"Left Aligned\n";
        cout << right << setw(10) << num <<"Right Aligned\n";

        return 0;
        


}