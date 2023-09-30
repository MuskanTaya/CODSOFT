#include <iostream>
using namespace std;
int main()
{
    int num1, num2, result;
    char op,choice;
    do{
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        cout << "Enter an opeartor (+, -, *, /, %): ";
        cin >> op;

        switch (op)
        {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        case '%':
            result = num1 % num2;
            break;
        default:
            cout << "Enter a valid operator" << endl;
            break;
        }
        cout<<num1<<" "<<op<<" "<<num2<<" = "<<result<<endl;
        cout<<"Do you want to perform another calculation Y/N : ";
        cin>>choice;
    }while(choice=='Y' || choice=='y');

    return 0;
}