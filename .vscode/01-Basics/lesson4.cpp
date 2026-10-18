
#include <iostream>
using namespace std;

int main() {
    int score;

    cout << "Enter your score: ";
    cin >> score;

    if (score >= 75) {
        cout << "Passed!" << endl;
    } else {
        cout << "Failed!" << endl;
    }

    return 0;
}
