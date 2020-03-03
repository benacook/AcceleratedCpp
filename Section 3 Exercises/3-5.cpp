#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    typedef vector<double>::size_type vec_sz;
    vector<string> names;
    vector<double> grades;
    while(true){

        //ask for the studest name
        cout << "Enter your name" << endl;
        string name;
        cin >> name;

        if(name == "exit"){
            break;
        }

        cout << "Hello, " << name << "!" << endl;

        //ask for the midterm and final grades
        cout << "please enter your midterm and final exam grades" << endl;
        double midterm, final;
        cin >> midterm >> final;

        //ask for the homework grades
        cout << "Enter all your homework grades, "
        "followed by end of file";

        vector<double> homework;
        double x;
        //invariant: homework contains all of the hoework grades so far
        while(cin >> x && x != -1){
            homework.push_back(x);
        }

        //check that homework grades were entered
        vec_sz size = homework.size();
        if(size == 0){
            cout << "you must enter your grades, "
            "please try again";
            return 1;
        }

        //sort the grades
        sort(homework. begin(), homework.end());

        //compute the median homework grade
        vec_sz mid = size / 2;
        double median = size % 2 == 0? (homework[mid] + homework[mid - 1]) / 2
                                        : homework[mid];
        
        //compute and write the final grade
        double finalGrade = 0.2 * midterm + 0.4 * final + 0.4 * median;
        streamsize prec = cout.precision();
        cout << "your final grade is " << setprecision(3)
        << finalGrade << setprecision(prec) << endl;
        names.push_back(name);
        grades.push_back(finalGrade);
    }

    for(vec_sz i = 0; i < names.size(); i++){
        cout << names[i] << ": " << grades[i] << endl;
    }
}