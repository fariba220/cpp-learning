#include <iostream>
using namespace std;

int main()
{
    double num1, num2, result;
    char op;

          cout << "Enter an operation (such as 4+6 or 5*7)";
          cin >> num1 >> op >> num2;

        if (op == '+')
    {
           result = num1 + num2;
           cout << num1 << " + " << num2 << " = " << result << endl;
    }
        else if (op == '-')
{
           result = num1 - num2;
           cout << num1 << " - " << num2 << " = " << result << endl;

    }
        else if (op == '*')
{
           result = num1 * num2;
           cout << num1 << " * " << num2 << " = " << result << endl;
    }
        else if (op == '/')
        if (num2 != 0)
{
            result = num1 / num2;
            cout << num1 << " / " << num2 << " = " << result << endl;
}
        else
            cout << "Error: Division by zero is not possible!" << endl;
        else
            cout << "Invalid operator! Use + , - , * , /" << endl;

    return 0;
}
