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

    //row border of spaces
    const string spaces(greeting.size() + (pad * 2), ' ');

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
                    c++;
                }else if((r == 1 || r == 3)
                && c == 1 ){
                    cout << spaces;
                    c += spaces.size();
                }else{
                    cout << " ";
                    ++c;
                }
            }
        }
        cout << endl;
    }

    //square
    const int square = 10;
    for (int i = 0; i < square; i++)
    {
        const string line(square, '*');
        cout << line << endl;
    }
    //rectangle
    const int side = 10;
    const int top = side * 3;
    for (int i = 0; i < side; i++)
    {
        const string line(top, '*');
        cout << line << endl;
    }

    //equilateral triangle
    const int base = 11;
    if(base % 2 == 0){
        cout << "Error: base must be odd number" << endl;
    }else{
        for (int i = 0; i < base; i++)
        {
            string mid(i + 1, '*');
            string sides((base - mid.size()) / 2, ' ');
            cout << sides << mid << sides << endl;
        }
        
    }

    //right angled triangle
    for (int i = 0; i < 10; i++)
    {
        string s(i + 1, '*');
        cout << s << endl;
    }
    
    //2-7
    int i = 10;
    while (i >= -5)
    {
        cout << i << endl;
        i--;
    }

    //2-8
    long int result = 1;
    for (int i = 2; i < 10; i++)
    {
        result *= i;
    }
    cout << result << endl;

    //2-9
    cout << "enter a number" << endl;
    int response[2];
    cin >> response[0];
    cout << "enter another number" << endl;
    cin >> response[1];
    int biggest = response[0] > response[1]? response[0] : response[1];
    cout<< biggest << " is larger" << endl;
    
    
    

    return 0;
}
