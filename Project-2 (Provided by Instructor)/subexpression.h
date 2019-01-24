class SubExpression: public Expression
{
public:
    SubExpression(Expression* left, Expression* right);
    static Expression* parse();
protected: 
    Expression* left;
    Expression* right;
};    