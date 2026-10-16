#include <iostream>
#include <string>
using namespace std;

int main(){
    string name = "Adrian";
    int age = 22;
    double grade = 98.9;
    char section = 'C';
    bool isLearningCpp = false;


    cout << "Name:" << name << endl;
    cout << "Age:" << age << endl;
    cout << "Grade:" << grade << endl;
    cout << "Section:" << section << endl;
    cout << "Learning C++:" << isLearningCpp <<endl;
    cout << "I am " << name << " and i am " << age << " years old" <<endl;
    cout << "I am from BSCS_3 " << section << " and i am learning C++ " << isLearningCpp <<endl;
    return 0;

};