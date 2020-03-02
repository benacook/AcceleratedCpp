#include <algorithm>
#include <stdexcept>
#include <vector>
#include "median.h"

using namespace std;

double median(vector<double> vec){
    typedef vector<double>::size_type vceSz;

    vceSz size = vec.size();

    if(size == ){
        throw domain_error("median of an empty vector");
    }

    sort(vec.begin(), vec.end());

    vceSz mid = size / 2;

    return size % 2 == 0? (vec[mid] + vec[mid - 1]) / 2 : vec[mid];
}