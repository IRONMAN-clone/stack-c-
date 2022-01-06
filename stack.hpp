#ifndef STACK_H
#define STACK_H

#define MAX_SIZE 35000

template <typename __T>
class Stack{
protected:
	__T storage[MAX_SIZE];
	int top = -1;
public:
	void PUSH(__T data)
	{
		if(top < MAX_SIZE){
			top += 1;
			storage[top] = data;
		}
		else if(top == MAX_SIZE)
		{
			printf("Stack is full (size - %d)\n",MAX_SIZE);
		}
	}
	void POP()
	{
		if(top >= -1){
			top -= 1;
		}
		else if(top < 0){
			printf("Stack is empty can't POP\n");
		}
	}
	void isFull_Empty()
	{
		if(top == MAX_SIZE)
		{
			printf("Stack is full\n");
		}
		else if(top < 0)
		{
			printf("Stack is empty\n");
		}
	}

	void peek(__T value)
	{
		for(int i = 0; i <= MAX_SIZE; i++){
			if(storage[i] == value){
				printf("The value is present in index [%d]\n",i); 
				break;
			}
		}
	}

	__T peek_ind(int index)
	{
		return storage[index];
	}

	__T INSPECT()
	{
		return (top >= 0) ? storage[top] : printf("Stack is empty\n");
	}
};

#endif //STACK_H