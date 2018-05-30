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

			//��������� ����� bubbleSort.
		case 3: {
			int a[5] = { 3,4,6,1,0 };
			BubbleSort<int>::Sort(a, 5);
			BubbleSort<int>::print(a);
		}break;

			//������ ������� bubbleSort.
		case 4: {
			int a[5] = { 3,4,6,1,0 };
			Sort(a, 5);
			for (int i = 0; i < 5; i++)
				cout << a[i] << endl;
		}break;

			//����������� ����� ��� ������ �� ������.
			// ������� ����� � �������������� �����. ��������� ����� ���
			// ������ ������������ ����� ������������������ �������������� ����� 
     		// a) � �������� �������;
	    	// b) � ��� �� �������(����� � ������������� 
			//                             ������������������ ������������ �����)
		case 5: {
			int a[10] = { 8,1,2,3,4,5,2,4,9 };
			
		}break;

			// ����������� ����� ��� ������ �� ������. 
			// ������� ����� � ����� �����. ������ ��� 
			// ����������� ������������������ ����� � ��� �����.
			// ������������ ������ ���� ��� ������� ���� ������������������� 
			// � ���� ����������� ������������������.
		case 6: {
			stack* f = new stack(5);
			for (int i = 1; i <= 5; i++)
			{
				f->push(i);
			}
			cout << f->pop() << "\n" << f->pop() << "\n" << f->pop() << 
				"\n" << f->pop() << "\n" << f->pop() << "\n";
		}break;

			// ����������� ����� ��� ������ �� ������. 
			// ������� ����� � ������. ������������ ��� �����, 
			// ���������� ������������������ ��������. 
			// ���������� ����� ����� ��������� � ������.
			// ������������� �������������� ��������� ������������ ��������� � ������.
		case 7:{
			CharStack stack1, stack2;

			input_char_stack(stack1);
			input_char_stack(stack2);

			cout << "Length of char stack 1: " << length_of_char_stack(stack1)
				<< "\nLength of char stack 2: " << length_of_char_stack(stack2) << endl;
		}break;

			// ����������� ����� ��� ������ �� ������. ������� ����� � ������. 
			// ������������ ���� ��� �������� ������������ ����������� ������
			// ���� ����� (�������, ���������� � ��������) �� ��������� ���������.
		case 8: {

		}break;

		}
	system("pause");
	return 0;
}