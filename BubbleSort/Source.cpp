#include "BubbleSort.h"
#include "StackInt6.h"
#include "StackChar7.h"
#include <stack>

template<typename T>
void Sort(T* arr, int size) {
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1; j++) {
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
		}
	}
}



int main() {
	int n;
	cout << "Enter the task num:";
	cin >> n;
	switch (n) {

		// Модифицируйте класс с именем Time добавлением статического
		// метода для получения текущего системного времени.
	case 1: {
	}break;

		// Модифицируйте класс с именем Date добавлением статического 
		// метода для получения текущей даты
	case 2: {
	}break;

		//шаблонный класс bubbleSort.
	case 3: {
		int a[5] = { 3,4,6,1,0 };
		BubbleSort<int>::Sort(a, 5);
		BubbleSort<int>::print(a);
	}break;

		//шаблон функции bubbleSort.
	case 4: {
		int a[5] = { 3,4,6,1,0 };
		Sort(a, 5);
		for (int i = 0; i < 5; i++)
			cout << a[i] << endl;
	}break;

		//Разработать класс для работы со стеком.
		// Элемент стека – действительное число. Применить класс для
		// вывода возрастающих серий последовательности действительных чисел 
		// a) в обратном порядке;
		// b) в том же порядке(серия – упорядоченная 
		//                             последовательность максимальной длины)
	case 5: {
		stack<stack<int>> s;
		stack<int> in_s;

		int a[9] = { 8,1,2,3,4,5,2,4,9 };
		s.push(in_s);
		s.top().push(a[0]);
		for (int i = 1; i < 9; i++)
		{
			if (s.top().top() < a[i])
				s.top().push(a[i]);
			else {
				stack<int>in_st;
				s.push(in_st);
				s.top().push(a[i]);
			}
		}

		while (!s.empty()) {
			while (!s.top().empty()) {
				cout << s.top().top() << "\t";
				s.top().pop();
			}
			cout << endl;
			s.pop();
		}
	}break;

		// Разработать класс для работы со стеком. 
		// Элемент стека – целое число. Ввести две 
		// неубывающие последовательности чисел в два стека.
		// Использовать третий стек для слияния двух последовательностей 
		// в одну неубывающую последовательность.
	case 6: {
		stack_int* f = new stack_int(5);
		for (int i = 1; i <= 5; i++)
		{
			f->push(i);
		}
		cout << f->pop() << "\n" << f->pop() << "\n" << f->pop() <<
			"\n" << f->pop() << "\n" << f->pop() << "\n";
	}break;

		// Разработать класс для работы со стеком. 
		// Элемент стека – символ. Сформировать два стека, 
		// содержащие последовательности символов. 
		// Подсчитать общее число элементов в стеках.
		// Предусмотреть восстановление исходного расположения элементов в стеках.
	case 7: {
		CharStack stack_int, stack2;

		input_char_stack(stack_int);
		input_char_stack(stack2);

		cout << "Length of char stack_int 1: " << length_of_char_stack(stack_int)
			<< "\nLength of char stack_int 2: " << length_of_char_stack(stack2) << endl;
	}break;

		// Разработать класс для работы со стеком. Элемент стека – символ. 
		// Использовать стек для проверки правильности расстановки скобок
		// трех типов (круглых, квадратных и фигурных) во введенном выражении.
	case 8: {
		char s[] = "}(this{example[(task)} )for my[group]]";
		stack<char> s1;
		stack<char> s2;
		stack<char> s3;

		if (s[0] == ')' || s[0] == ']' || s[0] == '}')
			cout << "Uncorrect brackets" << endl;
		else
		{
			for (int i = 0; i < strlen(s); i++)
			{
				if (s[i] == '(')
					s1.push('(');
				else if (s[i] == '[')
					s2.push('[');
				else if (s[i] == '{')
					s3.push('{');
				else if (s[i] == ')') {
					if (!s1.empty())s1.pop();
					else {
						break;
						cout << "Uncorrect brackets" << endl;
					}
				}
				else if (s[i] == ']') {
					if (!s2.empty())s2.pop();
					else {
						break;
						cout << "Uncorrect brackets" << endl;
					}
				}
				else if (s[i] == '}') {
					if (!s3.empty())s3.pop();
					else {
						break;
						cout << "Uncorrect brackets" << endl;
					}
				}
			}
			if (s1.empty() && s2.empty() && s3.empty())
				cout << "Correct brackets" << endl;
			else
				cout << "Uncorrect brackets" << endl;
		}
	}break;

		// Написать программу, моделирующую работу автомойки. Исходные данные:
		// Прибытие машин в общем  случае случайно, но зависит от текущего времени
		// Клиенты могут выбирать различные программы мойки из 5 программ различной
		// длительности(10 - 30мин).Выдать рекомендации по количеству моечных боксов для
		// участков дороги, имеющих различную величину транспортного потока.
	case 9: {

	}break;

	}
	system("pause");
	return 0;
}