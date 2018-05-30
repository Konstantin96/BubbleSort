#include "BubbleSort.h"
#include "Stack_class5.h"
#include "StackInt6.h"
#include "StackChar7.h"

template<typename T>
void Sort(T* arr, int size) {
	for (int i = 0;i < size - 1; i++)
	{
		for (int j = 0; j < size - 1;j++) {
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

		case 1: {		
		}break;
			
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

			//–азработать класс дл€ работы со стеком.
			// Ёлемент стека Ц действительное число. ѕрименить класс дл€
			// вывода возрастающих серий последовательности действительных чисел 
     		// a) в обратном пор€дке;
	    	// b) в том же пор€дке(сери€ Ц упор€доченна€ 
			//                             последовательность максимальной длины)
		case 5: {
			int a[10] = { 8,1,2,3,4,5,2,4,9 };
			
		}break;

			// –азработать класс дл€ работы со стеком. 
			// Ёлемент стека Ц целое число. ¬вести две 
			// неубывающие последовательности чисел в два стека.
			// »спользовать третий стек дл€ сли€ни€ двух последовательностей 
			// в одну неубывающую последовательность.
		case 6: {
			stack* f = new stack(5);
			for (int i = 1; i <= 5; i++)
			{
				f->push(i);
			}
			cout << f->pop() << "\n" << f->pop() << "\n" << f->pop() << 
				"\n" << f->pop() << "\n" << f->pop() << "\n";
		}break;

			// –азработать класс дл€ работы со стеком. 
			// Ёлемент стека Ц символ. —формировать два стека, 
			// содержащие последовательности символов. 
			// ѕодсчитать общее число элементов в стеках.
			// ѕредусмотреть восстановление исходного расположени€ элементов в стеках.
		case 7:{
			CharStack stack1, stack2;

			input_char_stack(stack1);
			input_char_stack(stack2);

			cout << "Length of char stack 1: " << length_of_char_stack(stack1)
				<< "\nLength of char stack 2: " << length_of_char_stack(stack2) << endl;
		}break;

			// –азработать класс дл€ работы со стеком. Ёлемент стека Ц символ. 
			// »спользовать стек дл€ проверки правильности расстановки скобок
			// трех типов (круглых, квадратных и фигурных) во введенном выражении.
		case 8: {

		}break;

		}
	system("pause");
	return 0;
}