//
//  main.cpp
//  Test
//
//  Created by Lieu Hong Nhiep on 16/7/25.
//

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    // Tạo biến name và grade trong private
    string name;
    double grade;

public:
    // Constructor
    Student(string n, double g) {
        name = n;
        grade = g;
    }

    // Hàm in thông tin sinh viên
    void display_info() {
        cout << "Name: " << name << '\n';
        cout << "Grade: " << grade << '\n';
    }

    // Hàm lấy name
    string get_name() {
        return name;
    }
    // hàm lấy grade
    double get_grade() {
        return grade;
    }

    // hàm sửa tên
    void set_name(string n) {
        name = n;
    }
    // hàm sửa grade
    void set_grade(double g) {
        grade = g;
    }
};

int main() {
    // student1: Nhi 8.5
    Student student1("Nhi", 8.5);
    student1.display_info();

    // student2: Anh 9.2
    Student student2("Anh", 9.2);
    student2.display_info();


    return 0;
}
