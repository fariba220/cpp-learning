#include <iostream>

using namespace std;

int main()
{
    float num;
      cout<<"please enter your score:";
      cin >> num;

         if (num>=18 && num<=20)
      cout <<"your score is A";
        else if (num>=16 && num<18)
      cout << "your score is B";
        else if (num>=14 && num<16)
      cout << "your score is C";
        else
      cout <<"no status defined for this score";

    return 0;
}
