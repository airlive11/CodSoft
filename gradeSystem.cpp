#include <iostream>
using namespace std;

char calculateGrade(int marks) {
    if (marks >= 90 && marks <= 100) {
        return 'A';
    } else if (marks >= 80 && marks < 90) {
        return 'B';
    } else if (marks >= 70 && marks < 80) {
        return 'C';
    } else if (marks >= 60 && marks < 70) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    int marks;
    cout << "Enter the marks of the student: ";
    cin >> marks;

    if (marks >= 0 && marks <= 100) {
        char grade = calculateGrade(marks);
        cout << "The grade of the student is: " << grade << endl;
    } else {
        cout << "Invalid marks! Please enter marks between 0 and 100." << endl;
    }

    return 0;
}
