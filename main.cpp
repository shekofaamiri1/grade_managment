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
    static Course fromLine(const string &line)
    {
        size_t pos = line.find(",");
        string c = line.substr(0, pos);
        float g = stof(line.substr(pos + 1));
        return Course(c, g);
    }
};
int main()
{
    vector<Course> courses;
    int choice;
    do
    {
        cout << "\n--- سیستم مدیریت نمرات ---\n";
        cout << "1. افزودن درس\n";
        cout << "2. نمایش نمرات\n";
        cout << "3. ذخیره در فایل\n";
        cout << "4. خواندن از فایل\n";
        cout << "0. خروج\n";
        cout << "انتخاب: ";
        cin >> choice;
        if (choice == 1)
        {
            Course c;
            c.input();
            courses.push_back(c);
        }
        if (choice == 1)
        {
            Course c;
            c.input();
            courses.push_back(c);
        }  