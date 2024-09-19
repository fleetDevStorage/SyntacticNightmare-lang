#include <map>
#include <iostream>

enum TokenType
{
    // Literals
    Number,
    Identifier,

    // Grouping * Operators
    BinaryOperator,
    Equals,
    OpenParen, CloseParen,

    // Keywords
    Let,
};

std::map<char*, int> Keywords = {
    { "let", Let }
};

struct Token {
    TokenType type;
    char* value;
};

Token token(TokenType tokentype, char* val)
{
    Token tk;
    tk.type = tokentype;
    tk.value = val;
    return tk;
}

class Lexer {

};