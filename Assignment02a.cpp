#include <iostream>
using namespace std;

struct Date {
    int day;
    int month;
    int year;

    void initDate() {
        day = 1;
        month = 1;
        year = 1900;
    }

    void printDateOnConsole() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }

    void acceptDateFromConsole() {
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;
    }

    bool isLeapYear() {
        if (year % 4 == 0) {
            if (year % 100 == 0) {
                if (year % 400 == 0)
                    return true;
                else
                    return false;
            } else
                return true;
        } else
            return false;
    }
};

void displayMenu() {
    cout << "Menu:" << endl;
    cout << "1. Initialize Date" << endl;
    cout << "2. Print Date" << endl;
    cout << "3. Accept Date from Console" << endl;
    cout << "4. Check if its a Leap Year" << endl;
    cout << "5. Exit" << endl;
}

int main() {
    Date date;
    int choice;

    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                date.initDate();
                cout << "Date initialized to the default values." << endl;
                break;
            case 2:
                date.printDateOnConsole();
                break;
            case 3:
                date.acceptDateFromConsole();
                break;
            case 4:
                if (date.isLeapYear())
                    cout << "The year " << date.year << " is a leap year." << endl;
                else
                    cout << "The year " << date.year << " is not a leap year." << endl;
                break;
            case 5:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 5);

    return 0;
}
