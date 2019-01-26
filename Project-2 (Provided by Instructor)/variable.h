class Variable: public Operand
{
public:
    Variable(string name)
    {
        this->name = name;
    }
    double evaluate();
private:
    string name;
};