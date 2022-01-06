#include <iostream>
#include "stack.hpp"
using namespace std;


// stack demostration
int main(int argc, char ** argv)
{
	Stack<int> stack;
	int d1 = 65;
	int d2 = 61;
	int d3 = 63;
	int d4 = 95;

	stack.PUSH(d1);
	stack.PUSH(d2);

	printf("%d\n",stack.INSPECT());
	stack.POP();
	printf("%d\n",stack.INSPECT());

	stack.PUSH(d3);
	stack.PUSH(d4);

	stack.peek(d4);

   	return 0;
}
