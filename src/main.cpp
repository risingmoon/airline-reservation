#include <iostream>

using namespace std;

int main()
{
    int choice = 1;
    while (choice) {
        cout << "Airline Reservation" << endl;

        // reserve a seat
        cout << "reserve a seat" << endl;

        // flight schedule
        cout << "display flight schedule" << endl;

        // display passenger information
        cout << "display passenger information" << endl;

        // flight details
        cout << "display flight details" << endl;

        // user ticket information
        cout << "display ticket information" << endl;

        // exit the program
        cout << "exit" << endl;

       // user input
        cin >> choice;
    }
    cout << "Exiting..." <<  endl;

    return 0;
}
