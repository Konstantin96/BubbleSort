#pragma once
class stack1 {
private:
	int size;
	int* data;
	size_t ptr;
public:

	stack1(int stack_size) {
		size = stack_size;
		ptr = 0;
		data = new int[stack_size];
	}

	~stack1() {
		delete[] data;
	}

	void push(int value) {
		if (ptr >= (size_t)size)
			cerr << "stack1 is full\n";
		data[this->ptr++] = value;
	}

	int pop() {
		if (ptr == 0)
			cerr<< "stack1 is empty";
		int f;
		f = data[--ptr];
		return f;
	}
};