#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    const int maxSquare = 10000;
    int _maxSquare = maxSquare * maxSquare;
    int length = 0;
    while(_maxSquare != 0){
        _maxSquare /= 10;
        length++;
    }

    for(int i = 1; i <= maxSquare; i++){
        cout << i << setw(length + 1);
        cout << i*i << endl;
        setw(0);
    }
    return 0;
}
