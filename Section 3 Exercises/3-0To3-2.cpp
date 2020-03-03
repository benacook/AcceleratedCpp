#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    //ask for the studest name
    cout << "Enter your name" << endl;
    string name;
    cin >> name;
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
    while(cin >> x){
        homework.push_back(x);
    }

    //check that homework grades were entered
    typedef vector<double>::size_type vec_sz;
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
    streamsize prec = cout.precision();
    cout << "your final grade is " << setprecision(3)
    << 0.2 * midterm + 0.4 * final + 0.4 * median
    << setprecision(prec) << endl;


    //3-2
    vector<int> v;
    const int qty = 20;
    for (int i = 0; i < qty; i++)
    {
        int n = rand();
        v.push_back(n);
    }

    sort(v.begin(), v.end());
    int q = qty / 4;

    int i;
    for (i = 3; i >= 0; i--)
    {
        double quartile = 0;
        for (int j =  i * q; j < (i * q) + q; j++)
        {
            quartile += v[j];
            cout << v[j] << ' ';
        }
        quartile /= q;
        cout << "quartile " << i << ' ' << quartile << endl;
    } 

    return 0;
}
