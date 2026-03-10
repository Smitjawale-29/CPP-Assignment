#include<iostream>
using namespace std;

class student{
private:
    string name;
    int rollnumber;
    float marks;
    char grade;

public:
    
    void setname(string n){
        name = n;
    }
    
    void setrollnumber(int r){
        rollnumber = r;
    }

    void setmarks(float m){
        marks = m;
    }

    
    void calculategrade(){
        if(marks >= 90 && marks <= 100)
            grade = 'A';
        else if(marks >= 80)
            grade = 'B';
        else if(marks >= 70)
            grade = 'C';
        else if(marks >= 60)
            grade = 'D';
        else
            grade = 'F';

        cout << "Grade Calculated Successfully!\n";
    }

    
    void displayinfo(){
        cout << "\nStudent Information:\n";
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollnumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main (){
    student s;
    int choice;
    string name;
    int roll;
    float marks;

    do{
        cout << "\n===== MENU =====\n";
        cout << "1. Accept Information\n";
        cout << "2. Display Information\n";
        cout << "3. Calculate Grade\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){

            case 1:
                cout << "Enter Name: ";
                cin.ignore();     //clear leftover enter key 
                getline(cin, name); //and getline waits properly now you type 
                s.setname(name);

                cout << "Enter Roll Number: ";
                cin >> roll;
                s.setrollnumber(roll);

                cout << "Enter Marks: ";
                cin >> marks;
                s.setmarks(marks);
                break;

            case 2:
                s.displayinfo();
                break;

            case 3:
                s.calculategrade();
                break;

            case 4:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    }while(choice != 4);

    return 0;
}