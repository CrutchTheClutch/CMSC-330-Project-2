class Literal: public Operand
{
public:
    Literal(double value)
    {
        this->value = value;
    }
    int evaluate()
    {
        return value;
    }
private:
    double value;
};