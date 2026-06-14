#include <iostream>

using namespace std;

int main()
{
     string day;

     cout << "enter day name :";

       cin >> day;
      if    (day == "saturday")
        cout << "day1";
      else if (day == "sunday")
        cout << "day2";
      else if (day == "monday")
        cout << "day3";
      else if (day == "tuesday")
        cout << "day4";
      else if (day == "wednesday")
        cout << "day5";
      else if (day == "tursday")
        cout << "day6";
      else if (day == "friday")
        cout << "day7";
      else
        cout <<"Invalid Day Name!";


    return 0;
}
