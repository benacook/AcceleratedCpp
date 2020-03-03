#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include "grade.h"
#include "student_info.h"

using namespace std;
int main(int argc, char const *argv[])
{
    
    vector<Student_info> students;
    Student_info record;

    string::size_type maxlen = 0;

    while(read(cin, record)){
        //find the longest name
        maxlen = max(maxlen, record.name.size());
        students.push_back(record);
    }

    //alphabetise student records
    sort(students.begin(), students.end(), compare);

    typedef vector<Student_info>::size_type vecSz;
    //write names and grades
    for(vecSz i = 0; i != students.size(); ++i){
        //write the name padded on the right to maxlen + 1 chars
        cout << students[i].name
        << string(maxlen + 1 - students[i].name.size(), ' ');

        //compute and write the grade
        try{
            double finalGrade = grade(students[i]);
            streamsize prec = cout.precision();
            cout << setprecision(3) << finalGrade
            <<setprecision(prec);
        } catch(domain_error e){
            cout << e.what();
        }
        cout << endl;
    }
    
    return 0;
}






