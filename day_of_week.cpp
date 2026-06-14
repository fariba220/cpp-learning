#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "enter your number: "<<endl;
    cin >> number;
       if   (number==1)
        cout << "Saturday";
     else if (number==2)
        cout << "Sunday";
     else if (number==3)
        cout << "Monday";
     else if (number==4)
        cout << "Tuesday";
     else if (number==5)
        cout << "Wednesday";
     else if (number==6)
        cout << "Thursday";
     else if (number==7)
        cout << "friday";
     else
    cout <<"invalid number,please try again";


    return 0;
}
