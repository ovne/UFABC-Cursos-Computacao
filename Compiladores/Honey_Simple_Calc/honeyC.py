import sys
from antlr4 import *
from HoneyCalcLexer import HoneyCalcLexer
from HoneyCalcParser import HoneyCalcParser
from HoneyCalcVisitor import HoneyCalcVisitor


class HoneyVisitor(HoneyCalcVisitor):
    def visitExpr(self, ctx: HoneyCalcParser.ExprContext):
        # Handle atomic expressions (BuzzInt or BuzzDec)
        if ctx.BuzzInt():
            return int(ctx.BuzzInt().getText())
        elif ctx.BuzzDec():
            return float(ctx.BuzzDec().getText())
        
        # Handle parenthesis
        elif ctx.expr(0) and ctx.expr(1) is None:  # Only one expr inside parentheses
            return self.visit(ctx.expr(0))

        # Handle operations
        left = self.visit(ctx.left)
        right = self.visit(ctx.right)
        op = ctx.op.text
        
        if op == '+':
            return left + right
        elif op == '-':
            return left - right
        elif op == '*':
            return left * right
        elif op == '/':
            if right == 0:
                print('BUZZ FUZZ!! Trying to divide by zero!')
                return 0
            return left / right
        elif op == '**':
            return left ** right
        else:
            raise ValueError(f"Unknown operator: {op}")


def calc(line: str) -> float:
    input_stream = InputStream(line)
    
    lexer = HoneyCalcLexer(input_stream)
    stream = CommonTokenStream(lexer)

    parser = HoneyCalcParser(stream)
    tree = parser.expr()

    visitor = HoneyVisitor()
    return visitor.visit(tree)


if __name__ == '__main__':
    while True:
        try:
            line = input("bee>>> ")
            if line.lower() in ('exit', 'quit'):
                break
            result = calc(line)
            print(result)
        except Exception as e:
            print(f"Error: {e}")
