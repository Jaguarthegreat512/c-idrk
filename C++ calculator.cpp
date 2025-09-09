#include <iostream>
using namespace std;

int main() {
    int x;
    int y;

    cout << "Please enter your first number: ";
    cin >> x;

    cout << "Please enter your second number: ";
    cin >> y;

    // Colors: Red = 31, Green = 32, Yellow = 33, Blue = 34, Magenta = 35, Cyan = 36

    // add (red)
    cout << "\033[31mIf you added those two numbers together it would be: "
         << x << " + " << y << " = " << (x + y) << "\033[0m" << endl;

    // sub (green)
    cout << "\033[32mIf you subtracted those two numbers it would be: "
         << x << " - " << y << " = " << (x - y) << "\033[0m" << endl;

    // multi (yellow)
    cout << "\033[33mIf you multiplied those two numbers it would be: "
         << x << " * " << y << " = " << (x * y) << "\033[0m" << endl;

    // divide (blue)
    double result = (double)x / y;
    result = (int)(result * 100 + 0.5) / 100.0;
    cout << "\033[34mIf you divided those two numbers it would be: "
         << x << " / " << y << " = " << result << " (To the second decimal place)\033[0m" << endl;

    // mod (magenta)
    cout << "\033[35mThe modual of these two numbers would be: "
         << x << " % " << y << " = " << (x % y) << "\033[0m" << endl;

    // increment (cyan)
    cout << "\033[36mIncrementing the first number: " 
         << ++x << "\033[0m" << endl;

    // decrement
    cout << "Decrementing the second number: " 
         << --y << endl;

    return 0;
}
