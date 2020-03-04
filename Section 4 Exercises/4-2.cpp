#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    for(int i = 1; i <= 100; i++){
        cout << i << setw(10);
        cout << i*i << endl;
        setw(0);
    }
    return 0;
}
