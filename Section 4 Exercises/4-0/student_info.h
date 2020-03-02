#ifndef GUARD_student_Info_h
#define GUARD_student_Info_h

#include <iostream>
#include <string.h>
#include <vector>

struct Student_info{
    string name;
    double midtermGrade, finalGrade;
    vector<double> homework;

};

bool compare (const Student_info& x, const Student_info& y);
std::istream& read(std::istream& is, Student_info& s);
std::istream& read_hw(std::istream& in, std::vector<double>& hw);

#endif