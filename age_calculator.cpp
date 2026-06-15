#include <iostream>

using namespace std;

int main()
{
    int totalDays, years, months, days,remainingDays;

    cout << "Enter number of days passed in your life: ";
    cin >> totalDays;


    years = totalDays / 365;
    remainingDays = totalDays % 365;
    months = remainingDays / 30;
    days = remainingDays % 30;

    cout << "You have lived for " << years << " years, " << months << " months, and " << days << " days" << endl;

    return 0;
}
