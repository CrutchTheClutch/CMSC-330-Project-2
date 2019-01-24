class Literal: public Operand
{
public:
    Literal(double value)
    {
        this->value = value;
    }
    double evaluate()
    {
        return value;
    }
private:
    double value;
};