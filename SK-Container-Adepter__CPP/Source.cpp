#include <iostream>
#include <stack>
#include <string>
#include <conio.h>

/*  Source by CodeGuru
    Modified for Learn by Rizky Khapidsyah */

using namespace std;

int main() {

    stack<string> weekdays;
    weekdays.push("Saturday");
    weekdays.push("Friday");
    weekdays.push("Thursday");
    weekdays.push("Wednesday");
    weekdays.push("Tuesday");
    weekdays.push("Monday");
    weekdays.push("Sunday");

    cout << "Size of the stack: " << weekdays.size() << endl;

    while (!weekdays.empty()) {
        cout << weekdays.top() << endl;
        weekdays.pop();
    }

    _getch();
    return 0;
}