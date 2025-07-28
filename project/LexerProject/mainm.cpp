#include <iostream>
#include "Lexer.h"

int main() {
    Lexer lexer;
    std::string input;

    std::cout << "Enter GW-BASIC code (end input with an empty line):\n";
    while (std::getline(std::cin, input)) {
        if (input.empty()) break; // end input on empty line

        std::vector<Token> tokens = lexer.tokenize(input);
        for (const auto& token : tokens) {
            std::cout << "Type: ";
            switch (token.type) {
            case TokenType::Number:     std::cout << "Number"; break;
            case TokenType::String:     std::cout << "String"; break;
            case TokenType::Identifier: std::cout << "Identifier"; break;
            case TokenType::Keyword:    std::cout << "Keyword"; break;
            case TokenType::Symbol:     std::cout << "Symbol"; break;
            case TokenType::Comment:    std::cout << "Comment"; break;
            case TokenType::END_OF_LINE:std::cout << "EndOfLine"; break;
            case TokenType::Operator:   std::cout << "Operator"; break;
            case TokenType::Separator:  std::cout << "Seperator"; break;
            case TokenType::Invalid:    std::cout << "Invalid"; break;
            }
            std::cout << ", Value: \"" << token.value << "\", Position: " << token.position << "\n";
        }
    }

    return 0;
}
