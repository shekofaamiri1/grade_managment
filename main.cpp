#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;
class Course
{
private:
    string courseName;
    float grade;
    public:
    Course() {}
    Course(string c, float g) : courseName(c), grade(g) {}
    void input()
    {
        cin.ignore();
        cout << "نام درس: ";
        getline(cin, courseName);
        cout << "نمره: ";
        cin >> grade;
    }
    void display() const
    {
        cout << "درس: " << courseName << " | نمره: " << grade << endl;
    }