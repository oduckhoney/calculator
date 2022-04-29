#include "calculator.h"

int main()
{
    Calculator calc;
    while(true) 
    {
    calc.input();
    calc.calculator();
    calc.output();
    }
}