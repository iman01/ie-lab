//----------------- main.cpp -----------------------//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "students.hpp"
using namespace std;

int main()


{

    std::vector<Student> students;
    std::fstream file;

    file.open("grades.txt", std::ios::in);

    if (file.is_open()) {

        std::cout << "File was correctly opened!" << std::endl;
    }


    file.seekp(0, std::ios::beg);

    std::string line;

    while(std::getline(file, line)) {
        Student current_student;

        auto pos = line.find(',');
        string name = line.substr(0,pos);
        cout << "Name is: " << name << endl;
        current_student.name = name;

        line = line.substr(pos+1);

        pos = line.find(',');
        string surname = line.substr(0,pos);
        cout << "Surname is: " << surname << endl;
        current_student.surname = surname;

        line = line.substr(pos+1);

        for (int i = 0; i < 7; i++)
        {
            pos = line.find(',');
            string grade = line.substr(0,pos);
            cout << "grade: " << grade << endl;
            current_student.grades.push_back(stoi(grade));
            line = line.substr(pos+1);
        }

        students.push_back(current_student);

    }


    std::cout <<  "---------- final grade for each student ------------" << endl;
    for (auto &student : students) {
       // Calculate grade for every student
       double grade = calculate_grade(student);
       student.final_grade = grade;
       std::cout <<  student.name << " " << student.surname << " " << grade << endl;
    }



    std::cout <<  "---------- after sorting by surname ------------" << endl;
    sort_students_by_grade(students, false);
    for (auto &student : students) {
       std::cout <<  student.name << " " << student.surname << " " << student.final_grade << endl;
    }

    std::cout <<  "---------- after sorting by grade ------------" << endl;
    sort_students_by_grade(students, true);
    for (auto &student : students) {
       std::cout <<  student.name << " " << student.surname << " " << student.final_grade << endl;
    }


    file.close();

    return 0;

}

// ----------------students.hpp -----------------------//
#pragma once
#include <string>
#include <vector>

struct Student{
    std::string name;
    std::string surname;
    std::vector<int> grades;
    double final_grade;
};

bool sort_by_garde(const Student &s1, const Student &s2);
bool sort_by_surname(const Student &s1, const Student &s2);
double calculate_grade(const Student &student);
void sort_students_by_grade(std::vector<Student> &students, bool by_grade);


// ----------------students.cpp -----------------------//
#include <iostream>
#include <vector>
#include <string>
#include <functional>
#include <algorithm>
#include <numeric>
#include "students.hpp"

bool sort_by_garde(const Student &s1, const Student &s2) {
    return s1.final_grade > s2.final_grade;
}
bool sort_by_surname(const Student &s1, const Student &s2) {
    return s1.surname > s2.surname;
}


double calculate_grade(const Student &student){
    double final_percentage = 0.0;
    double final_grade = 0.0;
    auto sum =  std::accumulate(student.grades.begin(), student.grades.end(), 0.0);

    final_percentage = (sum/70.0)*100.0;

    if (final_percentage > 90)
        final_grade = 5.0;
    else if(final_percentage > 80)
        final_grade = 4.50;
    else if(final_percentage > 70)
        final_grade = 4.25;
    else if(final_percentage > 60)
        final_grade = 3.50;
    else if(final_percentage > 50)
        final_grade = 3.25;
    else {
        final_grade = 2.25;
    }
    return final_grade;
}


void sort_students_by_grade(std::vector<Student> &students, bool by_grade)
{
    if(by_grade)
        std::sort(students.begin(), students.end(), sort_by_garde);
    else {
        std::sort(students.begin(), students.end(), sort_by_surname);
    }

}

