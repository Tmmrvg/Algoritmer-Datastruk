#include <iostream>

int n;
int s1;
int sol;

void UserNumber()
{
    std::cout << "Please enter a number: ";
    std::cin >> n;
}

void Factorial()
{
    sol = 1;
    if (n == 1 || n == 0)
    {
        std::cout << "The factorial of " << n << " is: " << sol << std::endl;
    }
    else if (n < 0)
    {
        std::cout << "Error! Factorial of negative numbers doesn't exist./n";
    }
    else if (n > 12)
    {
        std::cout << "Error! Factorial of " << n << " returned a too large number./n";
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            sol *= i;
        }
        std::cout << "The factorial of " << n << " is: " << sol << std::endl;
    }
}

void Fibonacci()
{
    std::cout << "The number of fibonacci terms: " << n << std::endl;
    int f1 = 0, f2 = 1, fx;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            std::cout << f1 << ", ";
        }
        if (i == 2)
        {
            std::cout << f2 << ", ";
        }
        fx = f1 + f2;
        f1 = f2;
        f2 = fx;
        std::cout << fx << ", ";
    }
}

int main(int argc, char* argv[])
{
    UserNumber();
    Factorial();
    Fibonacci();
}
