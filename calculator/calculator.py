### This code was heavily inspired by:
###     http://effbot.org/zone/simple-top-down-parsing.htm

from sys import stdin
import re

class IntLit:
    def __init__(self, value):
        self.value = value
    
    def nud(self):
        return self.value

class AddOp:
    lbp = 10
    def led(self, left):
        right = expression(self.lbp)
        return left + right

class SubOp:
    lbp = 10
    def nud(self):
        return -expression(100)
    def led(self, left):
        right = expression(self.lbp)
        return left - right


class MulOp:
    lbp = 20
    def led(self, left):
        right = expression(self.lbp)
        return left * right

class DivOp:
    lbp = 20
    def led(self, left):
        right = expression(self.lbp)
        return left / right

class LParen:
    def nud(self):
        e = expression()
        advance(RParen)
        return e

class RParen:
    lbp = 0

class End:
    lbp = 0

token_pattern = re.compile("\s*(?:(\d+)|(.))")

def tokenize(line):
    for int_lit, op in token_pattern.findall(line):
        if int_lit:
            yield IntLit(int(int_lit))
        elif op == "+":
            yield AddOp()
        elif op == "-":
            yield SubOp()
        elif op == "*":
            yield MulOp()
        elif op == "/":
            yield DivOp()
        elif op == "(":
            yield LParen()
        elif op == ")":
            yield RParen()
    yield End()

def advance(token_type=None):
    global token, next_token
    if token_type and token.__class__ != token_type:
        raise SyntaxError("Expected {}".format(token_type))
    token = next_token()

def expression(rbp=0):
    global token, next_token
    t = token
    token = next_token()
    left = t.nud()
    while rbp < token.lbp:
        t = token
        token = next_token()
        left = t.led(left)
    return left

token = End()
next_token = None
for line in stdin.read().splitlines():
    next_token = tokenize(line).__next__
    token = next_token()
    print("{:.2f}".format(expression()))
