/**
 * author: dharmesh
 * created: 18-08-2022 18:04:19
 **/
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    string name;
    // default constructor
    Student()
    {
        this->roll = 0;
        this->name = "Student";
        cout << "default constructor called" << endl;
    }
    // consstructor using initilizer list
    Student(int roll, string name)
    {
        this->roll = roll;
        this->name = name;
        cout << "constructor called" << endl;
    }

    // Student(int roll, string name) : roll(roll), name(name)
    // {
    //     cout << "initilizer list initialized" << endl;
    // }

    Student(int roll) : roll(roll)
    {
        cout << "initilizer list for roll called" << endl;
    }
};

signed main()
{
    // how can you call the constructoers :)
    Student rahul(31, "r");
    Student sav(71);
    Student st = Student(21, "Student");
    Student *s = new Student(22, "aryan");
    return 0;
}
// Check out of bound