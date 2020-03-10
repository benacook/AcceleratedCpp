#include <iostream>
#include <vector>

using namespace std;
int main(int argc, char const *argv[])
{
    double x;
    vector<double> vec;
    while(cin >> x){
        vec.push_back(x);
    }

    typedef vector<double>::size_type vecSz;
    double sum = 0;
    for(vecSz i = 0; i < vec.size(); i++){
        sum += vec[i];
    }

    cout << "avg: " << sum/vec.size() << endl;

    return 0;
}
