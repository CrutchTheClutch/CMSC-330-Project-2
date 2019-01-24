class EqualTo: public SubExpression
{
public:
    EqualTo(Expression* left, Expression* right): SubExpression(left, right)
    {
    }
    int evaluate()
    {
        return left->evaluate() == right->evaluate();
    }
};