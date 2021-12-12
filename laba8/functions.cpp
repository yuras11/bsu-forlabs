#include "functions.h"
bool isOperation(char temp)
{
    return temp == '+' || temp == '-' || temp == '*' || temp == '/' || temp == '^';
}
int Priority(char operation)
{
    if (operation == '^') {return 3;}
    if (operation == '*' || operation == '/') {return 2;}
    if (operation == '+' || operation == '-') {return 1;}
    return -1;
}
double Calculations(double number1, double number2, char operation)
{
    if (operation == '+') { return number1 + number2; }
    if (operation == '-') { return number1 - number2; }
    if (operation == '*') { return number1 * number2; }
    if (operation == '/') { return number1 / number2; }
    if (operation == '^')
    {
        double temp = 1;
        for (size_t i = 0; i < static_cast<int>(number2); i++)
        {
            temp *= number1;
        }
        return temp;
    }
    return 0;
}
double CalculatingTheExpression(string expression)
{
    string temp{};
    for (char i: expression)
    {
        if (i != ' ')
            temp += i;
    }
    expression = temp;
    temp = "";
    Stack<char> operations;
    Stack<double> result;
    for (size_t i = 0; i < expression.size(); ++i)
    {
        if (isOperation(expression[i]))
        {
            while (!(operations.IsEmpty()) && Priority(expression[i]) <= Priority(operations.top()))
            {
                double SecondValue = result >> 0;
                double FirstValue = result >> 0;
                result << Calculations(FirstValue, SecondValue, operations >> 0);
            }
            operations << expression[i];
        }
        else
        {
            if (expression[i] == '(')
            {
                if (expression[i+1] == '-')
                {
                    ++i;
                    while (expression[i] != ')')
                    {
                        temp = "";
                        temp += expression[i];
                        ++i;
                    }
                    result.push(-1*stod(temp));
                }
                else
                {
                    operations << expression[i];
                }
            }
            else if (expression[i] == ')')
            {
                while ((operations.top()) != '(')
                {
                    double SecondValue = result >> 0;
                    double FirstValue = result >> 0;
                    result << Calculations(FirstValue, SecondValue, operations >> 0);
                }
                operations >> 0;
            }
            else
            {
                temp = "";
                while (!isOperation(expression[i]) && expression[i] != ')'
                       && expression[i] != '(' && i != expression.size())
                {
                    temp += expression[i];
                    ++i;
                }
                --i;
                result.push(stod(temp));
            }
        }
    }
    while (!(operations.IsEmpty()))
    {
        double r = result >> 0;
        double l = result >> 0;
        result << Calculations(l, r, operations >> 0);
    }
    return result.top();
}
void solution()
{
    string expression;
    cout << "Enter your expression:" << endl;
    getline(cin, expression);
    cout << "It is equal to:" << endl;
    cout << CalculatingTheExpression(expression) << endl;
}
