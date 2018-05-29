#pragma once
#include"Library.h"

template<typename T>
class BubbleSort {
public:
	static void Sort(T* arr, int size) {
		for (int i = 0;i < size - 1; i++)
		{
			for (int j = 0; j < size - 1;j++) {
				if (arr[j] > arr[j + 1])
					swap(arr[j], arr[j + 1]);
			}
		}
	}

	static void print(T*arr) {
		for (int i = 0;i < 5;i++)
			cout << arr[i] << endl;
	}

};