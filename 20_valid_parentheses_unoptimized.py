class Solution:
    def isValid(self, s: str) -> bool:
        if len(s) < 2:
            return False
        stack = []

        for i in range(0, len(s)):
            if s[i] == "(" or s[i] == "[" or s[i] == "{":
                stack.append(s[i])
            else:
                if len(stack) > 0:
                    if s[i] == ")" and stack[-1] != "(":
                        return False
                    if s[i] == "]" and stack[-1] != "[":
                        return False
                    if s[i] == "}" and stack[-1] != "{":
                        return False
                    stack.pop()
                else:
                    return False

        if len(stack) > 0:
            return False

        return True
