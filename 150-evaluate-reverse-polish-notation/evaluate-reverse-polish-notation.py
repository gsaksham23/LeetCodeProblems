class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        for token in tokens:
            if token not in "+-*/":
                stack.append(int(token))
            elif token == '+':
                stack.append(stack.pop() + stack.pop())
            elif token == '-':
                stack.append(-stack.pop()+stack.pop())
            elif token == '*':
                stack.append(stack.pop() * stack.pop())
            else:
                stack.append(int(stack.pop()**-1 * stack.pop()))
        return stack.pop()