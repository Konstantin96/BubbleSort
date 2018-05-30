#pragma once
class stack_int {
private:
	int size;
	int* data;
	size_t ptr;
public:

	stack_int(int stack_size) {
		size = stack_size;
		ptr = 0;
		data = new int[stack_size];
	}

	~stack_int() {
		delete[] data;
	}

	void push(int value) {
		if (ptr >= (size_t)size)
			cerr << "Stack is full\n";
		data[this->ptr++] = value;
	}

	int pop() {
		if (ptr == 0)
			cerr<< "Stack is empty";
		int f;
		f = data[--ptr];
		return f;
	}
};