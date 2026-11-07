#include <iostream>
#include <string>
using namespace std;
 

    class Account{
        private:
            int accountNumber;
            string name;
            int pin;
            double balance;


        public:
            Account(int a , string n , int p , double b){
                accountNumber = a;
                name = n;
                pin = p;
                balance = b;
            }
            void deposit(double amount){
                double newBalance = balance += amount;

            }
            void withdraw(double amount){
                if(amount > balance){
                    cout<< "Insufficient funds" <<endl;
                }else{double newBalance = balance -= amount;
                  
                }
                }

                void display(){
                    cout<<"Account Number: " << accountNumber << endl;
                    cout<<"Name: " << name <<endl;
                    cout<<"Balance: " << balance <<endl;
                }
                
            };

            int main(){
                Account acc1(1001, "John Doe", 1234,5000.0);
                acc1.display();
                acc1.deposit(1000.0);
                acc1.withdraw(3000.0);
                acc1.display();
               


            };
        
        



