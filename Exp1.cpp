#include <iostream>
#include <string.h>
using namespace std;


int main() {

    string name , branch;
    int rollno, semester;
    float cgpa;

    cout << "Enter your name:";
    getline(cin, name);

    cout << " Enter your Roll No:";
    cin >> rollno;
    cin.ignore();

    cout << " Enter your Branch:";
    getline(cin, branch);

    cout << "Enter your Semester:";
    cin >> semester;

    cout << "Enter Your CGPA:";
    cin >> cgpa;

    cout << "\n\n---Student Details----\n";
    
    cout << " Name :" << name << endl;
    cout << "Roll No :" << rollno << endl;
    cout << "Branch :" << branch << endl;
    cout << "Semester :" << semester << endl;
    cout << "CGPA :" << cgpa << endl;

    
        return 0;






}
