#pragma once
class stack {
private:
	int size;
	int* data;
	size_t ptr;
public:

	stack(int stack_size) {
		size = stack_size;
		ptr = 0;
		data = new int[stack_size];
	}

	~stack() {
		delete[] data;
	}

	void push(int value) {
		if (ptr >= (size_t)size)
			cerr << "stack is full\n";
		data[this->ptr++] = value;
	}

	int pop() {
		if (ptr == 0)
			cerr<< "stack is empty";
		int f;
		f = data[--ptr];
		return f;
	}
};