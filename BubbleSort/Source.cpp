#include"BubbleSort.h"

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
			//шаблонный класс bubbleSort.
		case 1: {
			int a[5] = { 3,4,6,1,0 };
			BubbleSort<int>::Sort(a, 5);
			BubbleSort<int>::print(a);
		}break;

			//шаблон функции bubbleSort.
		case 2: {
			int a[5] = { 3,4,6,1,0 };
			Sort(a, 5);
			for (int i = 0;i < 5;i++)
				cout << a[i] << endl;
		}break;
		}

	system("pause");
	return 0;
}