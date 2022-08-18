/**
 * author: dharmesh
 * created: 18-08-2022 17:16:28
 **/
#include <bits/stdc++.h>
using namespace std;

class Student
{
    int roll;

public:
    string name;
    void setroll(int roll)
    {
        this->roll = roll;
    }
    void display()
    {
        cout << "Name: " << this->name << endl;
        cout << "Roll: " << this->roll << endl;
    }
};

signed main()
{
    // static allocation
    Student rahul;
    rahul.name = "Rahul";
    cout << rahul.name << endl;
    // isme dot display kar rha hu mei
    rahul.display();
    // dynamic allocation
    Student *s1 = new Student;
    s1->setroll(10);
    s1->name = "Student";
    // or we can use this
    (*s1).name = "xyz";
    // isme mei display ko as a pointer use kar rha hu mei
    s1->display();
    cout << s1->name << endl;

    return 0;
}
// Check out of bound