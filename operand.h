class Operand: public Expression
{
public:
    static Expression* parse(stringstream& in);
};
