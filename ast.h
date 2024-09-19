enum NodeType {
    // Statements
    Program,
    // Expressions
    BinaryExpr,
    // Literals
    NumericLiteral,
    Identifier
};

struct Stmt { // statements do not have return values
    NodeType kind;
};

struct ProgramObject : Stmt {
    NodeType kind = Program;
    Stmt body[];
};

struct Expr : Stmt {}; // expressions return values, unlike statements

