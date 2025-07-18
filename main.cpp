#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Structure for storing student data
struct Student {
    string name;
    string course;
    int age;
    float gpa;
};

int main() {
    const int noOfStudents = 2; // Can be increased depending on the number of students
    Student students[noOfStudents];

    float totalGPA = 0, maxGPA = 0;
    int totalAge = 0, maxIndex = 0;

    // Console Title
    cout << "==============================\n";
    cout << "  STUDENT PERFORMANCE ANALYZER\n";
    cout << "==============================\n";

    // Input section
    for (int i = 0; i < noOfStudents; i++) {
        cout << "\n--- Enter details for student #" << i + 1 << " ---\n";

        cout << "Name   : ";
        cin >> students[i].name;

        cout << "Course : ";
        cin >> students[i].course;

        cout << "Age    : ";
        cin >> students[i].age;

        cout << "GPA    : ";
        cin >> students[i].gpa;

        totalAge += students[i].age;
        totalGPA += students[i].gpa;

        if (students[i].gpa > maxGPA) {
            maxGPA = students[i].gpa;
            maxIndex = i;
        }
    }

    // Average calculations
    float avgAge = totalAge / (float)noOfStudents;
    float avgGPA = totalGPA / (float)noOfStudents;

    // Output
    cout << "\n========= CLASS REPORT =========\n";
    cout << "Total Students : " << noOfStudents << "\n";
    cout << "Average Age    : " << avgAge << "\n";
    cout << "Average GPA    : " << avgGPA << "\n";
    cout << "Top Student    : " << students[maxIndex].name << " (GPA: " << maxGPA << ")\n";
    cout << "Class Grade    : ";
    
    if (avgGPA > 4.0) cout << "Invalid GPA!";
    else if (avgGPA == 4.0) cout << "A";
    else if (avgGPA >= 3.0) cout << "B+";
    else if (avgGPA >= 2.0) cout << "C";
    else cout << "F";

    cout << "\n===============================\n";

    return 0;
}
