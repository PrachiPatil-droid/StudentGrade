#include <iostream>
using namespace std;

int main() {
    string name;
    int m1, m2, m3;
    float average;
    char grade;

    cout << "Student Report Card Generator\n";
    cout << "Enter student's name: ";
    getline(cin, name);

    cout << "Enter marks for 3 subjects (out of 100):\n";
    cout << "Subject 1: ";
    cin >> m1;
    cout << "Subject 2: ";
    cin >> m2;
    cout << "Subject 3: ";
    cin >> m3;

    average = (m1 + m2 + m3) / 3.0;

    if (average >= 90)
        grade = 'A';
    else if (average >= 75)
        grade = 'B';
    else if (average >= 50)
        grade = 'C';
    else
        grade = 'F';

    cout << "\n Report Card \n";
    cout << "Name     : " << name << endl;
