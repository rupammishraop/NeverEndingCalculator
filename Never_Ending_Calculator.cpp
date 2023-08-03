
///made by rupam mishra

#include <iostream>
#include <cstdlib>
using namespace std;

class calculator
{
    float x, y;
    char op;

public:
    friend float cal1(calculator o1);
    void setdata(void)
    {
        cin >> x;
        cin >> op;
        cin >> y;
    }
    void secondsetdata(float sum)
    {
        x = sum;
        cin >> op;
        cin >> y;
    }
};

// Adding programe
float add(float a, float b)
{
    return a + b;
}
float substitution(float a, float b)
{
    return a - b;
}
float multiplication(float a, float b)
{
    return a * b;
}
float divide(float a, float b)
{
    float c;
    c = a / b;
    return c;
}

// prfloat programe
void addprint(float sum)
{
    cout << (sum);
}

void subprint(float sub)
{
    cout << int(sub);
}
void mulprint(float mul)
{
    cout << int(mul);
}
void divprint(float div)
{
    cout << div;
}

// operation programe
float cal1(calculator o1)
{

    float sum, mul, sub;
    float div;
    switch (o1.op)
    {
    case '+':
        sum = add(o1.x, o1.y);
        addprint(sum);
        return sum;
        break;
    case '-':
        sub = substitution(o1.x, o1.y);
        subprint(sub);
        return sub;
        break;

    case '*':
        mul = multiplication(o1.x, o1.y);
        mulprint(mul);
        return mul;
        break;
    case '/':
        div = divide(o1.x, o1.y);
        divprint(div);
        return div;
        break;
    default:
        cout << "wrong op" << endl;
        exit(0);
        return 0;
        break;
    }
}

int main()
{
    calculator c1, c2;
    float sum;
    c1.setdata();
    sum = cal1(c1);
    while (1 > 0)
    {
        c2.secondsetdata(sum);
        sum = cal1(c2);
    }

    return 0;
}
