// Write a program to prepare the result of a student. The program should display student’s details and the percentage of marks input for 5 subjects



#include <iostream>
#include <string>
using namespace std;

int main() {
    // Student details
    string name, rollNo, className;
    int marks[5];
    float total = 0, percentage;

    // Input student details
    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter roll number: ";
    getline(cin, rollNo);
    cout << "Enter class: ";
    getline(cin, className);

    // Input marks for 5 subjects
    cout << "\nEnter marks for 5 subjects (out of 100):\n";
    for(int i = 0; i < 5; i++) {
        cout << "Subject " << i+1 << ": ";
        cin >> marks[i];
        
        // Validate marks (0-100)
        while(marks[i] < 0 || marks[i] > 100) {
            cout << "Invalid marks! Enter again (0-100): ";
            cin >> marks[i];
        }
        total += marks[i];
    }

    // Calculate percentage
    percentage = total / 5;

    // Display result
    cout << "\n\n-------- STUDENT RESULT --------\n";
    cout << "Name: " << name << endl;
    cout << "Roll No: " << rollNo << endl;
    cout << "Class: " << className << endl;
    cout << "\nSubject-wise Marks:\n";
    for(int i = 0; i < 5; i++) {
        cout << "Subject " << i+1 << ": " << marks[i] << "/100\n";
    }
    cout << "\nTotal Marks: " << total << "/500\n";
    cout << "Percentage: " << percentage << "%\n";

    // Grade calculation
    cout << "Grade: ";
    if(percentage >= 90) cout << "A+";
    else if(percentage >= 80) cout << "A";
    else if(percentage >= 70) cout << "B+";
    else if(percentage >= 60) cout << "B";
    else if(percentage >= 50) cout << "C";
    else if(percentage >= 40) cout << "D";
    else cout << "Fail";

    cout << "\n-------------------------------\n";

    return 0;
}