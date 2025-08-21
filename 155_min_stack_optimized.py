class MinStack:
    def __init__(self):
        self.stack = []
        self.minStack = []

    def push(self, val: int) -> None:
        # Dessa forma, o que está no topo da minstack sempre vai ser o menor. se for removido, vai ser removido junto com o que causou a comparação
        # ou seja, se o que chegou na stack for maior que o que esta atualmente no topo da minstack, sera inserido na minstack o valor no fim de novo
        # se for menor, sera inserido ele
        # de qualquer forma, portanto, removendo ambos não há problema
        self.stack.append(val)
        val = min(val, self.minStack[-1] if self.minStack else val)
        self.minStack.append(val)

    def pop(self) -> None:
        self.stack.pop()
        self.minStack.pop()

    def top(self) -> None:
        return self.stack[-1]

    def getMin(self) -> int:
        return self.minStack[-1]
