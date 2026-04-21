#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

    #define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define CYAN    "\033[36m"

class Student {

public:
    int  rollno;
    string name ;
    string branch;
    float cgpa;

     
        Student() {
            rollno = 0;  name = ""; branch = ""; cgpa = 0.0;

        }     

        Student(int r, string n , string b , float c) {
            rollno = r; name = n; branch = b; cgpa = c;
 
        }

        void display() {
            cout << " Roll: " << rollno 
                 << " | Name: " << name
                 << " | Branch: " << branch
                 << " | CGPA: " << cgpa << endl;
        }

};

    void addStudent(vector<Student>& students) {
    int r; string n, b; float c;
    
    cout << "Enter Roll No: "; cin >> r;
    cin.ignore();  
    
    cout << "Enter Name: ";   getline(cin, n);
    cout << "Enter Branch: "; getline(cin, b);
    cout << "Enter CGPA: ";   cin >> c;
    
    students.push_back(Student(r, n, b, c));
    cout << GREEN << "Student added successfully!\n" << RESET;
}

       void deleteStudent(vector<Student>& students){
        int roll;
        cout <<" Enter Roll no to Delete:"; cin >> roll;
        for (auto it = students.begin(); it != students.end(); it++) {
            if (it->rollno == roll) {
                students.erase(it);
                cout << " Deleted !"<< endl;


            } 
        }

        cout << RED << "Student not found!\n" << RESET;

       }
       
       void updateStudent(vector<Student>& students){
        int roll;
        cout << " Enter Roll no to Update:"; cin >> roll;
        for (auto& s: students){
            if(s.rollno == roll){
                cout << " Enter New Name:"; cin >> s.name;
                cout << " Enter New Branch:"; cin >> s.branch;
                cout << " Enter New CGPA:"; cin >> s.cgpa;
                cout << " Updated!" << endl;

            }

        }
        cout << " Student Not Found" << endl;
       }

       void displayAll(vector<Student>& students){
        if (students.empty()){
            cout << " No Student Record Found" << endl;
        } else {
            for (auto& s: students)
                s.display();
        }
       }

       void searchStudent(vector<Student>& students){
        int roll;
        cout << " Enter Roll no to Search: "; cin >> roll;
        for (auto& s: students){
            if(s.rollno == roll){
                s.display();
                return;
            }
        }
        cout << " Student Not Found" << endl;
       }

       void SaveToFile(vector<Student>& students){
        ofstream fout("students.txt");
        for (auto& s : students){
            fout << s.rollno << " " << s.name <<" "
        << s.branch << " " << s.cgpa << endl;
            fout.close();
            cout << " Data Saved!" << endl;

      }
    }

      void LoadFromFile(vector<Student>& students){
        ifstream fin("students.txt");
        if(!fin) return;
        int r; string n; string b; float c;
        while (fin >> r >> n >> b >> c) 
            students.push_back(Student(r , n , b , c));
            fin.close();
        
      }
      int main() {
    vector<Student> students;
    LoadFromFile(students);

    int choice;
    do {
        cout << CYAN   << "\n====== SMS Menu ======\n" << RESET;
        cout << GREEN  << "1. Add Student\n"           << RESET;
        cout << GREEN  << "2. Display All\n"           << RESET;
        cout << YELLOW << "3. Search Student\n"        << RESET;
        cout << RED    << "4. Delete Student\n"        << RESET;
        cout << YELLOW << "5. Update Student\n"        << RESET;
        cout << RED    << "6. Exit\n"                  << RESET;
        cout << "Enter Choice: "; cin >> choice;

        switch (choice) {
            case 1: addStudent(students);    break;
            case 2: displayAll(students);    break;
            case 3: searchStudent(students); break;
            case 4: deleteStudent(students); break;
            case 5: updateStudent(students); break;
            case 6: SaveToFile(students);
                    cout << "Goodbye!\n";    break;
            default: cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;

}
    