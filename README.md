This C++ program converts an infix mathematical expression to its equivalent postfix notation. The program uses a stack to efficiently process the input expression.

How it Works
The ptoi function takes an infix expression as a string and converts it to postfix notation. It iterates through each character of the input expression, pushing operands onto the stack and performing operations when operators are encountered. The final postfix expression is obtained by popping the result from the stack.

The main function demonstrates the conversion by providing a sample infix expression "23+5*". The converted postfix expression is then displayed.
