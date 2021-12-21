#include "functions.h"

static char ForExpressionInBrackets = '0';

bool isOperation(char temp)
{
    return temp == '+' || temp == '-' || temp == '*' || temp == '/' || temp == '^';
}

int Priority(char operation)
{
    if (operation == '^')
    { return 3; }
    if (operation == '*' || operation == '/')
    { return 2; }
    if (operation == '+' || operation == '-')
    { return 1; }
    return -1;
}

double Calculations(double number1, double number2, char operation)
{
    if (operation == '+')
    { return number1 + number2; }
    if (operation == '-')
    { return number1 - number2; }
    if (operation == '*')
    { return number1 * number2; }
    if (operation == '/')
    { return number1 / number2; }
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
    int count_opened_brackets = 0;
    int count_closed_brackets = 0;
    int count_operations = 0;
    for (int i = 0; i < expression.size(); ++i)
    {
        if(expression[i] != ' ')
        {
            temp += expression[i];
        }
        if(expression[i] == '(')
        {
            ++count_opened_brackets;
        }
        else if(expression[i] == ')')
        {
            ++count_closed_brackets;
        }
        else if(isOperation(expression[i]) && expression[i] != '(' && expression[i] != ')'
        && i != expression.size() - 1 && i != 0 && expression[i-1] != '(')
        {
            ++count_operations;
        }
    }
    if(count_closed_brackets != count_opened_brackets)
    {
        throw runtime_error("Incorrect expression");
    }
    if(count_operations == 0 && count_opened_brackets == 0)
    {
        return stod(expression);
    }
    else if (count_operations == 0)
    {
        temp = "";
        for (int i = 0; i < expression.size(); ++i)
        {
            if(expression[i] != '(' && expression[i] != ')')
            {
                temp += expression[i];
            }
        }
        return stod(temp);
    }
    expression = temp;
    Stack<char> Operations;
    Stack<double> Result;
    for (int i = 0; i < expression.size(); ++i)
    {
        if (isOperation(expression[i]))
        {
            if (i == 0 && expression[i++] == '-')
            {
                if (expression[i] == '(')
                {
                    string s = "0";
                    s += temp;
                    return CalculatingTheExpression(s);
                }
                else
                {
                    while (!isOperation(expression[i]))
                    {
                        temp += expression[i++];
                    }
                    Result << stod(temp);
                }
            }
            while (!(Operations.IsEmpty()) && Priority(expression[i]) <= Priority(Operations.top()))
            {
                double second_value = Result >> 0;
                double first_value = Result >> 0;
                Result << Calculations(first_value, second_value, Operations >> 0);
            }
            Operations << expression[i];
            if (expression[i + 1] == '-')
            {
                if (expression[i + 2] == '(')
                {
                    ++i;
                    temp = "";
                    while (expression[i] != ')')
                        temp += expression[++i];
                    Result << -CalculatingTheExpression(temp);
                }
                else
                {
                    temp = " ";
                    i++;
                    while ((!isOperation(expression[i]) || expression[i] == '-') && i != expression.size())
                    {
                        temp += expression[i++];
                    }
                    --i;
                    Result << stod(temp);
                }
            }
        }
        else
        {
            if (expression[i] == '(')
            {
                if (expression[i + 1] == '-')
                {
                    ++i;
                    temp = "";
                    while (expression[i] != ')')
                    {
                        temp += expression[i++];
                    }
                    Result << CalculatingTheExpression(temp);
                    ++i;
                }
                else
                {
                    Operations << expression[i];
                }
            }
            else if (expression[i] == ')')
            {
                while ((Operations.top()) != '(')
                {
                    double second_value = Result >> 0;
                    double first_value = Result >> 0;
                    Result << Calculations(first_value, second_value, Operations >> 0);
                }
                Operations >> 0;
            }
            else
            {
                temp = " ";
                while (!isOperation(expression[i]) && expression[i] != ')' && expression[i] != '('
                       && i != expression.size())
                {
                    temp += expression[i++];
                }
                --i;
                Result << stod(temp);
            }
        }
    }
    while (!(Operations.IsEmpty()))
    {
        double SecondValue = Result >> 0;
        double FirstValue = Result >> 0;
        Result << Calculations(FirstValue, SecondValue, Operations >> 0);
    }
    return Result.top();
}
void solution()
{
    string expression;
    cout << "Enter your expression:" << endl;
    getline(cin, expression);
    cout << "It is equal to:" << endl;
    cout << CalculatingTheExpression(expression) << endl;
}
