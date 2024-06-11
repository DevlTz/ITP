    // Program to check if input time is correct
    #include <iostream>
    #include <ctime>
    using namespace std;
    
    int main() {
        time_t now = time(0);
        tm *ltm = localtime(&now);
        
        int hour, minute;
        cout << "Enter the hour: ";
        cin >> hour;
        cout << "Enter the minute: ";
        cin >> minute;
        
        if (hour == ltm->tm_hour && minute == ltm->tm_min) {
            cout << "Correct time!" << endl;
        } else {
            cout << "Incorrect time. Correct time is: " << ltm->tm_hour << ":" << ltm->tm_min << endl;
        }

        return 0;
    }