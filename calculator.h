class Calculator
{
public:
    void input();
    void calculator();
    void output();

private:
    void add();
    void sub();
    void mul();
    void divide();
    
private:
    int num1, num2;
    char op;
    float res;
};