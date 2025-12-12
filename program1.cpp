// Program-1.cpp
// Calculator class: Addition, Subtraction, Multiplication, Division
#include <iostream>
#include <string>
using namespace std;

class Cal {
public:
    double a, b;

    Cal(double a, double b) {
        this->a = a;
        this->b = b;
    }

    double add() 
    {  
        return a + b;   
    }
    double sub() 
    { 
        return a - b; 
    }
    double mul() 
    { 
        return a * b; 
    }
    double div() 
    { 
        if (b == 0) 
        {
            cout << "Division by zero not allowed.";
            return 0;
        }
        return a / b; 
    }
};

int main() {
    double a, b;
    string op;
    cin >> a >> b >> op;

    Cal c(a, b);
    double result;

    if (op == "add") result = c.add();
    else if (op == "sub") result = c.sub();
    else if (op == "mul") result = c.mul();
    else if (op == "div") result = c.div();
    else {
        cout << "Invalid operation";
        return 0;
    }

    cout << result<<endl;
    return 0;
}
