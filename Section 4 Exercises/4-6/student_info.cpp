#include "student_info.h"
#include "grade.h"

using namespace std;

bool compare (const Student_info& x, const Student_info& y){
    return x.name < y.name;
}

std::istream& read(std::istream& is, Student_info& s){
    double midtermGrade;
    double finalGrade;
    vector<double> homework;
    is >> s.name >> midtermGrade >> finalGrade;

    read_hw(is, homework);

    try{
        s.grade = grade(midtermGrade, finalGrade, homework);
    }catch(domain_error e){
        cout << e.what();
    }

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