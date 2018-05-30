#include "Stack_class5.h"
template <typename type>
Stack5<type>::Stack5() {
	buf_size = 0;
	length = 0;
	els = nullptr;
}
template <typename type>
Stack5<type>::Stack5(type* mass, int n) {
	this->length = n;
	els = new type[this->length];
	this->buf_size = this->length;
	for (int i = 0; i < length; i++)
		this->els[i] = mass[i];
}

template<typename type>
Stack5<type>::Stack5(const Stack5& obj) {
	this->length = obj.length;
	this->buf_size = obj.buf_size;
	this->els = new type[length];
	for (int i = 0; i < length; i++)
		els[i] = obj.els[i];
}

template<typename type>
type& Stack5<type>::top() {
	return els[length - 1];
}

template<typename type>
size_t Stack5<type>::size() {
	return length;
}

template<typename type>
bool Stack5<type>::empty() {
	return (size() == 0);
}
template <typename type>
void Stack5<type>::pop() {
	length--;
}

template <typename type>
Stack5<type>::~Stack5() {
	delete[] els;
	els = nullptr; // íàäî óäàëèòü àäðåñ 
}

template <typename type>
void Stack5<type>::push(type e) {
	if (buf_size == 0) {
		buf_size = 2;
		els = new type[buf_size];
	}
	else if (buf_size <= length) {
		buf_size *= 2;
		type *tmp = new type[buf_size];
		for (int i = 0; i < length; i++)
			tmp[i] = els[i];
		delete[] els;
		els = tmp;
	}
	els[length++] = e;
}