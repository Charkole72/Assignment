#include <iostream>
using namespace std;

class Student
{
    private:
        string stu_name;
        string stu_class;
        int roll_number;
        double stu_marks;
    public:
        Student(const string& name,const string& stuClass,int rollnum, double marks)
        : stu_name(name), stu_class(stuClass), roll_number(rollnum), stu_marks(marks) {}

    string Grade() {
        if (stu_marks >= 90) 
        {
            return "A+";
        } 
        else if (stu_marks >= 80) 
        {
            return "A";
        } 
        else if (stu_marks >= 70) 
        {
            return "B";
        } 
        else if (stu_marks >= 60) 
        {
            return "C";
        } 
        else {
            return "D";
        }
    }
    void stu_info() {
        cout << "\nName: " << stu_name << endl;
        cout << "Class: " << stu_class << endl;
        cout << "Roll Number: " << roll_number << endl;
        cout << "Marks: " << stu_marks << endl;
        cout << "Grade: " << Grade() << endl;
    }
};

int main() {
    string name, stuClass;
    int rollnum;
    double marks;
    cout << "Enter student details:\n";
    cout << "Name: ";
    getline(cin, name);
    cout << "Class: ";
    getline(cin, stuClass);
    cout << "Roll Number: ";
    cin >> rollnum;
    cout << "Marks (0-100): ";
    cin >> marks;

    Student student(name,stuClass,rollnum, marks);
    student.stu_info();

    return 0;
}
