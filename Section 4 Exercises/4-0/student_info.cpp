#include "student_info.h"

using namespace std;

bool compare (const Student_info& x, const Student_info& y){
    return x.name < y.name;
}

std::istream& read(std::istream& is, Student_info& s){
    is >> s.name >> s.midtermGrade >> s.finalGrade;

    read_hw(is, s.homework);
    return is;
}

std::istream& read_hw(std::istream& in, std::vector<double>& hw){
    if(in){
        hw.clear();

        double x;
        while(in >> x){
            hw.push_back(x);
        }

        in.clear();
    }

    return in;
}