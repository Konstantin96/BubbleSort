#pragma once
#include"Library.h"
template<typename type> class Stack5 {
private:
	type *els;
	size_t length;
	size_t buf_size;
public:
	Stack5();
	//parameter constructor
	Stack5(type* mass, int n);
	//copy constructor
	Stack5(const Stack5& obj);

	type& top();
	void push(type e);
	void pop();
	size_t size();
	bool empty();

	//destructor
	~Stack5();

};