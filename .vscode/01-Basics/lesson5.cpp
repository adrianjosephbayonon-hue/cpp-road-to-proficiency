#include <iostream>
using namespace std;

int main() {
    int choice = 2;

    switch (choice) {
        case 1:
            cout << "View grades" << endl;
            break;

        case 2:
            cout << "View attendance" << endl;
            break;

        case 3:
            cout << "Exit" << endl;
            break;

        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}