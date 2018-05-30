#pragma once
#include "Library.h"

class CharStack
{
	struct CharStackNode
	{
		char character;
		CharStackNode *next;

		CharStackNode(char character)
		{
			this->character = character;
			next = 0;
		}
	};
private:
	CharStackNode *top;

public:
	CharStack() :
		top(0)
	{
	}

	CharStack(const CharStack &source) :
		top(0)
	{
		if (source.top != 0)
		{
			CharStackNode *i = source.top->next;
			CharStackNode *j = new CharStackNode(source.top->character);

			top = j;

			while (i != 0)
			{
				j->next = new CharStackNode(i->character);

				i = i->next;
				j = j->next;
			}
		}
	}

	~CharStack()
	{
		delete[] top;
	}

	void push(char character)
	{
		CharStackNode *new_elem = new CharStackNode(character);

		if (top == 0)
		{
			top = new_elem;
			return;
		}
		new_elem->next = top;
		top = new_elem;
	}

	bool pop(char &character)
	{
		if (top == 0)
			return false;

		CharStackNode *del_elem = top;

		character = top->character;
		top = top->next;

		delete del_elem;

		return true;
	}
};

void input_char_stack(CharStack &char_stack)
{
	char character;
	static int count = 1;
	cout << "Zapolnite " << count++ << " char stack" << endl
		<< "Enter characters or \'Ctrl + Z\' and \'Enter\' to exit:" << endl;
	cin.clear();
	while (cin >> character) {
		char_stack.push(character);
	}


}

size_t length_of_char_stack(CharStack &char_stack)
{
	CharStack copy(char_stack);
	char dummy;
	size_t len = 0;

	while (copy.pop(dummy))
		++len;
	return len;
}