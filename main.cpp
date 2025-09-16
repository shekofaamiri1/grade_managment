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
    void saveToFile(ofstream &out) const
    {
        out << courseName << "," << grade << endl;
    }
    tatic Course fromLine(const string &line)
    {
        size_t pos = line.find(",");
        string c = line.substr(0, pos);
        float g = stof(line.substr(pos + 1));
        return Course(c, g);
    }
};