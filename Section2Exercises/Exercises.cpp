#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    //ask for ther name
    cout << "Please enter your first name: ";

    //read their name
    string name;
    cin >> name;

    //build greeting message
    const string greeting = "Hello, " + name + "!";

    //the number of blanks surrounding the greeting
    const int pad = 1;

    //the number of rows/colunms to write
    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + pad * 2 + 2;

    //write blank line to seperate input from output
    cout << endl;
    
    //write rows of output
    //invariant: we have written r rows so far
    for(int r = 0; r != rows; ++r){
        string::size_type c = 0;       

        //invariant: we have written c characters in the current row so far
        while(c != cols){
            //is it time to write he greeting?
            if(r == pad + 1 && c == pad + 1){
                cout << greeting;
                c += greeting.size();
            }else{
                //are we on the border?
                if(r == 0 || r == rows - 1
                || c ==0 || c == cols - 1){
                    cout << "*";
                }else{
                    cout << " ";
                }
                ++c;
            }
        }
        cout << endl;
    }

    return 0;
}
